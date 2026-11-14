#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node* next;
}Node;
typedef struct Header 
{
    Node* first;
    Node* last;
    int count;
}Header;
void initiateHeader(Header* h){
   h->first=NULL;
   h->last=NULL;
   h->count=0;
}
Node* createNode(int val){
    Node* newNode=(Node *)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    
    }
    newNode->data=val;
    newNode->next=NULL;
    return newNode;
}

void insertAtBegin(Header* h,int val){
    if(h==NULL){
        printf("memory allocation failed.\n");
        exit(1);
    }
    Node* newNode=createNode(val);
    if(h->first==NULL){
        h->first=h->last=newNode;
    }
}
void insertAtEnd(Header* h,int val);
void insertAtPos(Header *h,int val,int pos);
void  deleteFromFront(Header* h);
void  deleteFromEnd(Header* h);
void  delteAtPos(Header* h,int key);
void traverse(Header* h);
void freeList(Header *h);

int main(){
    int choice,val,pos,key;
    Header *head=NULL;
    while(1){
        printf("1.insert at beginning\n");
        printf("2.insert at end\n");
        printf("3.insert at pos\n");
        printf("4.delete at front\n");
        printf("5.delete at last\n");
        printf("6 delete by id\n");
        printf("7.print elements\n");
        printf("8.exit\n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the value to insert at front:\n");
            scanf("%d",&val);
            insertAtBegin(head,val);
            break;
            case 2:
            printf("Enter the value to insert at end:\n");
            scanf("%d",&val);
            insertAtEnd(head,val);
            break;
            case 3:
            printf("Enter the value to insert at pos:\n");
            scanf("%d",&val);
            printf("Enter the pos to insert :\n");
            scanf("%d",&pos);
            insertAtPos(head,val,pos);
            break;
            case 4:
            deleteFromFront(head);
            break;
            case 5:
            deleteFromEnd(head);
            break;
            case 6:
            printf("Enter the key to delete:\n");
            scanf("%d",&key);
            delteAtPos(head,key);
            break;
            case 7:
            traverse(head);
            break;
            case 8:
            while(head!=NULL){
                deleteFromFront(head);
            }
            printf("The memroy is freed successfully.\n");
            return 0;\
            break;
            default:
            printf("Invalid choice.\n");


            
        }
    }
    return 0;

}