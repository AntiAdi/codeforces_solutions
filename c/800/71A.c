//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

//max length for a word to be short
#define max_length 10

void clear_scr();
int word_len(char* word);



int main(){    
    int num_words;
    //printf("Enter the number of words (1<=n<=100) : ");
    scanf("%d", &num_words);

//manually allocating words of max length 100 (101 for making array with sentinel value)
    char** word = (char**) malloc (sizeof(char*) * num_words);
    for(int i=0 ; i<num_words ; i++){
        word[i] = (char*) malloc (sizeof(char)* 101);
    }
    

//taking in input for words
    
    for(int i=0 ; i<num_words ; i++){
        // printf("Enter Word %d : ", i+1);
        scanf(" %s", word[i]);
        
    }

//printing the real stuff
    for(int i=0 ; i<num_words ; i++){
        if(word_len(word[i]) <= max_length  && word_len(word[i])>=1){
            printf("%s\n", word[i]);
        }
        else if(word_len(word[i]) > max_length){
            printf("%c", word[i][0]);
            printf("%d", word_len(word[i])-2);
            printf("%c\n", word[i][word_len(word[i]) - 1]  );
        }
    }

    printf("\n");

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


//function to return string length
int word_len(char* word){
    int len=0;
    while(word[len] != '\0'){
      len++;  
    }

    return len;
}