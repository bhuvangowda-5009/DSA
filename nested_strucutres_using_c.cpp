#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char name[30];
    int year;
}Publisher;
typedef struct{
int id;
char title[50];
float price;
Publisher Pub;
}Book;
void printBooks(Book *books,int n){
    for(int i=0;i<n;i++){
       printf("id:%d \n",books[i].id);
       printf("title:%s \n",books[i].title);
       printf("price:%.2f \n",books[i].price);
       printf("Name:%s \n",books[i].Pub.name);
       printf("year:%d \n",books[i].Pub.year);

    }
}
Book* findMax(Book* books,int n){
    int max=0;
    for(int i=1;i<n;i++){
        if(books[i].price>books[max].price){
            max=i;
        }
    }
    return &books[max];
}
Book* findMin(Book* books,int n){
    int min=0;
    for(int i=1;i<n;i++){
        if(books[i].price<books[min].price){
            min=i;
        }
    }
    return &books[min];
}
int main(){
    int n;
    Book *books;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    books=(Book *)malloc(n*sizeof(Book));
    if(books==NULL){
        printf("Memory alloction failed.\n");
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("Enter the id:\n");
        scanf("%d",&books[i].id);
        printf("Enter the title:\n");
        scanf(" %[^\n]",books[i].title);
        printf("Enter the price:\n");
        scanf("%f",&books[i].price);
        printf("Enter the name:\n");
        scanf(" %[^\n]",books[i].Pub.name);
        printf("Enter the year:\n");
        scanf("%d",&books[i].Pub.year);
    }
    printBooks(books,n);
    Book *max=findMax(books,n);
    printf("the details of max book:\n");
     printf("id:%d \n",max->id);
       printf("title:%s \n",max->title);
       printf("price:%.2f \n",max->price);
       printf("Name:%s \n",max->Pub.name);
       printf("year:%d \n",max->Pub.year);
       Book *min=findMin(books,n);
       printf("The detials of min price book:\n");
        printf("id:%d \n",min->id);
       printf("title:%s \n",min->title);
       printf("price:%.2f \n",min->price);
       printf("Name:%s \n",min->Pub.name);
       printf("year:%d \n",min->Pub.year);

return 0;

}