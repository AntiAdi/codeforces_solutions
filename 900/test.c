//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>


void sort_array_of_arrays_ascending(int* array, int size);


int main(){
    int t;
    scanf("%d", &t);

    int* n = (int*) malloc (sizeof(int) * t);
    int** c = (int**) malloc (sizeof(int*) * t);

    
    
    for(int i=0 ; i<t ; i++){
        scanf("%d", n+i);
        c[i] = (int*) malloc (sizeof(int) * n[i]);

        

        for(int j=0 ; j<n[i] ; j++){
            scanf("%d", &c[i][j]);
        }
    }



    for(int test=0 ; test<t ; test++){
        int num_of_moves_alice_makes = (n[test]+1)/2 ;
        int score_alice=0;
        int index_alice_at=0;
        int bob_spoiled_index=n[test]-1;
        int flag_alice_repeating=0;

        sort_array_of_arrays_ascending(c[test], n[test]);

        for(int move=0 ; move<n[test] ; move++){
            if(move%2==0){
                if(flag_alice_repeating==0){
                    if(c[test][index_alice_at]==0 && index_alice_at>=bob_spoiled_index){
                        index_alice_at=0;
                        flag_alice_repeating=1;
                        move--;                           

                        continue;
                    }

                    while(c[test][index_alice_at]==0){
                        index_alice_at++;
                    }


                    c[test][index_alice_at]--;
                    if((c[test][index_alice_at]==0) && index_alice_at<bob_spoiled_index){
                        score_alice += 2;

                    }
                    else{
                        score_alice++;
                    }

                    if(index_alice_at == n[test]-1){
                        index_alice_at=0;
                        flag_alice_repeating=1;
                    }
                    else{
                        index_alice_at++;
                    }

                }
                else{
                    c[test][index_alice_at]--;
                    if((c[test][index_alice_at]==0) && index_alice_at<bob_spoiled_index){
                        score_alice += 2;
                        index_alice_at++;
                    }
                }


            }
            else{
                if(c[test][bob_spoiled_index]>0){
                    c[test][bob_spoiled_index]--;
                }
                else{
                    bob_spoiled_index--;
                    c[test][bob_spoiled_index]--;
                }

            }

        }

        printf("%d\n", score_alice);

    }



    return 0;
}


void sort_array_of_arrays_ascending(int* array, int size){

    for(int i=0 ; i<size ; i++){
        for(int j=i+1 ; j<size ; j++){
            if(array[i]>array[j]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}




