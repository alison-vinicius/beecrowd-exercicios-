quebrou = 0
for i in range(int(input())):
    x = input().split()
    lata , copo = int(x[0]), int(x[1])

    if lata > copo:
        quebrou += copo
print(quebrou)