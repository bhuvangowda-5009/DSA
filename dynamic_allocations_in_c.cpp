#include<stdio.h>
#include<stdlib.h>
int* mallocArray_allocation(int n){
    return (int *)malloc(n*sizeof(int));
}
int* callocArray_allocation(int n){
    return (int *)calloc(n,sizeof(int));
}
int* resizedArray_allocation(int n,int *mallocArray){
    return (int *)realloc(mallocArray,n*sizeof(int));
}
void readElements(int *arr,int start,int end){
    for(int i=start;i<end;i++){
        scanf("%d",(arr+i));
    }
}
void printElements(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
}
void freeMemory(int *arr){
    
        free(arr);
    
}
int main(){
    int *mallocArray;
    int *callocArray;
    int *resizedArray;
    int n,new_n;
    printf("Enter the number of elements:\n");
    if((scanf("%d",&n)!=1)||n<=0){
        printf("Invalid input.\n");
        return 0;
    }
    mallocArray=mallocArray_allocation(n);
    if(mallocArray==NULL){
        printf("Memory allocation failed:\n");
        return 0;
    }
    printf("Enter the elements for malloc array:\n");
    readElements(mallocArray,0,n);
    printf("The elements after taking the input for malloc array:\n");
    printElements(mallocArray,n);
    callocArray=callocArray_allocation(n);
    if(callocArray==NULL){
        printf("Memory allocation failed.\n");
        freeMemory(mallocArray);
        return 0;
    }
    printf("Enter the elemenets for calloc Array:\n");
    readElements(callocArray,0,n);
    printf("The elements of calloca array after taking elements are:\n");
    printElements(callocArray,n);
    printf("Enter the new_size:\n");
      if((scanf("%d",&new_n)!=1)||new_n<=0){
        printf("Invalid input.\n");
        return 0;
    }
    resizedArray=resizedArray_allocation(new_n,mallocArray);
    if(resizedArray==NULL){
        printf("the memory allocation failed.\n");
        freeMemory(mallocArray);
        freeMemory(callocArray);
        return 0;
    }
    mallocArray=resizedArray;
    if(new_n>n){
        printf("Enter the remaining elements:\n");
        readElements(mallocArray,n,new_n);

    }
    printf("The array after resizing :\n");
        printElements(mallocArray,new_n);
        free(mallocArray);
        free(callocArray);
        return 0;


}