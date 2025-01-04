//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/208/A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clear_scr();


/*
    Logic : 
        1. take the input into a string.
        2. we know that the input is all capital.
        3. replace all the WUB's with small letter, lets say 'a'.
        4. run a loop for all characters of the array.
        5. if a capital letter is encountered, keep printing till the capital letters end.
        6. then print space.
        7. then again keep finding the capital letters till the end. 

*/


int main(){
    char song[201];
    scanf(" %s", song);


    for(int i=0 ; i<strlen(song) ; i++){
        if(i<strlen(song)-2){
            if(song[i]=='W' && song[i+1]=='U' && song[i+2]=='B'){
                song[i] = 'a';
                song[i+1] = 'a';
                song[i+2] = 'a';
                i += 2;
            }
        }
    }


    int i=0;
    while(i<strlen(song)){
        if(song[i]<='Z' && song[i]>='A'){
            do{
                printf("%c", song[i]);
                i++;
            }
            while(song[i]>='A' && song[i]<='Z');

            printf(" ");
        }       
        else{
            i++;
        }
    }



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