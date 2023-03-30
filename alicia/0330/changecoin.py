money, c500, c100, c50, c0 = 0, 0, 0, 0, 0

money = int(input("What amount of coins would be changed? "))

c500 = money // 500
money %= 500

c100 = money // 100
money %= 100

c50 = money // 50
money %= 50

c10 = money // 10
money %= 10

print("\n 500wons ==> %d coins" % c500)
print("100wons ==> %d coins" % c100)
print("50wons ==> %d coins" % c50)
print("10wons ==> %d coins" % c10)
print("moneys left since cannot be exchanged ==> %d wons \n" % money)