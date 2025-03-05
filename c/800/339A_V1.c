//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    
    char string[101];
    scanf(" %s", string);

    int numbers[50];
    int counter=0;
    int i=0;
    do{
        numbers[counter] = (string[i] - '0') ;
        counter ++;
        i+=2;
    }
    while(string[i-1] != '\0');



//sorting the numbers
    for(int i=0 ; i<counter ; i++){
        for(int j=i+1 ; j<counter; j++){
            if(numbers[j] < numbers[i]){
                int temp = numbers[j] ;
                numbers[j] = numbers[i];
                numbers[i] = temp;
            }
        }
    }

    
// //test print of the numbers array
//     printf("\n");
//     for(int i=0 ; i<counter ; i++){
//         printf(" %d ", numbers[i]);
//     }

//    printf("\n");

    for(int i=0 ; i<counter ; i++){
        printf("%d", numbers[i]);
        if(!(i== counter-1))
        printf("%c", '+');
    }


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