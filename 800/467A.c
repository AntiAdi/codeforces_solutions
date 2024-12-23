//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/467/A

#include <stdio.h>
#include <stdlib.h>



int main(){
    int n;
    scanf("%d", &n);

    int free_rooms=0;
    for(int i=0 ; i<n ; i++){
        int p, q;
        scanf("%d %d", &p, &q);
        if((q-p)>=2)
        free_rooms++;
    }

    printf("%d\n", free_rooms);
    
    return 0;
}





