//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/160/A

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    int n;
    scanf("%d", &n);

    int* a = (int*) malloc (sizeof(int) * n);
    int sum_coins=0;
    int part=0;
    for(int i=0 ; i<n ; i++){
        scanf("%d", a+i);
        sum_coins += a[i];
    }

    //linear sort. descending order.
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    int i=0;
    while(part<=(sum_coins/2)){
        part += a[i];
        i++;
    }

    printf("%d\n", i);

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