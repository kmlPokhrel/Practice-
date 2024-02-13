
            //Quater Pyramid

// #include<stdio.h>
// int main() {
// int n;
// printf("Enter no. of rows you want");
// scanf("%d",&n);
// for(int row =0; row<n; row++){
//     for ( int col =0; col<row +1; col++){
//         printf("*");
//     }
//     printf("\n");
// }
// return 0;
// }


            //Inverted QuaterPyramid

#include<stdio.h>
int main() {
int n;
printf("Enter no. of rows you want");
scanf("%d",&n);
for(int row =0; row<n; row++){
    for ( int col =0; col<n-row-1; col++){
        printf("*");
    }
    printf("\n");
}
return 0;
}


            //Quater Numeric pyramid


// #include<stdio.h>
// int main() {
// int n;
// printf("Enter no. of rows you want");
// scanf("%d",&n);
// for(int row =0; row<n; row++){
//     for ( int col =0; col<row +1; col++){
//         printf("%d",col+1);
//     }
//     printf("\n");
// }
// return 0;
// }