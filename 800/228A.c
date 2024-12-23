//Aadityaraj Kaushal going God Mode here </>
// https://codeforces.com/problemset/problem/228/A

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    long int s [4];
    scanf("%ld %ld %ld %ld", &s[0], &s[1], &s[2], &s[3]);

    int diff_colors=0;
    
    for(int i=0 ; i<4 ; i++){
        if(s[i]!=0){
            long int temp = s[i];
            for(int j=0 ; j<4 ; j++){
                if(s[j]==temp){
                    s[j] = 0;
                }
            }
            diff_colors++;
        }
    }

    printf("%d\n", 4-diff_colors);

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