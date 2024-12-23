//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/344/A

#include <stdio.h>
#include <stdlib.h>





int main(){
    int n;
    scanf("%d", &n);

    char* arrangement = (char*) malloc (sizeof(char)*(2*n + 1));
    
    for(int i=0 ; i<(2*n) ; i+=2){
        scanf(" %c%c", &arrangement[i], &arrangement[i+1]);
    }
    arrangement[2*n] = '\0' ;
    
    int dividers=0;
    for(int i=0 ; i<2*n-1 ; i++){
        if(arrangement[i]==arrangement[i+1]){
            dividers++;
        }
    }

    printf("%d\n", dividers+1);

    return 0;
}





