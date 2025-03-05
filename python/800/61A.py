"""
    Author : Aadityaraj Kaushal
    Published : 04.03.2025
    Link : https://codeforces.com/problemset/problem/61/A
"""

num1 = input()
num2 = input()

for (a,b) in zip(num1,num2) :
    if a==b :
        print("0", end="")
    else :
        print("1", end="")