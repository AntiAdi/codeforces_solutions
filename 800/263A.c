#include <stdio.h>
#include <stdlib.h>


int main(){
    int A[5][5];
    for(int i=0 ; i<5 ; i++){
        scanf("%d %d %d %d %d", (*(A+i)+0),(*(A+i)+1),(*(A+i)+2), (*(A+i)+3), (*(A+i)+4));
    }   

    int x,y ;
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            if(A[i][j]==1){
                x=i+1 ;
                y=j+1 ;
            }
        }
    }

    x -= 3 ;
    y -= 3 ;
    if(x<0)
    x *= -1 ;
    if(y<0)
    y *= -1 ;

    printf("%d", x+y);

    return 0;
}


