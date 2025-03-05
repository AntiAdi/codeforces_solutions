"""
    Author : Aadityaraj Kaushal
    Published : 04.03.2025
    Link : https://codeforces.com/problemset/problem/116/A
"""
n = int(input())
min_cap, current = 0,0

for i in range(n) :
    a_and_b = input().split(" ")
    current += ((int)(a_and_b[1])-(int)(a_and_b[0]))
    if current > min_cap:
        min_cap = current
    
print(min_cap)