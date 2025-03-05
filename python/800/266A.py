"""
    Author : Aadityaraj Kaushal
    Published : 04.03.2025
    Link : https://codeforces.com/problemset/problem/266/A
"""
n = int (input())
s = list(input())

for i in range(len(s)) :
    if s[i] == None :
        continue
    for j in range(i+1, len(s)) :
        if s[j] != s[i] :
            break
        else :
            s[j] = None
            
print(s.count(None))