//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/479/A

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int temp=0;

    if((a+b+c)>temp){
        temp = a+b+c;
    }

    if((a*b+c)>temp){
        temp = (a*b+c);
    }

    if((a+b*c)>temp){
        temp = (a+b*c);
    }

    if((a*b*c)>temp){
        temp = (a*b*c);
    }

//
    if((a*(b+c))>temp){
        temp = (a*(b+c));
    }

    if(((a+b)*c)>temp){
        temp = ((a+b)*c);
    }

    printf("%d\n", temp);

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