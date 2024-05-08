# hand.py
class Hand:
    """
        The Hand class:

        This class holds information about which hand it is and which fingers it has.
    """
    def __init__(self, hand, fingers):
        # The initialization function, creates the variables that store the hand name and which fingers it has
        self._hand = hand
        self._fingers = fingers

    def get_name(self):
        # Returns the name of the hand
        return self._hand

    def get_fingers(self):
        # Returns all finger objects that are in this hand
        return self._fingers

