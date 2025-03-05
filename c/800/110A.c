//Aadityaraj Kaushal going God Mode here </>

//Link to the problem statement
//https://codeforces.com/problemset/problem/110/A

#include <stdio.h>
#include <stdlib.h>

// void clear_scr();



int main(){

    //its best to treat huge numbers as strings sometimes, Like in this case.
    char n[19];
    scanf("%s", n);

    int num_4=0, num_7=0 ;
    
    //finding the number of 4s and 7s.
    int i=0;
    while(n[i]!='\0'){
        if(n[i] == '4')
        num_4++;
        else if(n[i] == '7')
        num_7++;

        i++;
    }

    

    //beware for the case where num_lucky = 0. Print NO in this particular one.
    int num_lucky = num_4 + num_7;
    if(num_lucky==0){
        printf("NO\n");
        return 0;
    }

    //checking for individual digits of lucky_number and if any digit goes outta 4 or 7, We print NO.
    while(num_lucky !=0){
        if((num_lucky%10 != 4) && (num_lucky%10 != 7)){
            printf("NO\n");
            return 0;
        }
        num_lucky /= 10;
    }

    printf("YES\n");

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