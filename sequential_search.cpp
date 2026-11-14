#include<stdio.h>
#include<stdlib.h>
int **allocatemarks(int n,int m){
   int **marks=(int **)malloc(n*sizeof(int *));
   if(marks==NULL){
    printf("Memory allocation failed.\n");
    return NULL;
   }
   for(int i=0;i<n;i++){
    marks[i]=(int *)malloc(m*sizeof(int));
    if(marks[i]==NULL){
        printf("memory allocation failed.\n");
        for(int k=0;k<i;k++){
            free(marks[k]);
        }
        free(marks);
    }
   }
   return marks;
}
void readmarks(int **marks,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&marks[i][j]);
        }
    }
}
void  printmarks(int **marks,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",marks[i][j]);
        }
    }
}
int sequentialSearch(int** marks,int n,int m,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(marks[i][j]==target){
                return i*m+j;

            }
        }
    }
    return -1;
}
 void freemarks(int **marks,int n){
    for(int i=0;i<n;i++){
        free(marks[i]);

    }
    free(marks);
 }
 int main(){
    int n,m;
    printf("Enter the number of studnets:\n");
    if(scanf("%d",&n)!=1||n<=0){
        printf("Invalid input.\n");
        return 0;
    }
      printf("Enter the number of subjects:\n");
    if(scanf("%d",&m)!=1||m<=0){
        printf("Invalid input.\n");
        return 0;
    }
    int **marks=allocatemarks(n,m);
    if(marks==NULL){
        printf("Memory allocation is failed.\n");
        return 0;
    }
    readmarks(marks,n,m);
    printmarks(marks,n,m);
    int target;
    printf("enter the target element:\n");
    if((scanf("%d",&target)!=1)){
        printf("invalid input.\n");
        return 0;
    }
    int ele=sequentialSearch(marks,n,m,target);
    if(ele!=-1){
        int stuedentIn=ele/m;
        int subjectIn=ele%m;
        printf("the target %d fount at index %d(student:%d,subjectindex:%d)",target,ele,stuedentIn+1,subjectIn+1);
    }
    else{
        printf("The target not found.\n");
        
    }
    freemarks(marks,n);
    printf("Memory freed successfully");
    return 0;

 }