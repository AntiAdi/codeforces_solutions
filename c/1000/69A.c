//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/69/A

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    int n;
    scanf("%d", &n);

    // int** x_y_z = (int**) malloc (sizeof(int*)*n);

    // for(int i=0 ; i<n ; i++){
    //     x_y_z[i] = (int*) malloc (sizeof(int)*3);
    //     scanf("%d %d %d", &x_y_z[i][0], &x_y_z[i][1], &x_y_z[i][2]);
    // }

    int x=0, y=0, z=0;
    for(int i=0 ; i<n ; i++){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        x += a;
        y += b;
        z += c;
    }

    if(x==0 && y==0 && z==0)
    printf("YES\n");
    else
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