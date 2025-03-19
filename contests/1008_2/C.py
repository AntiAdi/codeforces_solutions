t = int(input())
n = []
bi = [] 

for i in range(t) :
    n.append(int(input()))
    bi.append(input().strip().split(" "))
    bi[i] = [int(a) for a in bi[i]]

# print(bi[2])

for i in range(t) :
    bi[i].sort(reverse=True)

    part1 = bi[i][0 : int(len(bi[i])/2)]
    part2 = bi[i][int(len(bi[i])/2) : ]
    # print(part1, part2)

    missing = 0
    for j in range(n[i]) :
        missing += part1[j]-part2[j]

    if missing not in bi[i] :
        print(missing,end=" ")
        for k in range(n[i]) :
            print(part1[k], part2[k], end=" ") 

    else : 
        missing = 0
        for j in range(n[i]-1) :
            missing += part1[j]-part2[j]
        missing += part2[n[i]-1] - part1[n[i]-1]
        
        print(missing,end=" ")
        for k in range(n[i]-1) :
            print(part1[k], part2[k], end=" ")
        else :
            print(part2[n[i]-1], part1[n[i]-1], end=" ")
        


    print("")

    # print(missing)