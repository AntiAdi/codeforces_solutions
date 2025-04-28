t = int(input().strip())

n = []
ai = []

for _ in range(t) :
    n.append(int(input().strip())) 
    # ai.append(int(x) for x in input().strip().split(" "))
    ai.append(list(map(int, input().strip().split())))

for i in range(t) :
    for k in range(1, n[i]+1) :
        sum_ = 0
        sum_right = sum(ai[i][-k:]) - ai[i][-1]
        min_right = ai[i][-1]
        max_left = max(ai[i][0:(n[i]-k)]) if k!=n[i] else 0

        if max_left > min_right :
            # print(f"max left = {max_left} and min right = {min_right}")
            sum_ = max_left + sum_right
        else :
            sum_ = sum_right + min_right
        
        print(sum_, end=" ")
    
    print("")
