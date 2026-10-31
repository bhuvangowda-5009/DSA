#include<stdio.h>
#include<stdlib.h>
void safeprint(void* ptr,int val){
if(ptr==NULL){
    printf("NULL pointer nothing to print.\n");
    return ;
}
if(val==0){
    printf("the value is %d",*(int *)ptr);
    
}
else{
    printf("the value is %f",*(float *)ptr);
}
}
int main(){
    int intArray[5];
    float floatArray[5];
    int choice,index;
   int *ip=intArray;
   float *fp=floatArray;
    printf("Enter the elemnts of intArray:\n");
    for(int i=0;i<5;i++){
        scanf("%d",(ip+i));
    }
    printf("Enter the elements of float array:\n");
    for(int i=0;i<5;i++){
        scanf("%f",(fp+i));
    }
    printf("The elements of int Array are:\n");
    for(int i=0;i<5;i++){
        printf("%d ",*(ip+i));
    }
    printf("\n");
    printf("the elements of float arrat are:\n");
    for(int i=0;i<5;i++){
        printf("%f ",*(fp+i));
    }
    
    printf("\n");
    printf("\nEnter your choice:\n0-int\n1-float\n");
    scanf("%d",&choice);
    printf("Enter the index to display:\n");
    scanf("%d",&index);
    if(choice==0){
        if(index>=0 && index<5){
            safeprint(ip+index,0);
        }
        else{
            safeprint(NULL,0);
        }
    }
else if(choice==1){
        if(index>=0 && index<5){
            safeprint(fp+index,1);
        }
        else{
            safeprint(NULL,1);
        }
    }
    else{
        printf("Invalid choice.\n");

    }
    return 0;
}