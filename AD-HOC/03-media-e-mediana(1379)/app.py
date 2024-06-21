while True:
    x = input().split()

    if x[0] == "0" and x[1] == "0": 
        break

    c = (3*int(x[0])) - (int(x[0])+int(x[1]))

    print(c)
