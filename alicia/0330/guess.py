import random

tries = 0
number = random.randint(1, 100)

print("Guess a number between 1 and 100")

while tries < 10:
    guess = int(input("put a number: "))
    tries = tries + 1
    if guess < number:
        print("higher!")
    elif guess > number:
        print("lower!")
    else:
        break

if guess == number:
    print("congratulations. you've tried", tries, "times.")
else:
    print("the original number is", number)