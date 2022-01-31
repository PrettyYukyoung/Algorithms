n = int(input())
groupWord = n
imbeayeol = []

for i in range(n):
    word = input()
    for a in word:
        if a not in imbeayeol:
            imbeayeol.append(a)
            
        if a != imbeayeol[-1]:
            groupWord-=1
            break
    imbeayeol=[]
print(groupWord)
