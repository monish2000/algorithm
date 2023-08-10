#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    clock_t t;
    t = clock();
    int m,n,r[100],p[100],j=0,k=0;
    printf("m");
    scanf("%d",&m);
    printf("n");
    scanf("%d",&n);
    if(m==0||n==0){
        printf("no hcf");
        return 0;
    }

    int m_=abs(m);
    for(int i=m_; i >0; i--){
       if (m_%i==0){
     //  for(int j=0; j<m; j++){
        {
        r[j]=i;
        j++;
        }
       //} 
    }
    }
    for(int i=0;i<j ;i++){
        printf  ("  %d ",   r[i]);
    }

    //n factor
    printf("\n");
    int n_=abs(n);
     for(int i=n_; i >0; i--){
       if (n_%i==0){
     //  for(int j=0; j<m; j++){
        {
        p[k]=i;
        k++;
        }
       //} 
    }
    }
    for(int i=0;i<k ;i++){
        printf  ("%d ",   p[i]);
    }


        int hcf = 1;
    for (int i = 0; i < j; i++) {
        for (int l = 0; l < k; l++) {
            if (r[i] == p[l] && r[i] > hcf) {
                hcf = r[i];
            }
        }
    }
    printf("\n");
    printf("gcd is %d\n", hcf);



    t= clock()-t;
    printf("execution time in sec %f \n", ((double)t)/CLOCKS_PER_SEC);
    return 0;
}