#include <stdio.h>
#include <stdlib.h>


int main(){

    int t;
    scanf("%d", &t);

    long long int* n = (long long int*) malloc (sizeof(long long int) * t);
    long long int** a = (long long int**) malloc (sizeof(long long int*) * t);

    for(int i=0 ; i<t ; i++){
        scanf(" %lld", &n[i]);
        a[i] = (long long int*) malloc (sizeof(long long int)*n[i]);
        for(int j=0 ; j<n[i] ; j++){
            scanf(" %lld", &a[i][j]);
        }
    }


    for(int i=0 ; i<t ; i++){
        long long int max = 0;

        for(long long int j=0 ; j<n[i] ; j++){
            long long int sum = 0;
            for(int k=0 ; k<n[i] ; k++){
                sum += a[i][j] ^ a[i][k];
            }
            if(sum>max){
                max = sum;
            }
        }

        printf("%lld\n", max);
    }
 


}