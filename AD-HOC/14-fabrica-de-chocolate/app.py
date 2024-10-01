while True:
    x = input().split()

    if int(x[0]) + int(x[1]) + int(x[2]) == 0:
        break



    volume = ((int(x[0]) * int(x[1]) * int(x[2])) ** (1/3))
    v = str(volume)
    i = v.index('.')

    print(v[:i])
