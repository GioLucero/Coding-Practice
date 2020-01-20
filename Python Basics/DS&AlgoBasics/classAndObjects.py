# Introduction to classes and objects

# when we create the class Robot, we cam pass different objects within it by inserting the object as the argument
class Robot:
    #adding a constructor
    # in the constructor, we initialize the attributes so that we can pass them through our class and run the function
    def __init__(self, name, color, weight):
        # in this way, we can easily pass the attribues
        self.name = name
        self.color = color
        self.weight = weight

    # we insert self - referring to the differnet objects within the class
    def introduce_self(self):
        print("Hi, my name is " + self.name) # this in java

# listing the attributes of the class 'Robot'
# r1 = Robot()
# r1.name = "Tom"
# r1.color = "red"
# r1.weight = 30

# r2 = Robot()
# r2.name = "Jerry"
# r2.color = "blue"
# r2.weight = 40

# instead of writing out all of these attributes manually, we can easily pass them in an argument bc of the constructor
r1 = Robot("Tom", "red", 30)
r2 = Robot("Jerry", "blue", 40)

# run the function
r1.introduce_self()
r2.introduce_self()


# Introduction pt. 2

class Person:
    def __init__(self, n, p, i):
        self.name = n
        self.personality = p
        self.is_sitting = i

    def sit_down(self):
        self.is_sitting = True

    def stand_up(self):
        self.is_sitting = False

p1 = Person("Alice", "aggressive", False)
p2 = Person("Becky", "talkative", True)

# p1 owns r2
p1.robot_owned = r2 # this defines a new attribute
p2.robot_owned = r1

p1.robot_owned.introduce_self()