#include <stdio.h>
#include <stdlib.h>
int* fonc(int n){
    long int* arr = (long int*)malloc(2*sizeof(long int));
    long int min=99999999,len;
    for(long int i=-n;i<=n;i++){
        long int count=0;
        for(long int j=i;j<=n;j++){
            count = count + j;
            if(count==n){
                
                
                len = j-i;
                if(len<min && len!=0){
                    min=len;
                    arr[0]=i;
                    arr[1]=j;
                }
            }
        }
    }
    return arr;
}
int main() {
    long int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
         long int n;
         long int *a;
    
        printf("Enter the value of n:");
        scanf("%d",&n);
        a = fonc(n);
        for(int i=0;i<2;i++){
            printf("%ld\t",a[i]);
           
        }
         printf("\n");
    }
   return 0;
    
    
}