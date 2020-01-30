# trees can be traversed in different ways:
# Depth First Traversals:
# (a) Inorder (Left, Root, Right) : 4 2 5 1 3
# (b) Preorder (Root, Left, Right) : 1 2 4 5 3
#(c) Postorder (Left, Right, Root) : 4 5 2 3 1

# Breadth First or Level Order Traversal : 1 2 3 4 5

# 1. Algorithm Inorder(tree)
   #1. Traverse the left subtree, i.e., call Inorder(left-subtree)
   #2. Visit the root.
   #3. Traverse the right subtree, i.e., call Inorder(right-subtree)

# 2. Algorithm Preorder(tree)
   #1. Visit the root.
   #2. Traverse the left subtree, i.e., call Preorder(left-subtree)
   #3. Traverse the right subtree, i.e., call Preorder(right-subtree) 

# 3. Algorithm Postorder(tree)
   #1. Traverse the left subtree, i.e., call Postorder(left-subtree)
   #2. Traverse the right subtree, i.e., call Postorder(right-subtree)
   #3. Visit the root.

   # Python program to for tree traversals 

# A class that represents an individual node in a 
# Binary Tree 
class Node: 
	def __init__(self,key): 
		self.left = None
		self.right = None
		self.val = key 


# A function to do inorder tree traversal 
def printInorder(root): 

	if root: 

		# First recur on left child 
		printInorder(root.left) 

		# then print the data of node 
		print(root.val), 

		# now recur on right child 
		printInorder(root.right) 



# A function to do postorder tree traversal 
def printPostorder(root): 

	if root: 

		# First recur on left child 
		printPostorder(root.left) 

		# the recur on right child 
		printPostorder(root.right) 

		# now print the data of node 
		print(root.val), 


# A function to do preorder tree traversal 
def printPreorder(root): 

	if root: 

		# First print the data of node 
		print(root.val), 

		# Then recur on left child 
		printPreorder(root.left) 

		# Finally recur on right child 
		printPreorder(root.right) 


# Driver code 
root = Node(1) 
root.left	 = Node(2) 
root.right	 = Node(3) 
root.left.left = Node(4) 
root.left.right = Node(5) 
print "Preorder traversal of binary tree is"
printPreorder(root) 

print "\nInorder traversal of binary tree is"
printInorder(root) 

print "\nPostorder traversal of binary tree is"
printPostorder(root) 
