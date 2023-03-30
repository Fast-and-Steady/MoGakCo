apple_quality = input("Is it fresh?" )
apple_price = int(input("How much does an apple cost?" ))

if apple_quality == "Yes":
    if apple_price < 1000:
        print("buy 10 apples")
    else:
        print("buy 5 apples")
else:
    print("buy no apple")