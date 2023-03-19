#include <stdio.h>

int main() {
    int i,n;
    int t1=0,t2=1;
    int third_term=t1+t2;
    printf("Enter the number of terms : \n");
    scanf("%d",&n);
     printf("Fibonaci series is : %d,%d,", t1,t2);
     for(i=3;i<=n;i++)
     {
         printf("%d,",third_term);
         t1=t2;
         t2=third_term;
         third_term=t1+t2;
     } 
}