while True:
    k = int(input())
    if k == 0:
        break 
    x, y = map(int, input().split())
    for i in range(k):
        pontoA, pontoB = map(int, input().split())
        
        if pontoA > x and pontoB > y:
            print('NE')
        elif pontoA < x and pontoB > y:
            print('NO')
        elif pontoA < x and pontoB < y:
            print('SO')
        elif pontoA > x and pontoB < y:
            print('SE')
        else: 
            print('divisa') 