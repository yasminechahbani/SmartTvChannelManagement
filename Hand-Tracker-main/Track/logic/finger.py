# finger.py
class Finger:
    """
        The Finger class:

        This class creates the finger objects that can be updated with new locations for each iteration
    """
    def __init__(self, name):
        # The initialization function, creates the variables that store the points, and the name of the finger
        self._name = name
        self._up = False

    def update_state(self, hand_lmks):
        # Update finger state based on hand landmarks
        if self._name == 'thumb':
            self._up = hand_lmks[4][1] < hand_lmks[3][1]
        elif self._name == 'pointer':
            self._up = hand_lmks[8][1] < hand_lmks[6][1]
        elif self._name == 'middle':
            self._up = hand_lmks[12][1] < hand_lmks[10][1]
        elif self._name == 'ring':
            self._up = hand_lmks[16][1] < hand_lmks[14][1]
        elif self._name == 'pinky':
            self._up = hand_lmks[20][1] < hand_lmks[18][1]

    def is_up(self):
        # Returns if the finger is up or not
        return self._up

