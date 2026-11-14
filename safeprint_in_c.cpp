#include<stdio.h>
void safeprint(void *ptr,int type){
 if(ptr==NULL){
    printf("there is no element to print.\n");
    return ;
 }
 if(type==0){
    printf("the val is %d",*(int *)ptr);
 }else{
    printf("the vale is %f",*(float *)ptr);
 }
}
int main(){
    int n;
    int intArray[5];
    float floatArray[5];
   int *ip=intArray;
   float* fp =floatArray;
   printf("Enter the elements of the int array:\n");
   for(int i=0;i<5;i++){
    scanf("%d",(ip+i));
   }
    printf("Enter the elements of the float array:\n");
   for(int i=0;i<5;i++){
    scanf("%f",(fp+i));
   }
   printf("----the elements of INT array----\n");
   for(int i=0;i<5;i++){
    printf("%d ",*(ip+i));
   }
     printf("----the elements of FLOAT array----\n");
   for(int i=0;i<5;i++){
    printf("%f ",*(fp+i));
   }
   int choice,index;
   printf("\n0-int\n1-float\n");
   printf("Enter the choice:\n");
   scanf("%d",&choice);
   printf("Enter the index :\n");
   scanf("%d",&index);
   if(choice==0){
    if(index<5 && index>=0){
        safeprint(ip+index,0);
    }
    else{
        safeprint(NULL,0);
    }
   }
   else if(choice==1){
    if(index<5 && index>=0){
        if(index<5 && index>=0){
            safeprint(fp+index,1);
        }
        else{
            safeprint(NULL,1);
        }
    }
   }
   return 0;
}