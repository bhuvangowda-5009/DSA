#include<stdio.h>
#include<stdlib.h>
int* mallocarray(int n);
int* callcoarray(int n);
int* resizedarray(int* arr,int m);
void readelements(int *arr,int n,int m);
void printelements(int *arr,int n);
void freememory(int *arr);
int main(){
    int* mallocarray_main;
    int* callcoarray_main;
    int* resizedarray_main;
   
    int n,m;
    printf("Enter the elements in an array:\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
    printf("Invalid size.\n");
    return 1;
}
    mallocarray_main=mallocarray(n);
    if(mallocarray_main==NULL){
        printf("Memory allocation failed.\n");
        return 0;
    }
    printf("Enter the array elements:\n");
readelements(mallocarray_main, 0, n);

  
    printf(" the array elemts are:\n");
    printelements(mallocarray_main,n);
     callcoarray_main=callcoarray(n);
     if(callcoarray_main==NULL){
        printf("Invalid size.\n");
        free(mallocarray_main);
        return 1;
     }
     printf("the calloc elemets are:\n");
     printelements(callcoarray_main,n);
    printf("Enter the size of new array:\n");
    if (scanf("%d", &m) != 1 || m<= 0) {
    printf("Invalid size.\n");


     free(mallocarray_main);
     free(callcoarray_main);
     return 1;
    }
     resizedarray_main=resizedarray(mallocarray_main,m);
     if(resizedarray_main==NULL){
        printf("Memeory allocation failed.\n");
        free(mallocarray_main);
        free(callcoarray_main);
        return 1;
     }
     if(m>n){
     printf("Enter the elemts of resized array:\n");
    readelements(resizedarray_main,n,m);
     }
     printf("Finalized array:\n");
     printelements(resizedarray_main,m);

    
     freememory(resizedarray_main);
freememory(callcoarray_main);
    

    
    return 0;
}
int* mallocarray(int n){
    return (int*)malloc(n*sizeof(int));
}
int* callcoarray(int n){
    return (int*)calloc(n,sizeof(int));
}
int* resizedarray(int* arr,int m){
    return (int*)realloc(arr,m*sizeof(int));
}
void readelements(int *arr,int n,int m){
    for(int i=n;i<m;i++){
        scanf("%d",(arr+i));
    }
}
void printelements(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
}
void freememory(int *arr){
    free(arr);
    
}