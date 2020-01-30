# A tree whose elements have at most 2 children is called a binary tree. 
# Since each element in a binary tree can have only 2 children, we typically name them the left and right child.

# A Binary Tree node contains following parts:
# 1. Data
# 2. Pointer to left child
# 3. Pointer to right child

# Below is an example of a tree node with an integer data.
# # Python program to introduce Binary Tree 

# A class that represents an individual node in a 
# Binary Tree 
class Node: 
	def __init__(self,key): 
		self.left = None
		self.right = None
		self.val = key 


# create root 
root = Node(1) 
''' following is the tree after above statement 
		1 
	/ \ 
	None None'''

root.left	 = Node(2); 
root.right	 = Node(3); 
	
''' 2 and 3 become left and right children of 1 
		1 
		/ \ 
		2	 3 
	/ \ / \ 
None None None None'''


root.left.left = Node(4); 
'''4 becomes left child of 2 
		1 
	/	 \ 
	2		 3 
	/ \	 / \ 
4 None None None 
/ \ 
None None'''

# Summary: Tree is a hierarchical data structure. 
# Main uses of trees include maintaining hierarchical data, providing moderate access and insert/delete operations. 
# Binary trees are special cases of tree where every node has at most two children.

