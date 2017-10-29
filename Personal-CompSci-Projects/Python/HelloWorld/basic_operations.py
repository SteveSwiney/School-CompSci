# Steven Swiney
# TestFile to learn

print("This program is just testing the basic operations in python")
print("\n")
print("As well as seeing when variables are assigned and such since it's a line-by-line interpreter")
print("\n")
print("\n")
x = 1
y = 4
z = 149

a = z // y
print(a)
print(a + x + y)

a=5
print(a)

# So it is quite literally interpreted line by line as it comes accross it, as if
# it were reading it.  That is convienent

#Def is how you define functions...
#Lets try That

def fib_seq(n):
    #Recursive function that prints fibonacci sequence
    if n <= 1:
        return n
    else:
        return fib_seq(n-1) + fib_seq(n-2)

# Take user input to set n_terms
n_terms = int(input("How many terms of the sequence?"))


# amount of times it will run
# n_terms = 25

if n_terms <= 0:
    print("Invalid number of terms, please enter a postive integer")
else:
    print(" ~~ Fibonacci Sequence ~~ ")
    print("\n")
    for i in range(n_terms):
        print(fib_seq(i))

# Python is very fast!
