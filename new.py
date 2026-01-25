print("Hello world")
print("*" * 10)
first = "Thi" 
last = "Chhorvorn"
full = f"{first} {last}"
print(full)
# word
course = " phython programming" 
# tver oy course tom all
print(course.upper())
# tver oy course toch all 
print(course.lower())
# tver oy course tom khang muk
print(course.title())
# if course space it print have space
print(course.strip())
# find word in course 
print(course.find("pro"))
# change word in course 
print(course.replace("p", "j"))
# if word have in course will print true
print("pro" in course)
# if word haven't in course will print false
print("cram" in course)
# number 
print(round(5.9))
print(abs(-4.7))
import math
math.ceil(5.5)

# all ander this we give number to int that it + number we give in back
# x = input("x: ")
#y = int(x) + 1 
#print(f"x: {x}, y: {y}")
# fruit
fruit = "Banana"
print(fruit)
# compare
temperature = 21
if temperature > 30: 
# we use if when we want compare number or item 
    print("It's warm")
    print("Drink water")
# we use elif when result true 
elif temperature > 20:
    print("It's nice")
# we use else when result false
else:
    print("It's cold")
# for age
age = 17
if age >= 18:
    print("Eligible")
else:
    print("Not eligible")
age = 22
message = "Eligible" if age >= 18 else "Not eligible"
print(message)
# lern use and
high_income = True
good_credit = True
# if high_income = true and good_credit = true. it true 
if high_income and good_credit:
    print("Eligible")
# if high_income = true and good_credit = false. it false 
else:
    print("Not eligible")
# lern use or 
high_income = False
good_credit = False
# if high_income = true and good_cradit = false. it true
if high_income or good_credit:
    print("Eligible")
else:
    print("Not eligible")
# lern use not 
high_income = True
good_credit = False
student = True
# we use not when item true it print false, but if item false it print true 
if not student:
    print("Eligible")
else:
    print("Not eligible")
# lern use and plus or and plus not
high_income = True
good_credit = False
student = True
if high_income or good_credit or not student:
    print("Eligible")

if 10 == "10": 
    print("a")
elif "bag" > "apple" and "bag" > "cat":
    print("b")
else:
    print("c")
# for loop 
for number in range(3):
# we use for loop for when we want number of words follow we want
     print("I love You!!", number + 1, (number + 1) * ".")
# 1more 
for number in range(1, 4):
    print("I love you!!", number, number * ".")
# for ..Else
successful = True
for number in range(3):
    print("I love you!!")
    if successful:
        print("successful")
        break
else:
    print("I love you 3 time and failed")
# Nested loops
for x in range(5): # we use Nested loops when we need number ex; (0,0)
    for y in range(3):
        print(f"({x}, {y})")
# iterables
for x in [1, 2, 3, 4, 5]: # we use iterables when we need anything have range roll stand
    print(x)
for y in ("Phython"):
    print(y)
for item in "shopping_card":
    print(item)
# While loops
number = 100
while number > 0:
    print(number)
    number //= 2
# we use while loops follow anything we need ex; input... 
command = "you"
while command != "quit":
    command = input(">")
    print("LOVE", command)
# infinite loops
while True:
    command = input(">>")
    print("LOVE", command)
    if command.lower() == "quit":
# we use infinite loops when we want code is run forever
        break
# exercise we want: 2 4 6 8 we have 4 even number.
cout = 0
for number in range(1, 10):
    if number % 2 == 0:
        cout += 1
        print(number)
print(f"we have {cout} even number")
# Function
def greet():
    print("Hello there")
    print("Well come to Cambodia")
# we use function when we need show to someone
greet()
# Arguments
def greet(first_name, last_nam):
    print(f"Hi {first_name} {last_nam}")
    print("Welcome cambodia")


greet("Thi", "Chhorvorn")
# Types of functions
def greet(name):
    print(f"Hi {name}")


def get_greeting(name):
    return f"Hi {name}"

message = get_greeting("Vorn")
file = open("content.txt", "w")
file.write(message)
# keyword Arguments 
def increment(number, by):
    return number + by


result = increment(3, 4)
print(result) # we can write print(increment(3, 4)) it okay.
# Default Arguments
def increment(number, by=2):
    return number + by
# we use default arguments when we want plus numbers in print

print(increment(5, 4))
# *args, wait and what?
def multiply(*numbers):
    total = 1
    for numbers in numbers: 
        total *= numbers
    return total


print(multiply(2, 3, 4, 5))
