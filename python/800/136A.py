"""
    Author : Aadityaraj Kaushal
    Published : 04.03.2025
    Link : https://codeforces.com/problemset/problem/136/A
"""

n = int(input())
input_str = input().split(" ")

for i in range(n) :
    input_str[i] = [input_str[i], 0]

for i in (range(n)) :
    input_str[int(input_str[i][0])-1][1] = i+1

for i in range(n) :
    print(input_str[i][1], end=" ")

