//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>


//function definition
void print_queue (int size , int* array) ;
int game_over (int size , int* array) ;
int n_move (int size , int* array) ; 



int main(){
    
    int t;
    scanf("%d", &t);

    //n_m_q[0] is for n then m then q respectively
    //however n[i] stores the position of the thief in ith case, where i from 0 to t-1
    int** n_m_q = (int**) malloc (sizeof(int*) * t) ;
    int* n = (int*) malloc (sizeof(int) * t) ;
    int** queue = (int**) malloc (sizeof(int*) * t) ;

    for(int i=0 ; i<t ; i++){
        n_m_q[i] = (int*) malloc (sizeof(int) * 3) ;       
        
        scanf("%d %d %d", &n_m_q[i][0] , &n_m_q[i][1] , &n_m_q[i][2] ) ;
        int* m = (int*) malloc (sizeof(int) * (n_m_q[i][1]));
        

        queue[i] = (int*) calloc (n_m_q[i][0] , sizeof(int)) ; 


        for(int j=0 ; j<n_m_q[i][1] ; j++){
            scanf("%d", &m[j]) ;
            queue[i][m[j]-1] = 1 ;
        }

        scanf("%d" , &n[i]) ;
        queue[i][n[i]-1] = 5 ;
    }

    //test print queues
    for(int i=0 ; i<t ; i++){
        print_queue (n_m_q[i][0] , queue[i]) ;
    }
    printf("\n\n");

    //main thing 
    for(int i=0 ; i<t ; i++){
        while(1){
            int moves = 0 ;
            if(game_over(n_m_q[i][0] , queue[i])){
                printf("%d\n", moves);
                break;
            }

            n_move(n_m_q[i][0] , queue[i]);

            if(n_move(n_m_q[i][0] , queue[i])==0){
                printf("%d\n", moves+1);
                break;
            }
            else if(n_move(n_m_q[i][0] , queue[i])==1){
                moves++;
                continue ;
            }
        }


    }



    return 0;
}


//prints stuff
void print_queue (int size , int* array){
    for(int i=0 ; i<size ; i++){
        printf(" %d ", array[i]) ;
    }
}


//returns 1 if game over and 0 if not 
int game_over (int size , int* array){
    for(int i=0 ; i<size ; i++){
        if(array[i] > 5){
            return 1 ;
        }
    }
    return 0 ;
}


//n move first towards where more zeroes are there. returns 0 if trapped. and 1 if moved.
int n_move (int size , int* array){
    int index_n ;
    for(int i=0 ; i<size ; i++){
        if(array[i] == 5 ){
            index_n = i ;
        }
    }


    int num_zeroes_left=0 , num_zeroes_right=0 ;
    
    for(int i=index_n-1 ; i>=0 ; i--){
        if(array[i] < 5 && array[i] > 0 ){
            break ;
        }

        if(array[i] == 0){
            num_zeroes_left ++ ;
        }
    }

    for(int i=index_n+1 ; i<size ; i++){
        if(array[i] < 5 && array[i] > 0 ){
            break ;
        }

        if(array[i] == 0){
            num_zeroes_right ++ ;
        }
    }

    if(num_zeroes_left==0 & num_zeroes_right==0){
        return 0;
    }
    else if(num_zeroes_left == num_zeroes_right){
        array[index_n] = 0 ;
        array[index_n+1] = 5 ; 
        index_n ++ ;
    }
    else if(num_zeroes_left > num_zeroes_right){
        array[index_n] = 0 ;
        array[index_n-1] = 5 ; 
        index_n -- ;
    }
    else if(num_zeroes_left<num_zeroes_right){
        array[index_n] = 0 ;
        array[index_n+1] = 5 ; 
        index_n ++ ;
    }

    for(int i=0 ; i<size ; i++){
        if((array[i] < 5 && array[i] > 0 )  && i<index_n){
            array[i] -- ;
            array[i+1] ++ ;
        }
        else if((array[i] < 5 && array[i] > 0 )  && i>index_n){
            array[i] -- ;
            array[i-1] ++ ;
        }

    }

    return 1 ;
}





