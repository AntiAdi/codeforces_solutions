t = int(input().strip())

n = []
G = []

for i in range(t) :
    n.append(int(input().strip()))
    temp = []
    for j in range(n[i]) :
        temp.append([int(x) for x in input().strip().split(" ")])

    G.append(temp)

for i in range(t) :
    passcode = [0 for _ in range(2*n[i])]
    
    for row in range(n[i]) :
        for column in range(n[i]) :
            passcode[row+column+1] = G[i][row][column]
    
    number = 1
    while 1 :
        if number in passcode :
            number += 1
        else :
            passcode[0] = number
            break
    
    for element in passcode :
        print(element, end=" ")

    print("")