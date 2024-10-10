x = input().split()
a , b = int(x[0]), int(x[1])

   
for r in range(abs(b)):
        q = ((a-r)//b)
        if(a == (b*q)+r):
            print(q , r)
            break
        
   


