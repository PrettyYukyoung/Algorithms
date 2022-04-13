a=list(range(1,10001))
N=0
c=[]
d=[]
for g in range(10000):
    N=[int(i) for i in str(g)]
    b=sum(N)+g
    c.append(b)

d=list(set(a)-set(c))
d.sort()
print("\n".join(list(map(str,d))))