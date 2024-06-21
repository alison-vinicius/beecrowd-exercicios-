while True:
    a1 = 0
    b1 = 0
    n = int(input())
    if n == 0: break 
    for i in range(n):
        x = input().split()
        if int(x[0]) > int(x[1]):
            a1 += 1
        elif int(x[1]) > int(x[0]):
            b1 += 1
    print(a1, b1)
