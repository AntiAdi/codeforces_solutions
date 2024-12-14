//Aadityaraj Kaushal going God Mode here </>

//Link to the problem statement.
//https://codeforces.com/problemset/problem/116/A

#include <stdio.h>
#include <stdlib.h>

// void clear_scr();



int main(){
    int n;
    scanf("%d", &n);

    //making an array a_b[size n][size 2] to store ai and bi.
    //ai = a_b[i][0] and bi = a_b[i][1].

    int ** a_b = (int**) malloc (sizeof(int*) * n);

    //to store the current crowd after each bus stop.
    //if current crowd is greater than minimum capacity, then min capacity is equated to current crowd.
    int current_crowd=0;
    int min_capacity=0;

    for(int i=0 ; i<n ; i++){
        a_b[i] = (int*) malloc (sizeof(int)*2);
        scanf("%d %d", &a_b[i][0], &a_b[i][1]);
        current_crowd += a_b[i][1] - a_b[i][0] ;
        
        if(current_crowd > min_capacity)
        min_capacity = current_crowd;
    }

    printf("%d\n", min_capacity);

    return 0;
}





// #ifdef _WIN32
//     #define clear "cls" 
// #else
//     #define clear "clear" 
// #endif


// void clear_scr() {
//     system(clear);
// }