#include <stdio.h>
#include <string.h>
#include <time.h>
#define size 10000
int main(){
    clock_t t;
    t = clock();
    int a[size], b, c=0, d=0;
     printf("enter element to be searched");
    scanf   ("  %d", &b);
    for(int i = 0; i < size; i++){
      a[c]=i*2;
      c++;
    }
    
      int s = size-1;
      int mid;
      
      while(d<=s){
       mid= (d+s)/2;
      if(a[mid]==b){
        printf("element found at index %d", mid);
        break;
      } 
      else if (a[mid] < b){
       d= mid+1;
      }
      else if 
      (a[mid]>b){
        s=mid-1;
      }
      }
    

  
    
    printf("\n");
    t= clock()-t;
    printf("execution time in sec %f \n", ((double)t)/CLOCKS_PER_SEC);

}


