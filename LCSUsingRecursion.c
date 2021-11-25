//LCS Using Recursion
#include <stdio.h>
int i=0,j=0;
char a[4]={'b','c','d','\0'};
char b[5] = {'a','b','c','d','\0'};
int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int lcs(i,j){
    
    if(a[i]=='\0'|| b[j]=='\0'){
        return 0;
    }
    else if(a[i]==b[j]){
        return 1+lcs(i+1,j+1);
    }
    else{
        return max(lcs(i+1,j),lcs(i,j+1));
    }
}
int main(){
    int ans = lcs(0,0);
    printf("%d",ans);
}