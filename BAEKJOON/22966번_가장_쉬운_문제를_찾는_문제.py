n=int(input())
title=[]
number=[]
for x in range(n):
    q, w=input().split(' ')
    title.append(q)
    number.append(w)

for i in range(n):
    if min(number) == number[i]:
        print(title[i])
    

