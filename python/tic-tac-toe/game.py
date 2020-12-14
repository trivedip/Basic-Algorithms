class TicTacToe:
    def __init__(self,):
        self.board = [' ' for _ in range(9)]
        self.curent_winner = None 
    
    def print_board(self):
        for x in [self.board[i*1:(i+1)*3] for i in range(3)]:
            print (x)
