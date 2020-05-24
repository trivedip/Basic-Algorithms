class Node:
    def __init__(self,val):
        self.value = val
        self.next = None

class LinkedList:
    def __init__(self,val):
        self.head = Node(val)
    
    def append(self,val):
        # temo = self.head
        while self.head:
            self.head = self.head.next
        
        self.head = Node(val)
    
    def print(self):
        temo = self.head
        while temo:
            print(temo.value)
            temo = temo.next