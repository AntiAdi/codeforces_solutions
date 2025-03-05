//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/405/A


#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    int n;
    scanf("%d", &n);

    int* before_config = (int*) malloc (sizeof(int)*n);

    for(int i=0 ; i<n ; i++){
        scanf("%d", before_config+i);
    }

    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(before_config[i]>before_config[j]){
                int temp = before_config[i];
                before_config[i] = before_config[j];
                before_config[j] = temp;
            }
        }
        printf("%d ", before_config[i]);
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