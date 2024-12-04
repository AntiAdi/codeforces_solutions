//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    
    char string[101];
    scanf(" %s", string);

// sorting the string 
    int i=0;
    while(string[i] != '\0'){
        int j = i+2 ;
        while(string[j] != '\0'){
            if(string[j] < string[i]){
                char temp = string[i];
                string[i] = string[j];
                string[j] = temp ;
            }
            j+=2;
        }
        i += 2;
    }

    printf("%s" , string);


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