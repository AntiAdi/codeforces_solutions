//Aadityaraj Kaushal going God Mode here </>

//Link to the problem statement
//https://codeforces.com/problemset/problem/734/A

#include <stdio.h>
#include <stdlib.h>

// void clear_scr();



int main(){
    int n;
    scanf("%d", &n);

    //dynamically making an array to store ADADADAADD... pattern of the size n+1. 
    //n+1 so to store the '\0' null character at the string termination.
    char* string_s = (char*) malloc (sizeof(char)*(n+1));
    scanf(" %s", string_s);

    int A=0, D=0;

    //counting A's and D's and storing them in A and D integer variables respectively.
    for(int i=0 ; i<n ; i++){
        if(string_s[i]=='A')
        A++;
        else if(string_s[i]=='D')
        D++;
    }

    if(A==D)
    printf("Friendship\n");
    else if(A>D)
    printf("Anton\n");
    else
    printf("Danik\n");


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