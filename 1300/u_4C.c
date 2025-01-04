//Aadityaraj Kaushal going God Mode here </>

#include <stdio.h>
#include <stdlib.h>

void clear_scr();



int main(){
    


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