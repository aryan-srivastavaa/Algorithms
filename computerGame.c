// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    long int t;
    scanf("%ld",t);
    for(int i=0;i<t;i++){
        long int n;
        scanf("%ld",n);
        long int a = 2;
        int count = 0;
        for(int i=1;a<1000000000;i++){
            if(n == a){
                printf("YES");
                count++;
                break;
            }
            a = 2 * pow(i,2);
        }
        if(count == 0){
            printf("NO");
        }
    }
    return 0;
}