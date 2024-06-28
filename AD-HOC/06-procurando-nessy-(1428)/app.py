

for i in range(int(input())):
    x = input().split()
    a = int(x[0])
    b = int(x[1])

    flag = 0

    sonares = ((a-2)//3 ) * ((b-2)//3 )

    if((a-2)%3) > 0:
        flag = 1
        sonares += (b-2)//3
        if (b-2)%3 > 0:
            sonares += 1
  
    if( (b-2)%3) > 0:
        if flag == 1:
            sonares += (a-5)//3
            if ((a-5) %3) > 0:
                    sonares += 1
        else:
            sonares += (a-2) //3
            if ((a-2)%3) >0:
                sonares += 1; 
              
    
    print(sonares)

    
    