# Like stack, queue is a linear data structure that stores items in First In First Out (FIFO) manner
# With a queue the least recently added item is removed first. 
# Queue in Python can be implemented by the following ways:
#-list
#-collections.deque
#-queue.Queue

# Enqueue: Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition – Time Complexity : O(1)
# Dequeue: Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition – Time Complexity : O(1)
# Front: Get the front item from queue – Time Complexity : O(1)
# Rear: Get the last item from queue – Time Complexity : O(1)


# Python program to 
# demonstrate queue implementation 
# using list 

# Initializing a queue 
queue = [] 

# Adding elements to the queue 
queue.append('a') 
queue.append('b') 
queue.append('c') 

print("Initial queue") 
print(queue) 

# Removing elements from the queue 
print("\nElements dequeued from queue") 
print(queue.pop(0)) 
print(queue.pop(0)) 
print(queue.pop(0)) 

print("\nQueue after removing elements") 
print(queue) 

# Uncommenting print(queue.pop(0)) 
# will raise and IndexError 
# as the queue is now empty 
