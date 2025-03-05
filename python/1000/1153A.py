"""
    Author : Aadityaraj Kaushal
    Published : 04.03.2025
    Link : https://codeforces.com/problemset/problem/1153/A
"""

n_t = input().strip().split(" ")

si_di = []

for i in range(int(n_t[0])) :
    si_di.append(input().strip().split(" "))


for i in range(int(n_t[0])) :
    si_di[i][0] = int(si_di[i][0]) -int(n_t[1])
    
    if si_di[i][0] == 0 :
        print(i+1)
        quit()
    elif si_di[i][0] < 0 :
        while si_di[i][0] < 0 :
            si_di[i][0] = (int)(si_di[i][0]) + (int)(si_di[i][1])
        if si_di[i][0] == 0 :
            print(i+1)
            quit()
    else :
        pass

min_minutes, min_index = si_di[0][0], 0
for i in range(1, int(n_t[0])) :
    if si_di[i][0] < min_minutes :
        min_minutes = si_di[i][0]
        min_index = i

print(min_index+1)