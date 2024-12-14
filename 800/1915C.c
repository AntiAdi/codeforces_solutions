//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void clear_scr();



int main(){
    int t;
    scanf("%d", &t);

    int* n = (int*) malloc (sizeof(int)*t);
    for(int i=0 ; i<t ;i++){
        scanf("%d", n+i);
    }

    int** a = (int**) malloc (sizeof(int*)*t);
    for(int i=0 ; i<t ; i++){
        a[i] = (int*) malloc (sizeof(int)*n[i]);
        
        for(int j=0 ; j<n[i] ; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0 ; i<t ; i++){
        long long int sum=0;
        for(int j=0 ; j<n[i] ; j++){
            sum += a[i][j] ;
        }

        if(sqrt(sum) == (int)sqrt(sum)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
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