//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/200/B

#include <stdio.h>
#include <stdlib.h>





int main(){
    int n;
    scanf("%d", &n);

    int* p = (int*) malloc (sizeof(int) * n);
    float sum=0;
    for(int i=0 ; i<n ; i++){
        scanf("%d", p+i);
        sum += p[i];
    }

    printf("%f\n", sum/n);

    return 0;
}





