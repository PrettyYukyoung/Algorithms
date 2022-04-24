n=int(input())

for i in range(n):
    a=True
    r=[]
    a=list(input())
    for j in a:
        if j=="(":
            r.append(j)
        elif j==")":
            if len(r)==0:
                print("NO")
                a=False
                break
            else:
                r.pop()
    if len(r)==0 and a:
        print("YES")
    elif a:
        print("NO")