//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/486/A

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int function(long long int n);

int main(){
    long long int n;
    scanf("%lld", &n);

    printf("%lld\n", function(n));

    return 0;
}


long long int function(long long int n){
    if(n==1)
        return -1;
    else if(n==0)
        return 0;
    else if(n%2==0)
        return n/2;
    else
        return ((n-1)/2) - n ;
}


