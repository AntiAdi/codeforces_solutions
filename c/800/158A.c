#include <stdio.h>
#include<stdlib.h>


int main(){

    int n=0 , k=0 ;
    
    do{
        scanf("%d %d", &n, &k);
    }
    while( !((1<=k)&&(n<=50)&&(n>=k)) );

//dynamically allocating memories for ai where i ranges from 1 to n and values of ai ranges from 0 to 100
    int* ai = (int*) calloc (n,sizeof(int));
//scanning values for ai from user
    for(int i=0 ; i<n ; i++){
        do{
            scanf("%d", ai + i);
        }
        while((*(ai + i))>100 || (*(ai + i))<0 ) ;
    }

//marks of kth place finisher be 
    int cutoff = *(ai + k -1);
    int counter = 0;

//calculating the people who passed
    for(int i=0 ; i<n ; i++){
        if((*(ai + i))>=cutoff && (*(ai + i))>0){
            counter++ ;
        }
    }


    printf("%d\n", counter);




    return 0;
}