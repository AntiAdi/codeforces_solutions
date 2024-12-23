//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clear_scr();



int main(){
    char string[101];
    scanf(" %s", string);

    int flag=0;
    
    if(strlen(string)<7){
        printf("NO\n");
        return 0;
    }


    for(int i=0 ; i<strlen(string)-7 ; i++){
        for(int j=i ; j<= strlen(string) ; j++){
            if((string[j]) != string[i]){
                flag=0;
                break;
            }
            else{
                flag=1;
            }
        }
        if(flag==1){
            printf("YES\n");
            return 0;
        }
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