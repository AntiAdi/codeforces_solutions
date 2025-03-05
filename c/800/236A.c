//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();
int distinct_chars(char* arr);
int char_check(char arr[], char key);

int main(){
    
    char name[101];
    scanf(" %s", name);
    
    if(distinct_chars(name)%2 == 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
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

//function to return number of distinct chars in an all lowercase string
int distinct_chars(char* name){
    char arr[101];
    for(int i=0 ; i<101 ; i++){
        arr[i] = 'Z';  //clearing the array
    }
    int arr_count = 0;

    int name_count =0;
    while(name[name_count] != '\0'){
        if(char_check(arr, name[name_count]) == 1){
            arr[arr_count] = name[name_count] ;
            arr_count++;
        }
        name_count ++;
    }
    return arr_count;
} 

//function to check if a char is in an array or not
int char_check(char arr[], char key){
    int i=0;
    while(i<101){
        if(arr[i] == key){
            return 0; //if key found
        }
        i++;
    }

    return 1; //if not found
}