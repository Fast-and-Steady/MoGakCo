def greeting(input):
    try:
        name = str(input)
    except:
        name = -1
        print("Please input your name")

    return "Hello" + name

print(greeting("Connect"))
