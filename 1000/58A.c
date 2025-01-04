//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/58/A

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    char word[101];
    scanf(" %s", word);

    int check=0;
    // int result=0;

    for(int i=0 ; word[i]!='\0' ; i++){
        switch(check){
            case 0 :
            if(word[i]=='h'){
                check++;
            }
            break;
            
            case 1 :
            if(word[i]=='e'){
                check++;
            }
            break;

            case 2 :
            if(word[i]=='l'){
                check++;
            }
            break;

            case 3 :
            if(word[i]=='l'){
                check++;
            }
            break;

            case 4 :
            if(word[i]=='o'){
                check++;
            }
            break;

            
        };
    }

    if(check==5){
        printf("YES\n");
    }
    else{
        printf("NO\n");
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