import random


t = int(input())
n = []
bi = [] #bi is string !

for i in range(t) :
    n.append(int(input()))
    bi.append(input().strip().split(" "))
    bi[i] = [int(a) for a in bi[i]]

# print(bi[2])

for i in range(t) :
    part1 = bi[i][0 : int(len(bi[i])/2)]
    part2 = bi[i][int(len(bi[i])/2) : ]

    p1_minus_p2 = sum(part1) - sum(part2)


    while abs(p1_minus_p2) in (part1+part2) :
        random.shuffle(bi[i])
        part1 = bi[i][0 : int(len(bi[i])/2)]
        part2 = bi[i][int(len(bi[i])/2) : ]
        
        # print(part1, part2)
        p1_minus_p2 = sum(part1) - sum(part2)



    if p1_minus_p2 > 0 :
        part2.append(p1_minus_p2)
    elif p1_minus_p2 < 0 :
        part1.append(-p1_minus_p2)
    else :
        print("ERROR")

    part1.sort(reverse=True)
    part2.sort(reverse=True)

    if p1_minus_p2 > 0 :
        for k in range(n[i]) :
            print(part2[k], part1[k], end=" ") 
        print(part2[n[i]])
    else :
        for k in range(n[i]) :
            print(part1[k], part2[k], end=" ") 
        print(part1[n[i]])