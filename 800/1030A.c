//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/1030/A

#include <stdio.h>
#include <stdlib.h>




int main(){
    int n;
    scanf("%d", &n);

    int is_easy = 1;

    for(int i=0 ; i<n ; i++){
        int m;
        scanf("%d", &m);
        if(m==1)
        is_easy=0;
    }

    if(is_easy==1)
    printf("EASY\n");
    else
    printf("HARD\n");


    return 0;
}





