// //Aadityaraj Kaushal going God Mode here </>

// #include <stdio.h>
// #include <stdlib.h>

// void clear_scr();
// int check(int arr[]);


// int main(){
    
    

//     int t;
//     scanf("%d",&t);


// //2D array of t x 4 where each of the t arrays store a,b,c,n. taking input as well
//     int** arr = (int**) malloc (sizeof(int*)*t);
//     for(int i=0 ; i<t ; i++){
//         arr[i] = (int*) malloc (sizeof(int)*4);
//         scanf("%d%d%d%d", &arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3]);
//         getchar();
//     }

// //calling the function to check and print YES or NO
//     for(int i=0 ; i<t ; i++){
//         if(check(arr[i])){
//             printf("YES\n");
//         }
//         else{
//             printf("NO\n    ");
//         }
//     }




//     return 0;
// }





// #ifdef _WIN32
//     #define clear "cls" 
// #else
//     #define clear "clear" 
// #endif


// void clear_scr() {
//     system(clear);
// }


// //returns 1 if possible, 0 if not
// int check(int arr[]){
    
//     if((arr[0]+arr[1]+arr[2]+arr[3])%3 == 0){
//         for(int i=0 ; i<=arr[3] ; i++){
//             for(int j=0 ; j<=arr[3] ; j++){
//                 int k = arr[3]-i-j ;
//                 if((arr[0]+i)==(arr[1]+j) && (arr[1]+j)==(arr[2]+k)){   
//                 return 1;
//                 }
//             }
//         }   
//     }

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

void clear_scr();
int check(int arr[]);

int main() {
    int t;
    scanf("%d", &t);

    // 2D array of t x 4 where each of the t arrays store a, b, c, n. taking input as well
    int** arr = (int**) malloc(sizeof(int*) * t);
    for (int i = 0; i < t; i++) {
        arr[i] = (int*) malloc(sizeof(int) * 4);
        scanf("%d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
        getchar();
    }

    // Calling the function to check and print YES or NO
    for (int i = 0; i < t; i++) {
        if (check(arr[i])) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    // Free allocated memory
    for (int i = 0; i < t; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}

// Function to check if it's possible to make a, b, c equal by adding units
int check(int arr[]) {
    int a = arr[0];
    int b = arr[1];
    int c = arr[2];
    int n = arr[3];

    int max_value = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int required_units = 3 * max_value - (a + b + c);

    // Check if we have enough units and if the total sum is divisible by 3
    return (n >= required_units && (n - required_units) % 3 == 0);
}











