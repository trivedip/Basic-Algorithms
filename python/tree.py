class Node:
    # Node class for creating tree nodes, has value to store data and left and right to direct to childrens
    def __init__(self,val):
        self.value = val
        self.left = None
        self.right = None

class BST:
    # Class to create binery search tree. 
    root = None
    def __init__(self,val):
        if not self.root:
            self.root = Node(val)
        else: self.append(val)
    
    def append(self,val):
        self._append(self.root, val)    
    
    def _append(self, node, val):
        if not node:
            return False
        
        if (val < node.value):
            if not node.left:
                node.left = Node(val)
                return True
            else:
                self._append(node.left, val)
        else:
            if not node.right:
                node.right = Node(val)
                return True
            else:
                self._append(node.right,val)

    def pr(self):
        temp_root = self.root
        self._print(self.root)
        self.root = temp_root

    def _print(self, temp_node):
        if not temp_node:
            return False
        
        else:
            if(temp_node.left):
                self._print(temp_node.left)
            print(temp_node.value)
            if(temp_node.right):
                self._print(temp_node.right)

    