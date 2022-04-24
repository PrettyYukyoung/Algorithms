import sys
n,m=map(int,sys.stdin.readline().split())
d={sys.stdin.readline() for _ in range(n)}
p={sys.stdin.readline() for _ in range(m)}



result=list(set(d) & set(p))
print(len(result))
result.sort()
for i in result:
    print(i,end="")