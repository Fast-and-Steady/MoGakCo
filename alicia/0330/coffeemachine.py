coffee = 10
money = 1.5
while money:
    print("I pour you a cup of coffee since you've paid.")
    coffee = coffee - 1
    print("Now I have %d cups of coffee left." % coffee)
    if not coffee:
        print("There's no coffee. The machine is closed.")
        break