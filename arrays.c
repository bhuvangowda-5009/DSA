#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elemnts in an array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elementss:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("ARRAY ELEMENTS ARE:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int max=0;
    for(int i=1;i<n;i++){
        if(arr[max]<arr[i]){
            max=i;
        }
    }
    printf("MAX ELEMENT : %d \n", arr[max]);

    
     int min=0;
    for(int i=1;i<n;i++){
        if(arr[min]>arr[i]){
            min=i;
        }
    }
    printf("MIN ELEMENT : %d \n", arr[min]);
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    
    printf("SUM : %d \n",sum);
    printf("AVERAGE : %.2f \n",(float)sum/n);


        arr[max]=0;
       int sec_max=0;
    for(int i=1;i<n;i++){
        if(arr[sec_max]<arr[i]){
            sec_max=i;
        }
    }
     printf("SEC_MAX ELEMENT : %d \n", arr[sec_max]);
    
    return 0;
}