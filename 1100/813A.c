//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){



    int n;
    scanf("%d", &n);
//scanning ai for i = 1 to n (in our realm, its 0 to n-1)
    int* a = (int*) malloc (sizeof(int) * n);
    for(int i=0 ; i<n ; i++){
        scanf("%d", a+i);
    }

//taking in m time periods. in array m, m[j][0] is start of time period and m[j][1] is end of 'j'th time period.
    int temp_m;
    scanf(" %d", &temp_m);
    if(temp_m==0){
        printf("%d", -1);
        return 0;
    }
    int** m = (int**) malloc (sizeof(int*)*temp_m);
    for(int i=0 ; i<temp_m ; i++){
        m[i] = (int*) malloc (sizeof(int)*2);
        scanf("%d %d", &m[i][0], &m[i][1]);
    }

//moment of truth
    int max_time_for_submission = m[temp_m-1][1];
    int total_time_to_solve=0;
    for(int i=0 ; i<n ; i++){
        total_time_to_solve += a[i] ;
    }


    if(total_time_to_solve > max_time_for_submission){
        printf("%d\n", -1);
    }    
    else{
        printf("%d\n",total_time_to_solve);
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