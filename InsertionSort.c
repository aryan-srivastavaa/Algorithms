//Insertion Sort


#include <stdio.h>
void insertionSort(int* Arr, int n){
    int key, j;
    
    for(int i=1;i<=n-1;i++){
        key = Arr[i];
        printf("Key is %d\t",key);
        
        
        for(j=i-1;j>=0;j--){
            if(j>0){
            if(Arr[j]>key){
                printf("if statement %d\t",j);
            Arr[j+1] = Arr[j];
            
            }
            else{
                 printf("else statement %d\t",j);
                Arr[j+1] = key;
                break;
            }
            }
            else{
                if(Arr[j]>key){
                    Arr[j+1]=Arr[j];
                    Arr[0]=key;
                }
            }
        }
         
         printf("\n");
         for(int q=0;q<14;q++){
        printf("%d",Arr[q]);
    }
     printf("\n");
        
        
        
    }
    
}
    
    
int main() {
    int Arr[] = {5,7,3,1,4,6,14,12,11,54,67,86,13,45};
    int n = 14;
    insertionSort(Arr, n);
    for(int i=0;i<14;i++){
        printf("%d\t",Arr[i]);
    }
 

}