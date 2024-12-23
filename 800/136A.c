//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/136/A

#include <stdio.h>
#include <stdlib.h>





int main(){
    int n;
    scanf("%d", &n);

    int* who_gave = (int*) malloc (sizeof(int) * n);
    int* who_recieved = (int*) malloc (sizeof(int) * n);

    for(int i=0 ; i<n ; i++){
        scanf("%d" , who_gave+i);
        who_recieved[who_gave[i]-1] = i+1;
    }

    for(int i=0 ; i<n ; i++){
        printf("%d " , who_recieved[i]);
    }
    printf("\n");

    return 0;
}