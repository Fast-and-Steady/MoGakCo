import random 
#in C equivalent of #include

player = input("choose one among (rock, scissors, paper): ")

number = random.randint(0,2)
#randomly pick a number between integer 0, 1 and 2

if (number == 0):
    computer = "rock"
elif (number == 1):
    computer = "scissors"
elif (number == 2):
    computer = "paper"

print("player: ", player, "/ computer:", computer)

if (player == computer):
    print("draw!")
elif (player == "rock"):
    if (computer == "paper"):
        print("computer's won!")
    else:
        print("player's one!")
elif (player == "paper"):
    if(computer == "rock"):
        print("player's won!")
    else:
        print("computer's won!")
elif (player == "scissors"):
    if(computer == "rock"):
        print("computer's won!")
    else:
        print("player's won!")