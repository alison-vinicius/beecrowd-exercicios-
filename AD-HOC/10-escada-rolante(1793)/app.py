while True:
    ant = 0
    tempo = 10
    n = int(input())
    if n == 0: 
        break

    num = input().split()

    ant = int(num[0])
    for i in range(1,len(num)):

        if int(num[i]) > int(ant) + 9:
            tempo += 10
        else:
            tempo += int(num[i]) - int(ant)
        ant = num[i]
        
    print(tempo)

    