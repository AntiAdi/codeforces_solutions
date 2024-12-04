//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){

    int n;
    scanf("%d", &n);

    int min_steps=0;
    
    min_steps += (n/5);
    if(n%5 != 0)
    min_steps ++;

    printf("%d",min_steps);





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