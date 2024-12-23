//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/705/A

#include <stdio.h>
#include <stdlib.h>




int main(){
    int n;
    scanf("%d", &n);

    for(int i=0 ; i<n ; i++){
        if(i%2 == 0)
        printf("I hate ");
        else
        printf("I love ");

        if(i>=0 && i<n-1)
        printf("that ");

        if(i==n-1)
        printf("it ");
    }

    return 0;
}





