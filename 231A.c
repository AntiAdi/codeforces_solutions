//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();
int check(int a, int b, int c);


int main(){
    int n;
    do{
        scanf(" %d", &n);
 
    }
    while(n>1000 || n<1);

// initialising the array
    int ** arr ;
    arr = (int**) malloc (n*sizeof(int*));
    for(int i=0 ; i<n ; i++){
        *(arr+i) = (int*) malloc (3*sizeof(int)) ;
    }

//taking input for who knows what
    for(int i=0 ; i<n ; i++){
        scanf("%d %d %d", (*(arr+i)+1), (*(arr+i)+2), (*(arr+i)+3) );
        printf("\n");
    }

//making a counter and check how many they can solve
    int counter = 0;
    for(int i=0 ; i<n ; i++){
        if(check(*(*(arr+i)+1), *(*(arr+i)+2), *(*(arr+i)+3))){
            counter ++ ;
        }
    }

    printf("%d\n", counter);



    return 0;
}


//function to return 1 if the friends can solve the problem
int check(int a, int b, int c){
    if((a+b+c) >= 2){
        return 1;
    }
    else{
        return 0;
    }

}





#ifdef _WIN32
    #define clear "cls" 
#else
    #define clear "clear" 
#endif


void clear_scr() {
    system(clear);
}   