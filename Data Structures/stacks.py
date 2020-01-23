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

# Pseudocode
# 1. Create a class Stack with instance variable items initialized to an empty list.
# 2. Define methods push, pop and is_empty inside the class Stack.
# 3. The method push appends data to items.
# 4. The method pop pops the first element in items.
# 5. The method is_empty returns True only if items is empty.
# 6. Prompt the user for a string and push all the characters to a stack.
# 7. Construct the reversed string by popping characters from the stack.
# 8. Deterime whether the string is palindromic by comparing the two strings.

class Stack:
    #  An instance of Stack is created.
    def __init__(self): 
        self.items = []
 
    def is_empty(self):
        return self.items == []
 
    def push(self, data):
        self.items.append(data)
 
    def pop(self):
        return self.items.pop()
 
 
s = Stack()
# The user is prompted to enter a string.
text = input('Please enter the string: ')
 
 # The characters of the string are pushed to the stack.
for character in text:
    s.push(character)
 
# The reversed string is constructed by popping the characters from the stack.
reversed_text = ''
while not s.is_empty():
    reversed_text = reversed_text + s.pop()
 
# If the reversed string and the original string are the same, then the string is palindromic.
if text == reversed_text:
    print('The string is a palindrome.')
else:
    print('The string is not a palindrome.')
