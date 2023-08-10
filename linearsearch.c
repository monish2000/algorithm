#include <stdio.h>
#include <string.h>
#include <time.h>
#define size 10000
int main(){
   
    int a[size], b, c=0;
     printf("enter element to be searched");
    scanf   ("  %d", &b);
    for(int i = 0; i < size; i++){
      a[c]=i*2;
      c++;

    }
    clock_t t;
    t = clock();
    for(int i = 0; i < size; i++){
      
        if(a[i] == b){
           printf("element found at position %d", i);
         
        }
       
    }
    printf("\n");
    t= clock()-t;
    printf("execution time in sec %f \n", ((double)t)/CLOCKS_PER_SEC*1000);
    

}