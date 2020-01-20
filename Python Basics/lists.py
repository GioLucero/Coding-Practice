# Introduction to list comprehension basics

a = [1, 3, 5, 7, 9, 11]
# .append() to add new elements in the list

b = []
b.append(10)
b.append(20)
print(b)

c = []
# using the list 'a' above
# appending the doubled value within 'a' by creating a empty square bracket and appending the x value * 2
for x in a:
    c.append(x * 2)
print(c)

# simplified syntax than the one above
d = [x * 2 for x in a]
print(d)

# [1, 4, 9, 16, 25, 36] - create a squared list
el = []
for x in range(1, 7):
    el.append(x ** 2)
print(el)

# simplified version - list comprehension
e2 = [x ** 2 for x in range(1, 7)]
print(e2)

# [36, 25, 16, 9, 4, 1] - create the list reversed
for x in range(6, 0 , -1): #starts at 6, ends at 0 (not inlcuding 0), and goes down by 1
    print(x)

f1 = []
for x in range(6, 0 , -1):
    f1.append(x**2)
print(f1)

# list comprehension version 

f2 = [x ** 2 for x in range(6, 0, -1)]
print(f2)