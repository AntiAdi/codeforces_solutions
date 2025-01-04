//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/318/A

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    long long int n,k;
    scanf("%lld %lld", &n, &k);

    // int num_odd, num_even;

    // if(n%2==0){
    //     num_even = n/2;
    //     num_odd = n/2;
    // }
    // else{
    //     num_even = (n-1)/2;
    //     num_odd = (n+1)/2;
    // }

    long long int odd=-1, even=0;

    while(k!=0){
        odd += 2;
        if(odd>n)
        break;
        k-- ;
    }

    if(k==0){
        printf("%d\n", odd);
        return 0;
    }

    while(k!=0){
        even += 2;
        if(even>n)
        break;
        k--;
    }

    if(k==0){
        printf("%lld\n", even);
        return 0;
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