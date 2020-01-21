# Introduction to stacks. 
# In Python, we can use the List data type because we can add or remove the item from the list. A list is a built-in datatype we can use to create a Stack. 
# The Stack is an Abstract Data Type in Python. Stack stores an Item in order in which they were added. 
# Items can add and removed from the top of the stack. 
# The order may be LIFO(Last In First Out) or FILO(First In Last Out).

# the Push function - inserting items into the stack
class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

dataStack = Stack()
dataStack.push('krunal') #using the keyword 'push', we are adding an element to the list - Time Complexity: O(1)

print(dataStack.items)

# the Pop function - removing items from the stack


class Stack:
    def __init__(self):
        self.items = ['Imhotep', 'Anak Su na moon']

    def push(self, item):
        self.items.append(item)
    
    def pop(self):
        self.items.pop() #using the 'pop' function, removing the item from the list - Time Complexity: O(1)


# Practice Question

# Determine if a given set of string is a palimdrome.



