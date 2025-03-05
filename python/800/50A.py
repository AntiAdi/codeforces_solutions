"""
    Author : Aadityaraj Kaushal
    Published : 04.03.2025
    Link : https://codeforces.com/problemset/problem/50/A
"""

m_n_string = input()
m_n = m_n_string.split(" ")
m = int(m_n[0])
n = int(m_n[1])

print(m*(int(n/2)) if n%2==0 else m*(int(n/2))+ int(m/2))