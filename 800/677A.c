//Aadityaraj Kaushal going God Mode here </>

//Link to the problem statement.
//https://codeforces.com/problemset/problem/677/A

#include <stdio.h>
#include <stdlib.h>

// void clear_scr();



int main(){
    int n,h;
    scanf("%d %d", &n, &h);

    //making a dynamic array of size n. it stores the heights of n friends.
    int* height = (int*) malloc (sizeof(int) * n);

    for(int i=0 ; i<n ; i++){
        scanf("%d", &height[i]);
    }

    
    int min_width_road=0;
    int num_of_friends_above_height_h=0;
    //running a for loop and checking how many are having height above h.
    for(int i=0 ; i<n ; i++){
        if(height[i]>h){
            num_of_friends_above_height_h++;
        }
    }

    /*
    so the total number of people with height :
      1. Greater than h = num_of_friends_above_height_h
      2. Less than or equal to h = Total friends (n) - num_of_friends_above_height_h
    */

   int space_bending_people = 2 * (num_of_friends_above_height_h);
   int space_standing_people = 1 * (n-num_of_friends_above_height_h);
   int total_space = space_bending_people + space_standing_people ;

   min_width_road = total_space ;
   
    printf("%d\n", min_width_road);

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