#program: managing friends' list
menu = 0
friends = []
while menu != 9:
    print("*******************************")
    print("1. see friends' list")
    print("2. add a new friend's name")
    print("3. delete a existing name")
    print("4. change friend's name")
    print("9. close the list")
    print("*******************************")
    menu = int(input("Press a number: "))
    if menu == 1
        print(friends)
    elif menu == 2:
        name = input("input new friend's name: ")
        friends.append(name)
    elif menu == 3:
        del_name = input("input a name you want to delete: ")
        if del_name in friends:
            friends.remove(del_name)
        else:
            print("there's no", del_name, "found." )
    elif menu == 4:
        former_name = input("input a name you want to change: ")
        if former_name in friends:
            index = friends.index(former_name)
            current_name = input("input a new name: ")
            friends[index] = current_name
        else:
            print("there's no", former_name, "found.")
