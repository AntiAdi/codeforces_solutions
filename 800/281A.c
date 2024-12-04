//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    char word[1001];
    scanf(" %s", word);

    if(word[0]>='a' && word[0]<='z'){
        word[0] = word[0] - 32 ;
    }

    printf("%s", word);

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