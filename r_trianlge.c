#include<stdio.h>
int main(){
    int n;
    int a=1;
    printf("Enter the val of n:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        for(int k=1;k<=n-i;k++){
            printf("  ");
        }
        a=i;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }
    // for(int i=n;i>=1;i--){
    //     for(int j=i-1;j<=n;j++){
    //         printf("%d ",j);
    //     }
    //       printf("\n"); 
    // }
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             printf(" ");
//         }
//             for(int j=1;j<=i;j++ ){
//                 printf("* ");
//             }

    
//     printf("\n");
//     }



//   for(int i=n-1;i>=1;i--){
//         for(int j=n-i+ 1;j>=1;j--){
//             printf(" ");
//         }
//             for(int j=i;j>=1;j-- ){
//                 printf("* ");
//             }

    
//     printf("\n");
//     }

       
    // for(int i=n;i<=n+n;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("* ");
    //     }
    //     printf("\n");

    // }


    // for(int i=1;i<n;i++){
    //     for(int j=n-i;j>0;j--){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    
    
 



    // for(int i=1;i<n;i++){
    //     for(int j=n-i;j>0;j--){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // printf("\n");


    // for(int i=1;i<=n;i++){
    //     for(int k=1;k<=i;k++){
    //         if(k==1||i==n||i==k){
    //         printf("* ");
    //     }
    //     else{
    //         printf("  ");
    //     }
    // }
    // printf("\n");
       
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n-i-1;j++){
        //         if(j==1||i==1||j==n-i-1){
        //             printf("* ");
        //         }
        //         else{
        //             printf("  ");
        //         }
        //     }
        //     printf("\n");
        // }
   
    
        
    // }
    // for(int i=0;i<n;i++){
    //     for(int k=n;k<=n;k++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
}
