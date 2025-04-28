t = int(input().strip())

words = []

for i in range(t) :
    words.append(input().strip().split(" "))

for i in range(t) :
    print(words[i][0][0], words[i][1][0], words[i][2][0], sep="")
