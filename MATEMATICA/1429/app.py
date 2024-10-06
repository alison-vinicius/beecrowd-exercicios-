vetor = [120, 60, 24, 2 , 1]
soma = 0
while True:
    x = input()

    if x == "0":
        break

    soma = 0
    j = 4

    for i in range(len(x)-1, -1, -1):
        soma += vetor[j] * int(x[i])
        print(soma)
        j -= 1

       
    
    print(soma)


