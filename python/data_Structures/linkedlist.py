class Node:
    def __init__(self,val):
        self.value = val
        self.next = None

class LinkedList:
    def __init__(self,val):
        self.head = Node(val)
    
    def append(self,val):
        temo = self.head
        while self.head.next:
            self.head = self.head.next
        
        self.head.next = Node(val)
        self.head = temo
    
    def print(self):
        temo = self.head
        while temo:
            print(temo.value)
            temo = temo.next

if __name__ == "__main__":
    print("This file is supposed to be called from driver.py file.")