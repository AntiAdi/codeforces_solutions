"""
    Author : Aadityaraj Kaushal
    Published : 04.03.2025
    Link : https://codeforces.com/problemset/problem/236/A
"""

username = input().strip()
wordset = set()
for letter in username :
    wordset.add(letter) 
if len(wordset)%2==0 :
    print("CHAT WITH HER!")
else :
    print("IGNORE HIM!")