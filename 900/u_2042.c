//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>


void sort_array_of_arrays_ascending(int** array, int size);


int main(){
    int t;
    scanf("%d", &t);

    int* n = (int*) malloc (sizeof(int) * t);
    int** c = (int**) malloc (sizeof(int*) * t);

    int*** num_occurances_of_color = (int***) malloc (sizeof(int**) * t);
    
    int** alice  = (int**) malloc (sizeof(int*) * t);
    int** bob  = (int**) malloc (sizeof(int*) * t);   


    for(int i=0 ; i<t ; i++){
        scanf("%d", n+i);
        c[i] = (int*) malloc (sizeof(int) * n[i]);

        num_occurances_of_color[i] = (int**) malloc (sizeof(int*) * n[i]);

        for(int j=0 ; j<n[i] ; j++){
            scanf("%d", &c[i][j]);
            num_occurances_of_color[i][c[i][j]-1] = (int*) malloc (sizeof(int)*2);
            num_occurances_of_color[i][c[i][j]-1][0] = j+1;
            num_occurances_of_color[i][c[i][j]-1][1] ++ ;

        }
    }



    for(int test=0 ; test<t ; test++){
        int num_of_moves_alice_makes = (n[test]+1)/2 ;
        int score_alice=0;

        sort_array_of_arrays_ascending(num_occurances_of_color[test], n[test]);

        int color_alice_at=0;
        for(int move=0 ; move<n[test] ; move++){
            if(move%2==0){
                num_occurances_of_color[test][]


            }
            else{

            }

        }


    }



    return 0;
}


void sort_array_of_arrays_ascending(int** array, int size){

    for(int i=0 ; i<size ; i++){
        for(int j=i+1 ; j<size ; j++){
            if(array[i][1]>array[j][1]){
                int temp_color_name = array[i][0];
                int temp_color_occurances = array[i][1];

                array[i][0] = array[j][0];
                array[i][1] = array[j][1];

                array[j][0] = temp_color_name;
                array[j][1] = temp_color_occurances;
            }
        }
    }
}




