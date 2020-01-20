# Introduction to a while loop

#review of for loops 
total = 0
for i in range(1,5):
    total += i
print(total)

# while loop
total2 = 0
j = 1
while j < 5:
    total2 += j 
    j += 1
print(total2)




# both methods get the total of 10. Why use while loops? Useful when you don't know how many loops you need beforehand. 
# ex: you want to find the sum of the positive numbers within the list
given_list = [5, 4, 4, 3, 1, -2, -3, -5]

# total would refer to the value, whereas the i would refer to the index of the array
total3 = 0
i = 0
# in other words, while i(whichever number starting) is greater than 0(because we are only finding the positive numbers)
while given_list[i] > 0: 
    # add the current index(i) to the total
    total3 += given_list[i]
    # then add 1 to check the next number in the array 
    i += 1
# break out of the while loop if the number is less than 0
print(total3)




# Now, let's answer the same question, but this time, use a for loop to answer it 
given_list2 = [5, 4, 4, 3, 1, -2, -3, -5]
total4 = 0

# element would refer to the index number of the array
for element in given_list2:
    # if we want to find the sum of only positive numbers, we can use a break statment 
    if element <= 0:
        break
    total4 += element
# we will get the same total as the previous answers 
print(total4)


# Now, we will come back to the while loop
total5 = 0
i = 0
while True:
    total5 += given_list2[i]
    i += 1
    if given_list2[i] <= 0:
        break
print(total5)





# ex 2: find the sum of the negative numbers 
given_list3 = [7, 5, 4, 4, 3, 1, -2, -3, -5, -7]
total6 = 0
# this would make the index start at the last element in the array
i = len(given_list3) - 1

while given_list3[i] < 0:
    total6 += given_list3[i]
    # to subtract 1 to the index - reversing the array index direction
    i -= 1
print(total6)