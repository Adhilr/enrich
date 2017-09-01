x=input().split()
r=int(x[0])
c=int(x[1])
l=[]
for i in range(r):
    x=input().split()
    x=[int(i) for i in x]
    l.append(x)
x=input().split()
n=int(x[0])
m=int(x[1])
ra=n*m
for i in range(r):
    for j in range(c):
        if(i==0 or i==r-1 or j==0 or j==c-1):
            ra=2*n*m
        else:
            ra=n*m
        print(ra+l[i][j],end=" ")
    print()

#Your code below
n=int(input())
d={}
l=[]
for i in range(n):
    x=input().split()
    if(x[0] not in l):
        l.append(x[0])
        d[x[0]]=x
    if(x[1] not in l):
        l.append(x[1])
        d[x[1]]=x
    t=d[x[1]]
    for i in d[x[0]]:
        if(i not in t):
            t.append(i)
    for i in t:
        d[i]=t
x=input()
print(len(d[x]))
