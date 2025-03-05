//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    
    int a,b;
    scanf("%d %d", &a, &b);
    
    int years=0;
    while(a<=b){
        a*=3;
        b*=2;
        years++;
    }

    printf("%d", years);




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