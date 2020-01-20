# Introduction to stacks. 
# In Python, we can use the List data type because we can add or remove the item from the list. A list is a built-in datatype we can use to create a Stack. 
# The Stack is an Abstract Data Type in Python. Stack stores an Item in order in which they were added. 
# Items can add and removed from the top of the stack. 
# The famous principle the Stack is using called the LIFO(Last In, First Out).

# the Push function - inserting items into the stack
class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

dataStack = Stack()
dataStack.push('krunal')

print(dataStack.items)

# the Pop function - removing items from the stack


