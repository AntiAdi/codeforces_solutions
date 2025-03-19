"""
    Key Insight: [ChatGPT]

    Your initial instinct of using a teleportation configuration where:

    Every cell (except n) teleports to n,
    And cell n teleports to n-1,

    sounds reasonable, but it violates the constraint that no cell can teleport to itself (ai ≠ i).
    Why This Violates the Constraints:

    When you set up the teleporters like this:

    For all cells except n, you make them teleport to n. This causes a collision in cell n because multiple people would be trying to teleport to cell n at once, which is not allowed.
    The person in cell n would then teleport to n-1, but this doesn't effectively create an optimal configuration after k teleportations because people may end up in the same cells or in a cyclic loop that doesn't minimize the distance to the exit.

    A Better Approach:

    The best way to ensure a valid configuration that respects the constraints while trying to minimize distance is to use a cyclic permutation. A simple way to achieve this is:

    For each cell i, make the teleporter send the person to the next cell in a cyclic fashion. That is:
        The person in cell 1 moves to cell 2,
        The person in cell 2 moves to cell 3,
        ...
        The person in cell n moves to cell n-1.
"""

"""
    *FINAL*

    After all the bullshit, I figured it out.
    Send all to n and the n guy to n-1 in such a way that most in n by the end. Even/Odd would pose problems here.
    
    Hint 1
    Try to put as many people in cell n as possible.

    Hint 2
    The minimum sum of distances will always be 1.

    If k is odd :
        send all from i=1 to i=n-1 to n
        send n to n-1
    elif k is even :
        send all from i=1 to i=n-2 to n-1
        send n-1 to n
        send n to n-1
"""






t = int(input())
n_k = []
positions = []

for i in range(t) :
    n_k.append(input().strip().split(" "))
    n_k[i][1] = int(n_k[i][1])
    n_k[i][0] = int(n_k[i][0])
    # positions.append([a+1 for a in range(n_k[i][0])])
    # print(n_k[i],positions) #debugging


for test_num in range(t) :
    n = n_k[test_num][0]
    k = n_k[test_num][1]
    
    if k%2 == 0 : #Even
        for i in range(1, n-1) :
            print(n-1, end=" ")
        print(n, n-1)
    else : #Odd
        for i in range(1, n) :
            print(n, end=" ")
        print(n-1)


    # for i in range(1, n_k[test_num][0]) :
    #     print(i+1, end=" ")
    # print(n_k[test_num][0]-1)

    #Check insights for more !
    # for k_times in range(n_k[test_num][1]) :
        # for each_k_time in range(n_k[test_num][0]) :
            # if positions[test_num][each_k_time] < n_k[test_num][0] :
            #     positions[test_num][each_k_time] = n_k[test_num][0]
            # else :
            #     positions[test_num][each_k_time] = n_k[test_num][0] - 1
    # for i in positions[test_num] :
    #     print(i,end=" ")
    # print(" ")