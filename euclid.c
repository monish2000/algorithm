#include <stdio.h>
#include <time.h>

int main(){
    clock_t t;
    t = clock();
    int m,n,r;
    printf("m");
    scanf("%d",&m);
    printf("n");
    scanf("%d",&n);
    
     do{
        r=m%n;
        m=n;
        n=r;
    }
    while(n!=0);
    printf("\n gcd is %d\n",m);

    t= clock()-t;
    printf("execution time in sec %f \n", ((double)t)/CLOCKS_PER_SEC);
    return 0;
}