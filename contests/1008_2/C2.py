t = int(input())
n = []
bi = [] #bi is string !

for i in range(t) :
    n.append(int(input()))
    bi.append(input().strip().split(" "))
    bi[i] = [int(a) for a in bi[i]]
    bi[i].sort()

for i in range(t) :
    odd = sum([num for num in bi[i][::2]])
    even = sum([num for num in bi[i][1::2]])
    bi[i].append(abs(odd-even))

    for num in bi[i] :
        print(num, end=" ")
    print("")