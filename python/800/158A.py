"""
    Author : Aadityaraj Kaushal
    Published : 04.03.2025
    Link : https://codeforces.com/problemset/problem/158/A
"""

n_k = input().strip().split(" ")
scores = input().strip().split(" ")

kth_score = int (  int(scores[int(n_k[1])-1])  )
num_passed = 0

for a in scores :
    if int(a)>=kth_score and int(a)>0 :
        num_passed += 1

print(num_passed)