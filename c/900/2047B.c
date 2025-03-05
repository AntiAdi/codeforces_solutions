//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

char most_repeated_except_char(char except, char* array, int* return_index);
char least_repeated_except_char(char except, char* array, int* return_index);


int main(){
    //basic input for test cases.
    int t;
    scanf("%d", &t);

    int* n = (int*) malloc (sizeof(int) * t);
    char** s = (char**) malloc (sizeof(char*) * t);

    for(int i=0 ; i<t ; i++){  
        scanf("%d", &n[i]);
        s[i] = (char*) malloc (sizeof(char) * (n[i]+1));
        scanf(" %s", s[i]);
    }   


    //printing the output.
    for(int i=0 ; i<t ; i++){
        //incase string length is 1 or 2, the output is easy to directly print than compute.
        if(n[i]==1){
            printf("%s\n", s[i]);
            continue;
        }
        else if(n[i]==2){
            printf("%c%c\n", s[i][0], s[i][0]);
            continue;
        }


        //logic is to equate the least repeated char to the most repeated.
        //let most be the most repeated, and least be the least repeated char.
        int index_most, index_least; //their indexes likewise in the array s[i].
        char most, least;

        //check for the the most repeated, and least be the least repeated char.
        most = most_repeated_except_char(0, s[i], &index_most);
        least = least_repeated_except_char(0, s[i], &index_least);


        //if the most repeated, and least be the least repeated char are the same, then we check with exceptions.
        /*
        example. in "aabb", the most repeated and the least repeated, both have index 0 (array[0]='a').
        so we make an exception using the function, so that we now check for the least repeated char in 
        the array EXCEPT with index 0 (array[0]='a'). So now, the most repeated remains index 0 (as it was),
        and the least repeated now has index 2 (array[2]='b').
        */
        if(index_least==index_most){
            least = least_repeated_except_char(most, s[i], &index_least);
        }

        if(index_least==index_most){
            most = most_repeated_except_char(least, s[i], &index_most);
        }


        //logic !
        s[i][index_least] = s[i][index_most];


        //output.
        printf("%s\n",s[i]);


    }




    return 0;
}


//char except = 0, if no exceptions to be made.
char most_repeated_except_char(char except, char* array, int* return_index){
    int i=0;
    char most_repeated;
    int repeat_count=0;

    if(except == 0){
        while(array[i]!='\0'){
            int j=0;
            int temp=0;
            while(array[j]!='\0'){
                if(array[i]==array[j]){
                    temp++;
                }
                j++;
            }  
            if(temp>repeat_count){
                repeat_count = temp;
                most_repeated = array[i];
                *return_index = i;
            }
            i++;
        }
    }
    else{
        while(array[i]!='\0'){
            if(array[i]==except){
                i++;
                continue;
            }
            else{
                int j=0;
                int temp=0;
                while(array[j]!='\0'){
                    if(array[i]==array[j]){
                        temp++;
                    }
                    j++;
                }  
                if(temp>repeat_count){
                    repeat_count = temp;
                    most_repeated = array[i];
                    *return_index = i;
                }
                i++;
            }
        }
    }
    
    return most_repeated;
}


//char except = 0, if no exceptions to be made.
char least_repeated_except_char(char except, char* array, int* return_index){
    int i=0;
    char least_repeated;
    int repeat_count=999999;

    if(except == 0){
        while(array[i]!='\0'){
            int j=0;
            int temp=0;
            while(array[j]!='\0'){
                if(array[i]==array[j]){
                    temp++;
                }
                j++;
            }  
            if(temp<repeat_count){
                repeat_count = temp;
                least_repeated = array[i];
                *return_index = i;
            }
            i++;
        }
    }
    else{
        while(array[i]!='\0'){
            if(array[i]==except){
                i++;
                continue;
            }
            else{
                int j=0;
                int temp=0;
                while(array[j]!='\0'){
                    if(array[i]==array[j]){
                        temp++;
                    }
                    j++;
                }  
                if(temp<repeat_count){
                    repeat_count = temp;
                    least_repeated = array[i];
                    *return_index = i;
                }
                i++;
            }
        }
    }
    

    return least_repeated;
}



