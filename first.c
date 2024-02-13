// Hollow rectangle

#include<stdio.h>
int main() {
    int n;
    printf("Enter the no. of rows and column you want");
    scanf("%d",&n);
for( int row =0; row< n; row++){
    for( int col =0; col<n+2; col++){
        if(row ==0 || row == n-1){
            printf("*");
        }
        else if( col ==0|| col ==n+1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}