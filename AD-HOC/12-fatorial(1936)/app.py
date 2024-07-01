fatorial = [1,2,6,24,120,720,5040,40320]

soma = 0
cont = 0
n = int(input())

i = 7

while i >= 0:
    if fatorial[i] <= n :
        soma += fatorial[i]; 
        cont += 1
        n -= fatorial[i]
    else:
        i-= 1
print(cont)
