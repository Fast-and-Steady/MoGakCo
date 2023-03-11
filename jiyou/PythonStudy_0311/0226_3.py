astr = 'Hello Connect'
gotr = 'Good Morning'
detr = 'Good Night'
try:
    istr = int(astr)
    gotr = 'Have a nice day'
    print(istr)
except:
    try:
        print(gotr)
    except:
        print(detr)
        