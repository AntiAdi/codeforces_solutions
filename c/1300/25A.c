//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/25/A

#include <stdio.h>
#include <stdlib.h>




int main(){
    int n;
    scanf("%d", &n);

    int* numbers = (int*) malloc (sizeof(int)*n);
    for(int i=0 ; i<n ; i++){
        scanf("%d", &numbers[i]);
    }

    int num_even=0, num_odd=0;
    for(int i=0 ; i<3 ; i++){
        if(numbers[i]%2==0){
            num_even++;
        }
        else{
            num_odd++;
        }
    }

    if(num_even>num_odd){
        for(int i=0 ; i<n ; i++){
            if(numbers[i]%2 != 0){
                printf("%d\n", i+1);
                return 0;
            }
        }
    }
    else{
        for(int i=0 ; i<n ; i++){
            if(numbers[i]%2 == 0){
                printf("%d\n", i+1);
                return 0;
            }
        }
    }


    return 0;
}





