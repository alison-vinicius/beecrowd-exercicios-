n = int(input())
if n<= 10:
    if n<= 1:
        print("Top 1")
    elif n<= 3:
        print("Top 3") 
    elif n<= 5:
        print("Top 5") 
    else:
        print("Top 10") 
elif n<= 25:
    print("Top 25") 
elif n<= 50:
    print("Top 50") 

else:
    print("Top 100")

