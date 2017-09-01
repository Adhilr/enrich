n=int(input())
l=[]
d={}
for i in range(n):
    x=input().split()
    if(x[1] not in l):
        l.append(x[1])
        d[x[1]]=[]
    d[x[1]].append(x[0])
    
x=input()
for i in d[x]:
    print(i)
