n=0
a=0
x=0
n = int(input())
for i in range(0,n-1):
    x=int(input())
    a+=x
print(((n*(n+1))/2)-a)
