//Aadityaraj Kaushal going God Mode here </>
//https://codeforces.com/problemset?order=BY_RATING_ASC

#include <stdio.h>
#include <stdlib.h>



int main(){
    char* num_1 = (char*) calloc (101, sizeof(char));
    char* num_2 = (char*) calloc (101, sizeof(char));

    scanf("%s", num_1);
    scanf("%s", num_2);

    //result goes into num_2.
    int i=0;
    while(num_1[i] != '\0'){
        if(num_1[i]==num_2[i])
        num_2[i] = '0';
        else
        num_2[i] = '1';

        i++;
    }


    printf("%s\n", num_2);

    return 0;
}

