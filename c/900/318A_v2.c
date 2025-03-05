//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/318/A

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    long long int n,k;
    scanf("%lld %lld", &n, &k);

    long long int num_odd, num_even;

    if(n%2==0){
        num_even = n/2;
        num_odd = n/2;
    }
    else{
        num_even = (n-1)/2;
        num_odd = (n+1)/2;
    }

    if(k<=num_odd){
        printf("%lld\n", 2*k-1);
    }
    else{
        printf("%lld\n", 2*(k-num_odd));
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