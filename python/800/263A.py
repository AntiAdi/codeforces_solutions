"""
    Author : Aadityaraj Kaushal
    Published : 04.03.2025
    Link : https://codeforces.com/problemset/problem/263/A
"""
matrix = []
for i in range(5) :
    matrix.append(input().strip().split(" "))

index_of_one = []
for i in range(5):
    for j in range(5) :
        if matrix[i][j] == '1' :
            index_of_one.append([i,j])

print( abs(index_of_one[0][0] -2) +  abs(index_of_one[0][1] -2))