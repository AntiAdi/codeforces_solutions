//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/158/B

#include <stdio.h>
#include <stdlib.h>

int gimme_num(int* array, int size, int key);



int main(){
    int n;
    scanf("%d", &n);

    int num_taxis=0;
    int num_3=0, num_2=0, num_1=0;

    int* s = (int*) malloc (sizeof(int)*n);
    for(int i=0 ; i<n ; i++){
        scanf("%d", &s[i]);
        if(s[i]==1)
        num_1++;
        else if(s[i]==2)
        num_2++;
        else if(s[i]==3)
        num_3++;
        else num_taxis++;
    }

    
    // while(gimme_num(s, n, 4)!=0){
    //     num_taxis++;
    // }

    // while(gimme_num(s, n, 3)!=0){
    //     num_3++;
    // }

    // while(gimme_num(s, n, 2)!=0){
    //     num_2++;
    // }

    // while(gimme_num(s, n, 1)!=0){
    //     num_1++;
    // }
    
    
    num_taxis += num_3;

    if(num_1>num_3){
        num_1 = num_1-num_3;
        num_3=0;

        num_taxis += num_2/2;
        if(num_2%2!=0){
            if(num_1<=2){
                num_taxis++;
            }
            else{
                num_taxis++;
                num_1 = num_1-2;
                
                num_taxis += num_1/4;
                if(num_1%4!=0){
                    num_taxis++;
                }
            }
        }
        else{
            num_taxis += num_1/4;
                if(num_1%4!=0){
                    num_taxis++;
                }
        }
    }
    else{
        num_1=0;
        num_3=0;

        num_taxis += num_2/2;
        if(num_2%2!=0){
            num_taxis++;
        }
    }

    printf("%d\n", num_taxis);

    return 0;
}


//returns 1 if found and 0 if not.
int gimme_num(int* array, int size, int key){
    for(int i=0 ; i<size ; i++){
        if(array[i]==key){
            array[i]=0;
            return 1;
        }
    }
    return 0;
}


