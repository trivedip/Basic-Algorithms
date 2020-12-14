import random
from linkedlist import LinkedList
from tree import BST

a = LinkedList(5)
for _ in range(10):
    a.append(random.randint(0,50))

# a.print()

b = BST(5)

b.append(10)
for _ in range(5):
    b.append(random.randint(0,100))
b.pr()


