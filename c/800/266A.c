//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    
    int number;
    scanf("%d", &number);

    char string[50];
    scanf(" %s", string);

// //to find the total number of stones
//     int number=0;
//     while(string[number] != '\0'){
//         number++;
//     }

//finding the stones to be removed 
    int removed=0;
    for(int i=0 ; i<number ; i++){
        if(string[i]=='R'  || string[i]=='G'  || string[i]=='B'){
            for(int j=i+1 ; j<number ; j++){
                if(string[j] != string[i]){
                    break;
                }
                if(string[j] == string[i]){
                    string[j] = '0';
                    removed++;
                }
            }
        }
    }


    printf("%d", removed);


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