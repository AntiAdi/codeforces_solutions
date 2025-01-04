//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/1915/C

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){
    int t;
    scanf("%d", &t);

    int* n = (int*) malloc (sizeof(int)*t);
    long long int** a = (long long int**) malloc (sizeof(long long int*)*t);

    for(int i=0 ; i<t ;i++){
        scanf("%d", n+i);
        a[i] = (long long int*) malloc (sizeof(long long int)*n[i]);

        for(int j=0 ; j<n[i] ; j++){
            scanf("%lld", &a[i][j]);
        }
    }




    for(int i=0 ; i<t ; i++){
        long long int sum=0;
        for(int j=0 ; j<n[i] ; j++){
            sum += a[i][j] ;
        }

        if((sqrt(sum)-(int)sqrt(sum)==0)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }



 

    return 0;
}




