import random
from words import words
def get_random_name():
    # picks a random word from list which is located in words.py
    return random.choice(words)

def hangman():
    # Hangman game
    a = get_random_name() 
    word_set = set(a) #Creates set of characters of currently chosen word
    user_guess = set() # Set of characters which are already guessed by the user
    
    while len(word_set) > 0:
        user_char = input("Enter your guess: ")        
        if user_char in word_set:
            print('You guessed it right!')
            user_guess.add(user_char)
            word_set.remove(user_char)
            current_stat = [letter.upper() if letter in user_guess else '-' for letter in a] # Creates list to represent current state of the game
            print(f"Current status: {' '.join(current_stat)}")

if __name__ == '__main__':
    hangman()