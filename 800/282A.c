//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

// void clear_scr();

int fun(char * arr );

int main(){
    int x=0 ;
    int n;
    
    do{
        scanf(" %d", &n);
    }
    while(n<1 || n>150);

//intialising a 2D char array to store the chars. size of each array is 4 (to include \0)
    char** op ;
    op = (char**) malloc (n*sizeof(char*));
    for(int i=0 ; i<n ; i++){
        *(op+i) = (char*) malloc (4*sizeof(char));
    }

//reading the chars
    for(int i=0 ; i<n ; i++){
        *( *(op+i) + 3 ) = '\0' ;
        scanf("%s", *(op+i) );
        printf("\n");
    }

//calculating x
    for(int i=0 ; i<n ; i++){
        x += fun(*(op+i)) ;
    }





    printf("%d\n", x);

    return 0;
}





// #ifdef _WIN32
//     #define clear "cls" 
// #else
//     #define clear "clear" 
// #endif


// void clear_scr() {
//     system(clear);
// }



//making a function to check for operation and return 1 or -1. we already know the length of string to be 3 (4 incl \0)
int fun(char* arr ){
    for(int i=0 ; i<3 ; i++){
        if(arr[i] == '+'){
            return 1;  
        }    
    }

    return -1 ;
}