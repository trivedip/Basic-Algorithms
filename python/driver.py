import random
from tree import LinkedList

a = LinkedList(5)
for _ in range(10):
    a.append(random.randint(0,50))

a.print()