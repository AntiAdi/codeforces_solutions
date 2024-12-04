//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    int k,n,w;
    scanf("%d %d %d", &k,&n,&w);
    int total_cost=0;
    for(int i=0 ; i<w ; i++){
        total_cost += (i+1)*k ;
    }

    if(total_cost > n)
    printf("%d", total_cost-n);
    else
    printf("%d", 0);


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