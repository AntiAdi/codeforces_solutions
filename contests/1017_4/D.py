def index_last(arr, index) :
    new_arr = arr[index : ]
    first = new_arr[0]
    
    for i in new_arr :
        if i != first :
            return False
        
    return True



t = int(input().strip())

p = []
s = []


for _ in range(t) :
    p.append(input().strip())
    s.append(input().strip())


for test in range(t) :
    possible = True

    p_index = 0
    s_index = 0

    # while 1 :
    #     in_p, in_s = 0, 0
    #     # print(f"pindex = {p_index} sindex = {s_index}")
        
    #     for i in range(p_index, len(p[test])-1) :
    #         if p[test][i]==p[test][i+1] :
    #             in_p += 1
    #             # print("in p ",in_p)
    #         else :
    #             p_index = i+1
    #             break
                
        
    #     for i in range(s_index, len(s[test])-1) :
    #         if s[test][i]==s[test][i+1] :
    #             in_s += 1
    #             # print("in s ",in_s)
    #         else :
    #             s_index = i+1
    #             break


    while 1:
        if index_last(p[test], p_index) or index_last(s[test], s_index) :
            break

        in_p, in_s = 0, 0

        # Compare consecutive characters in p
        for i in range(p_index, len(p[test]) - 1):
            if p[test][i] == p[test][i + 1]:
                in_p += 1
            else:
                p_index = i + 1
                break

        # Compare consecutive characters in s
        for i in range(s_index, len(s[test]) - 1):
            if s[test][i] == s[test][i + 1]:
                in_s += 1
            else:
                s_index = i + 1
                break

        # Add logic to check if conditions are met for a valid comparison
        if in_s + 1 <= (in_p + 1) * 2 and in_s >= in_p:
            pass
        else:
            possible = False
            break



        





        # print(1)


        # if p_index == len(p[test])-2 or s_index == len(s[test])-2 :
        #     break


        # if ((in_s+1) <= ((in_p+1)*2)) and (in_s>=in_p) :
        #     possible = True
        # else :
        #     possible = False
        #     break
        

        

            
    print("YES" if possible else "NO")