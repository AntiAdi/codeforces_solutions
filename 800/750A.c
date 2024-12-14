//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    int n,k;
    scanf("%d %d", &n, &k);

    int time_to_solve=0;
    int temp=0;
    int problems_solved=0;


    for(int i=1 ; i<=n ; i++){
        temp += 5*i;
        if(temp<=(240-k)){
            time_to_solve = temp ;
            problems_solved++;
        }
        else{
            break;
        }
    }
    

    printf("%d\n", problems_solved);



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