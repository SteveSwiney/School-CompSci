# Steven Swiney
# TestFile: Learning about python datatypes

# Note: No need to declare variables before they are used!

import math  # These are for math, probabliity, statistics and random #s
import random
import fractions  # Python fractions seems like a super useful module...



a = 1
b = 3.2        # Assign these inline!:  a, b, c = 5, 3.2, "Hello"
c = "string!"
# Variables are assigned types automatically based on what they are assigned

# --------- Data Types in Python ----------- #
#int, float, and complex numbers (class) all fall under the "python numbers" class
# integers do not have a length limit, only memory limit

print (a, "is of type ", type(a))
print("\n")

# random numbers
print(random.randrange(1,100))

print("\n")

print(fractions.Fraction('8.135'))
# Can print the fraction as a string & it look better than if I left it a float


#----------- Python Lists ----------------#

#lists can include different Types
mylist = [1,'dog',1.44, 4, 5, 7, 9, 20, 'EoF']

# Seems to Allow for much simplier accessing
print(mylist[2])
print("\n")
print(mylist[3])
# Perfectly simple way to make multidimensional Lists
print("\n")
#Print each elemnt of the list
for i in range(len(mylist)):
    print(mylist[i])

#------------- Tuple type of list ------------------#
print("\n")
# similar to a list however the elements cannot be changed but there are advantages:
# Pros: use Tuple for diff datatypes & list for same Types
# iterating through tuple is faster than with list
# If you have data that doesn't change, implementing it as tuple will guarantee that it remains write-protected.

tuple = ("dog", [8, 4, 6], (1, 2, 3))
# a tuple is put within () instead of brackets like a list is
print(tuple)
tuple = "dog", 8, 5, 4, 2.5
# tuple can be created without parentheses
# also called tuple packing
# tuple unpacking is also possible

# -- Deleting a tuple --
# Cannot delete single elements, only the whole thing
del tuple
print("\n")
print("\n")


#-------------- END ----------# 
