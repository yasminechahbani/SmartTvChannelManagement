# director.py
import cv2
import mediapipe as mp
from logic.finger import Finger
from logic.hand import Hand

class Director:
    """
        The Director class:

        This class is the main loop of the program and handles creating the fingers and hands objects,
        connecting to the camera, and using MediaPipe to get point coordinates and update the finger objects
        with those points.
    """
    def __init__(self):
        # The initialization function, creates the hand objects and sets up other classes that need to be used
        self._hand1 = Hand('Right', self._create_fingers())
        self._hand2 = Hand('Left', self._create_fingers())

    def _create_fingers(self):
        # Creates the finger objects to be put into a hand object
        return [Finger('thumb'), Finger('pointer'), Finger('middle'), Finger('ring'), Finger('pinky')]

    def run(self):
        # Main loop, uses camera and MediaPipe to get hand point locations, shows the camera's view, and counts fingers up
        cap = cv2.VideoCapture(0)
        cap.set(3, 640)
        cap.set(4, 480)
        mp_hands = mp.solutions.hands
        hands = mp_hands.Hands()
        mp_draw = mp.solutions.drawing_utils

        while True:
            _, img = cap.read()
            img = cv2.flip(img, 1)
            h, w, _ = img.shape
            img_RGB = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
            results = hands.process(img_RGB)

            if results.multi_hand_landmarks:  # if a hand is detected do the following
                for hand_landmarks in results.multi_hand_landmarks:
                    hand_lmks = [(lm.x * w, lm.y * h) for lm in hand_landmarks.landmark]
                    self._update_finger_states(hand_lmks)

                    # Count fingers up
                    fingers_up_count = sum(1 for finger in self._hand1.get_fingers() if finger.is_up())
                    fingers_up_count += sum(1 for finger in self._hand2.get_fingers() if finger.is_up())

                    # If all fingers are extended, count them as one hand gesture
                    if fingers_up_count == 5:
                        fingers_up_count = 1

                    # Draw text on the image
                    cv2.putText(img, f"Fingers up: {fingers_up_count}", (20, 50), cv2.FONT_HERSHEY_SIMPLEX, 1, (255, 255, 255), 2, cv2.LINE_AA)

                    mp_draw.draw_landmarks(img, hand_landmarks, mp_hands.HAND_CONNECTIONS,
                                           mp_draw.DrawingSpec(color=(0, 0, 255), thickness=2, circle_radius=2),
                                           mp_draw.DrawingSpec(color=(0, 255, 0), thickness=2, circle_radius=2))  # draws the lines and dots on visible hands

            cv2.imshow("Image", img)  # show the image
            if cv2.waitKey(1) == ord('q'):
                break

    def _update_finger_states(self, hand_lmks):
        # Update finger states based on hand landmarks
        for finger in self._hand1.get_fingers():
            finger.update_state(hand_lmks)
        for finger in self._hand2.get_fingers():
            finger.update_state(hand_lmks)

