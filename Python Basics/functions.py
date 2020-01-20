# different ways to use functions in python
# a collection of code
def function1():
    print("ahhhh")
    print("ahhhh 2")
print("this is outside the function")

 # a mapping 
 # input or an argument 

def function2(x):
     return 2*x

a = function2(4)

print(a)

# both methods above combined

def function3(x, y):
    return x + y

e = function3(1, 2)
print(e)


def function4(x):
    print(x)
    print("still in this function")
    return 3*x

f = function4(4)
print(f)


def function5(some_argument):
    print(some_argument)
    print("weeee")

print(function5(4))


# Now, let's revisit the bmi calculator, using functions
# bmi calculator

# data we will pass through
name1 = "Gio"
height_m1 = 2
weight_kg1 = 90

name2 = "Gio's sister"
height_m2 = 1.8
weight_kg2 = 70

name3 = "Gio's brother"
height_m3 = 2.5
weight_kg3 = 160

# declare our function

def bmi_calculator(name, height_m, weight_kg):
    # equation to compute bmi 
    bmi = weight_kg / (height_m ** 2)
    print("bmi: ")
    print(bmi)
    
    # if else statement to determine if the person is overweight based on their bmi
    if bmi < 25:
        return name + " not overweight"
    else:
        return name + " is overweight"

# pass through our data 
result1 = bmi_calculator(name1, height_m1, weight_kg1)
result2 = bmi_calculator(name2, height_m2, weight_kg2)
result3 = bmi_calculator(name3, height_m3, weight_kg3)
  
# print results onto console
print(result1)
print(result2)
print(result3)

# Create a function that converts km to miles
# equation is km = 1.6 * miles
 