import random 
import math

class Player:
    def __init__(self, letter):
        self.letter = letter
    
    def get_moves(self,game):
        pass

class ComputerPlayerRandom(Player):
    def __init__(self,letter):
        super().__init__(letter)

class HumanPlayer(Player):
    def __init__(self,letter):
        super().__init__(letter)

