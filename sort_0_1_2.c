// 0 1 2
#include <stdio.h>
int main(){
    int arr[6]={0,2,0,1,1,2};
    int a=0,b=0,c=0;
    for(int i=0;i<6;i++){
        if(arr[i]==0){
            a++;
        }
        else if(arr[i]==1){
            b++;
        }
        else{
            c++;
        }
    }
    printf("%d,%d,%d\n",a,b,c);
    for(int i=0;i<a;i++){
        arr[i]=0;
    }
     for(int i=a;i<b+a;i++){
        arr[i]=1;
    }
     for(int i=b+a;i<6;i++){
        arr[i]=2;
    }
    for(int i=0;i<6;i++){
        printf("%d\t",arr[i]);
    }
}