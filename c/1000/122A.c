//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();
int is_lucky(int n);


int main(){
    int n;
    scanf("%d", &n);

    int num_digits=0;
    int temp=n;
    while(temp!=0){
        num_digits++;
        temp /= 10;
    }

    int* lucky_numbers = (int*) malloc (sizeof(int) * n);
    int counter_lucky_numbers=0;

    for(int i=1 ; i<=n ; i++){
        if(is_lucky(i)==1){
            lucky_numbers[counter_lucky_numbers] = i;
            counter_lucky_numbers++;
        }
    }

    for(int i=0 ; i<counter_lucky_numbers ; i++){
        if(n%lucky_numbers[i]==0){
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");




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


int is_lucky(int n){
    while(n!=0){
        if(n%10 != 4 && n%10 != 7){
            return 0;
        }
        n /= 10;
    }
    return 1;
}