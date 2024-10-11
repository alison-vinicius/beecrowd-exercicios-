
soma = 0
operacao = input()

for i in range (12):
    for j in range(12):
        n = int(float(input()))
        if i < j:
            soma += n
    
if(operacao == "S"):
    print(round(soma))
else:
    soma = round(soma)
    print(f'{soma/66:.1f}') 

      
    
        


