//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/178/A1

#include <stdio.h>
#include <stdlib.h>

int max_i_n(int i, int n);



int main(){
    int n;
    scanf("%d", &n);

    int* a = (int*) malloc (sizeof(int)*n);
    for(int i=0 ; i<n ; i++){
        scanf("%d", a+i);
    }

    int moves=0;

    for(int k=1 ; k<n ; k++){
        while(a[k-1]!=0){
            a[k-1]--;
            a[max_i_n(k, n)]++;
            moves++;
        }

        printf("%d\n", moves);
    }


    return 0;
}





int max_i_n(int i, int n){
    int multiplier = 1;
    while((i+multiplier)<n){
        multiplier *= 2;
    }

   

    return i+multiplier/2-1;
}