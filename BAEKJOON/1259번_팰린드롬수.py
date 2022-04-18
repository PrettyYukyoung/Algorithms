while 1:
    yes=True
    n=input()
    if n=="0":
        break
    else:
        for i in range(len(n)//2):
            if n[i]!=n[-(i+1)]:
                print("no")
                yes=False
                break
        if yes:
            print("yes")