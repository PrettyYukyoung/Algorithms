k=int(input())
sumList=[]
for i in range(k):
    n=int(input())
    if n==0:
        sumList.pop()
    else:
        sumList.append(n)
print(sum(sumList))