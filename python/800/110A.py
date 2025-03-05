"""
    Author : Aadityaraj Kaushal
    Published : 04.03.2025
    Link : https://codeforces.com/problemset/problem/110/A
"""
n = input()

num_lucky_digits = 0

for letter in n :
    if letter=='4' or letter=='7' :
        num_lucky_digits +=1

for letter in str(num_lucky_digits) :
    if letter != '4' and letter!='7' :
        print("NO")
        quit()

else :
    print("YES")
    quit()