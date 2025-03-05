"""
    Author : Aadityaraj Kaushal
    Published : 04.03.2025
    Link : https://codeforces.com/problemset/problem/59/A
"""

S = input()

num_lowercase, num_uppercase = 0,0

for letter in S :
    if letter.islower() == True :
        num_lowercase += 1
    else :
        num_uppercase += 1

if num_lowercase >= num_uppercase :
    print(S.lower())
else :
    print(S.upper())