"""
    Author : Aadityaraj Kaushal
    Published : 04.03.2025
    Link : https://codeforces.com/problemset/problem/71/A
"""

n = int(input())
words = []

for i in range(n):
    words.append(input())

for word in words :
    print(word[0] + str(int(len(word))-2) + word[-1]) if int(len(word))>10 else print(word)