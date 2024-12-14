//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();
void turn_to_lowercase(char* arr);
void turn_vowel_to_A(char* arr);
char* return_the_required_string(char* arr);



int main(){
    
    char string [101];
    scanf(" %s",string);


    turn_to_lowercase(string);
    turn_vowel_to_A(string);
    char* req_str = return_the_required_string(string);

    
    printf("%s\n", req_str);


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

void turn_to_lowercase(char* arr){
    int i=0;
    while(arr[i] != '\0'){
        if(arr[i]<='Z' && arr[i]>='A'){
            arr[i] += 32 ;
        }
        i++;
    }

    return ;
}

void turn_vowel_to_A(char* arr){
    int i=0;
    while(arr[i] != '\0'){
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'y'){
            arr[i] = 'A' ;
        }
        i++;
    }

    return ;
}


char* return_the_required_string(char* arr){
    int i=0;
    int string_len= 200 ;
    int string_counter=0;
    char* req_string = (char*) malloc (string_len*sizeof(char));


    while(arr[i] != '\0'){
        if(string_counter >= (string_len-5)){
            string_len += 10 ;
            req_string = realloc(req_string,string_len);
        }
        
        
        if(arr[i]!='A'){
            req_string[string_counter+1] = arr[i] ;
            req_string[string_counter] = '.' ;
            string_counter += 2 ;
        }
        i++;
    }
    req_string[string_counter] = '\0';

    return req_string ;
}










