t = int(input().strip())

abc = []

for _ in range(t) :
    abc.append(input().strip().split(" "))

# print(abc)

for i in range(t) :
    avg = int((int(abc[i][0])+int(abc[i][1])+int(abc[i][2]))%3)
    avg_real = int((int(abc[i][0])+int(abc[i][1])+int(abc[i][2]))/3)
    if avg==0 and int(abc[i][0])<=avg_real and int(abc[i][1])<=avg_real :
        print("YES")
    else :
        print("NO")

    

