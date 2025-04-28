t = int(input().strip())

n_m_l_r = []

for i in range(t) :
    n_m_l_r.append([int(x) for x in input().strip().split(" ")])

for i in range(t) :
    r_ , l_ = n_m_l_r[i][3], n_m_l_r[i][2]
    for j in range(n_m_l_r[i][0]-n_m_l_r[i][1]) :
        if r_ > 0 : 
            r_ -= 1
        else :
            l_ += 1

    print(l_, r_, sep=" ")