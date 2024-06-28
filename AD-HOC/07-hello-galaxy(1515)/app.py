while True:
    menor = 3000
    n = int(input())
    if n == 0:
        break
    for i in range(n):

       
        x = input().split()
        planeta = x[0]
        ano = int(x[1])
        tempo = int(x[2])

        if ano -tempo < menor:
            menor = ano - tempo 
            planetaA = planeta
        
    print(planetaA)