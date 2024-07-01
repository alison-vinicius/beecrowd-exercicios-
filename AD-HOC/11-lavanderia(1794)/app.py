n = int(input())
l = input().split()
s = input().split()

if (n >= int(l[0]) and n <= int(l[1])) and (n >= int(s[0]) and (n<= int(s[1]))):
    print("possivel")
else:
    print("impossivel")