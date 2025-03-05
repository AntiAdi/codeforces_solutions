"""
    Author : Aadityaraj Kaushal
    Published : 04.03.2025
    Link : https://codeforces.com/problemset/problem/200/B
"""

n = int(input())
pi = input().strip().split(" ")

sum_pi = float(0)

for p in pi :
    sum_pi += float(p)

print(sum_pi/n)