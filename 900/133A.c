//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/133/A

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    char string[101];
    
    scanf("%[^\n]", string); 

    
    int i=0;

    while(i!=strlen(string)){
        if(string[i]=='H' || string[i]=='Q' || string[i]=='9'){
            printf("YES\n");     
            return 0;
        }
        i++;
    } 

    printf("NO\n");

    return 0;
}





#ifdef _WIN32
    #define clear "cls" 
#else
    #define clear "clear" 
#endif


void clear_scr() {
    system(clear);
}