# Introduction to for loops in python

a = ["banana", "apple", "microsoft"]

# element can be changed to anything, and be called within the for loop - as is shown in the print statement 
for element in a:
    print(element)

# to find the sum of this list
b = [20, 10, 5]
# initialize new variable
total = 0

for e in b:
    # add each element to total
    total = total + e
    print(total)

# 1, 2, 3, 4 - use of range saves the effort of hard coding all these numbers sequencially
# using 'list' will list out the numbers in the console
c = list(range(1,5))
print(c)

# you can use range in a for loop
for i in range(1, 5):
    print(i)

# you can add these numbers together
# initialize the total number 
total2 = 0
for i in range(1, 5):
    # shortcut for total2 = total + i (increment it by 'i')
    total2 += i
print(total2)


print(list(range(1, 8)))
# to find multiples of 3
total3 = 0
for i in range(1, 8):
    if i % 3 == 0:
        total3 += i
print(total3)


# for loop - generate the numbers 1- 100
for num in range(1, 100):
    if num % 3 == 0 and num % 5 == 0:
        print('fizzbuzz')
    elif num % 3 == 0:
        print('fizz')
    elif num % 5 == 0:
        print('buzz')
    else:
        print(str(num))