//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/580/A

#include <stdio.h>
#include <stdlib.h>



int main(){
    int n;
    scanf("%d", &n);

    long long int* a = (long long int*) malloc (sizeof(long long int)*n);
    for(int i=0 ; i<n ; i++){
        scanf("%lld", a+i);
    }

    int max_length_of_progress=0;
    int temp_length=1;
    int i=0;

    while(i<n){
        if(i<n-1){
            if(a[i+1]>=a[i]){
                temp_length ++;
            }
            else{
                if(temp_length>max_length_of_progress){
                    max_length_of_progress = temp_length;
                }
                temp_length=1;
            }
        }
        else if(temp_length>max_length_of_progress){
            max_length_of_progress = temp_length;
        }
        i++;
    }

    printf("%d\n", max_length_of_progress);

    return 0;
}


