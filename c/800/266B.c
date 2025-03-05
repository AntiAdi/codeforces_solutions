//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset/problem/266/B

#include <stdio.h>
#include <stdlib.h>





int main(){
    int n, t;
    scanf("%d %d", &n, &t );

    char* s = (char*) malloc (sizeof(char) * (n+1));
    scanf(" %s" ,s);

    for(int time=t ; time>0 ; time--){
        int i=0;
        while(i<=(n-1)){
            if(s[i]=='B' && s[i+1]=='G'){
                s[i] = 'G';
                s[i+1] = 'B';
                i += 2;
            }
            else{
                i++;
            }
        }
    }

    printf("%s\n", s);


    return 0;
}





