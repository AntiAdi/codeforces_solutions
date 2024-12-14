//Aadityaraj Kaushal going God Mode here </>

//Link to the problem statement.
//https://codeforces.com/problemset/problem/41/A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void clear_scr();



int main(){
    //words are in strings s and t.
    //Max words are 100 so choose 101 for null character termination.
    char s[101];
    char t[101];

    scanf(" %s", s);
    scanf(" %s", t);

    //counter i will vary as 0, 1, 2 ... until the string ends at null termination.
    //Using strlen() function to determine the length of the string. 
    //for s to be reverse of t, s[i] == t[strlen+1-i] should be true.
    
    //however exits early incase the lengths of strings do not match.
    if(strlen(s) != strlen(t)){
        printf("NO\n");
        return 0;
    }
   
    int i=0;
    while(s[i] != '\0'){
        if(s[i] != t[strlen(s)-1-i]){
            printf("NO\n");
            return 0;
        }
        i++;
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