//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
//boys input between 1 and 100
    int w;
    scanf("%d", &w);

    for(int i=1; i<w ; i++){
        int j = w-i ;
        if((i%2==0)&&(j%2==0)){
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