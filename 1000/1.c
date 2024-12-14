//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    
    
    long long n,m,a ;
    scanf("%lld %lld %lld", &n,&m,&a);

    // int squares_required=0;

//resolving into the x and y directions 
    
    
    // if((n<=a) && (m<=a)){
    //     squares_required = 1 ;
    // }
    // else if((n<=a)){
    //     squares_required = (m/a) ;
    //     if(m%a != 0){
    //         squares_required ++ ;
    //     }
    // }
    // else if((m<=a)){
    //     squares_required = (n/a) ;
    //     if(n%a != 0){
    //         squares_required ++ ;
    //     }
    // }
    // else{
    //     squares_required += ((m/a)*(n/a));
        
    //     if((m%a != 0)&&(n%a != 0)){
    //         squares_required += ((n/a)+1+((m/a))) ;
    //     }
    //     else if(n%a != 0){
    //         squares_required += ((m/a)+1) ;
    //     }
    //     else if(m%a == 0){
    //         squares_required +=((n/a)+1) ;
    //     }
    // }


//try 2. finding number of tiles required in each direction and multiplying them
    long long int x=0,y=0;
    
    x += n/a ;
    if(n%a != 0)
    x++;

    y += m/a ;
    if(m%a != 0)
    y ++ ;
    



    
    

    printf("%lld\n",x*y);



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