"""
    Author : Aadityaraj Kaushal
    Published : 04.03.2025
    Link : https://codeforces.com/problemset/problem/231/A
"""

n = int(input())
num_they_gonna_solve = 0

for i in range(n) :
    abc = input().strip().split(" ")
    if abc.count("1")>=2 :
        num_they_gonna_solve += 1

print(num_they_gonna_solve)