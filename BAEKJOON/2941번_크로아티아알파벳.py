n = input()
result = 0
alphabet = ["c=","c-","dz=","d-","lj","nj","s=","z="]
for i in alphabet:
    if i in n:
        n = n.replace(i," ")

print(len(n))
