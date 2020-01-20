# set is a type of data that stores a set of things - unique things

# {1, 3} <- 3
# -> {1, 3}

a = set()
print(a)

a.add(1)
print(a)

a.add(2)
print(a)

# we can iterate over every element in a set
for x in a: 
    print(x)


given_list1 = [1, 1, 2, 4, 2]
new_set1 = set()
for x in given_list1:
    new_set1.add(x)
print(new_set1)

# sets don't store data in order of what was added 