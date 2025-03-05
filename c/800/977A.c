//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    
    long long int n;
    int k;
    scanf("%lld %d", &n,&k);

    long long int result = n;
    for(int i=0 ; i<k ; i++){
        if(result==0){
            break;
        }
        else if(result%10==0){
            result /= 10 ;
        }
        else{
            result -- ;
        }
    }

    printf("%lld", result);


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