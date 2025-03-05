//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    char str1 [101];
    char str2 [101];
    scanf(" %s", str1);
    scanf(" %s", str2);

//lowercasing the strings 
    int i = 0;
    while(str1[i] != '\0'){
        if(str1[i] <= 'Z' && str1[i] >= 'A'){
            str1[i] += 32 ;
        }

        if(str2[i] <= 'Z' && str2[i] >= 'A'){
            str2[i] += 32 ;
        }
        i++ ;
    }


    i=0;
    int flag=0;
    while(str1[i] != '\0'){
        if(str1[i]>str2[i]){
            flag = 1 ;  
            break;
        }
        else if(str1[i]<str2[i]){
            flag = -1;
            break;
        }
        i++;
    }

    printf("%d", flag);
    







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