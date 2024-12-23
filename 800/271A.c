//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

int num_digits(int n);
int distinct_digits(int year);
void copy_integer_to_array(int n, int* arr);



int main(){
    int year;
    scanf("%d", &year);


    //the min year is >year. so choose min_year = year+1.
    int min_year = year+1;
    while(1){
        if(distinct_digits(min_year) == 1){
            printf("%d\n", min_year);
            return 0;
        }
        else{
            min_year++;
        }
    }


    return 0;
}




//returns 1 if all distinct and 0 if not.
//logic : copy integer to an array and then search the array for duplicate digits.
int distinct_digits(int year){
    int num_of_digits = num_digits(year);
    int* array = (int*) calloc (num_of_digits, sizeof(int));
    copy_integer_to_array(year, array);

    for(int i=0 ; i<num_of_digits ; i++){
        for(int j=i+1 ; j<num_of_digits ; j++){
            if(array[i]==array[j]){
                return 0;
            }
        }
    }

    free(array);
    return 1;
}

//return num of distinct digits.
int num_digits(int n){
    int num=0;

    while(n>0){
        num++;
        n /= 10;
    }

    return num;
}

//as name suggests.
void copy_integer_to_array(int n, int* arr){
    int length_array = num_digits(n);

    for(int i=0 ; i<length_array ; i++){
        arr[length_array-i-1] = n%10 ;
        n /= 10;
    }
}



