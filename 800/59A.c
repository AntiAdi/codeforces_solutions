//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();
int lowcase_minus_uppcase (char* array);
void converter_and_printer (char* array , int key);


int main(){
    char word[101];
    scanf(" %s", word);

    converter_and_printer(word, lowcase_minus_uppcase(word));


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

//fn to return lowercase-uppercase letters
int lowcase_minus_uppcase (char* array){
    int low=0;
    int upp=0;
    
    for(int i=0 ; array[i] != '\0' ; i++){
        if(array[i]>='A' && array[i]<='Z'){
            upp++;
            continue;
        }
        else if(array[i]>='a' && array[i]<='z'){
            low++;
            continue;
        }
    }
    return low-upp ;
}

//fn to turn a string all lowercase or all uppercase, and then print it. key>=0 for lowercase and key<0 for uppercase
void converter_and_printer (char* array , int key){
    if(key>=0){
        for(int i=0 ; array[i] != '\0' ; i++){
            if(array[i]>='A' && array[i]<='Z'){
                array[i] += 32 ;
            }
        }
    }
    else{
        for(int i=0 ; array[i] != '\0' ; i++){
            if(array[i]>='a' && array[i]<='z'){
                array[i] -= 32 ;
            }
        }
    }

    printf("%s", array);
}


