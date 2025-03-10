t = int(input())
n_x = []
ai = []

for i in range(t) :
    n_x.append(input().strip().split(" "))
    ai.append(input().strip().split(" "))
    #n_x and ai values are string !

# print(n_x)

for i in range(0, t) :
    temp = 0.0

    for j in range(int(n_x[i][0])) :
        temp += int(ai[i][j])
    
    if int(n_x[i][1]) == (temp/int(n_x[i][0])) :
        print("YES")
    else :
        print("NO")


