#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
   
}Node;
Node *createNode(int val){
    Node *newNode=(Node *)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("unable to create the node.\n");
        return NULL;
    }
    newNode->data=val;
    newNode->next=NULL;
    return newNode;
}
Node* insertAtBeg(Node* head, int val){
    Node* newNode=createNode(val);
    if(newNode==NULL){
        printf("Memory allocation failedd.\n");
        return head;
    }
    if(head==NULL){
        return newNode;
    }
    newNode->next=head;
    head=newNode;
    return head;
}
Node* insertAtEnd(Node* head, int val){
    Node* newNode=createNode(val);
    if(newNode==NULL){
        printf("memory allocation failed.\n");
        return head;
    }
    if(head==NULL){
        return newNode;  
      }
      Node* temp=head;
      while(temp->next!=NULL){
        temp=temp->next;

      }
      temp->next=newNode;
      return head;
}

Node* insertAtPos(Node* head,int pos,int val){
    if(pos<1){
        printf("Invalid position.\n");
        return  head;
    }
 
    if(pos==1){
        return insertAtBeg(head,val);
    }
       Node* newNode=createNode(val);
    if(newNode==NULL){
        printf("Memory allocation failedd.\n");
        return head;
    }
       Node* curr=head;
    int count=1;
    while(curr!=NULL && pos-1>count){
        curr=curr->next;
        count++;
    }
    if(curr==NULL){
        printf("The pos is byond the list.\n");
        return head;
    }
    newNode->next=curr->next;
    curr->next=newNode;
    return head;
}
Node* deleteFromBeg(Node* head){
    if(head==NULL){
        printf("The list is already empty.\n");
        return NULL;
    }
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}
Node* deleteFromEnd(Node* head){
    if(head==NULL){
        printf("The list is already empty.]n");
        return NULL;
    }
      if(head->next==NULL){
        free(head);
        return NULL;
    }
    Node* temp=head;

    while(temp->next->next!=NULL){
       
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    return head;
}
Node* deleteByKey(Node* head, int key){
    if(head==NULL){
        printf("The list is already empty.\n");
        return NULL;
    }
    Node* current=head;
    Node* prev=NULL;
    if(current->data==key){
        head=head->next;
    free(current);
    return head;
    }
    while(current!=NULL && current->data!=key){
        prev=current;
        current=current->next;
    }
    if(current==NULL){
        printf("The key does not exitst.\n");
        return head;
    }
    prev->next=current->next;
    free(current);
    return head;
}
void displayEle(Node* head){
    if(head==NULL){
        printf("the list is empty.\n");
        return ;
    }
    Node* curr=head;
    while(curr!=NULL){
    printf("%d->",curr->data) ;
       curr=curr->next;
    }
    printf("NULL\n");
    

}
int main(){
     Node* head=NULL;

    while(1){
         printf("1.InsertAt Beginning:\n");
    printf("InsertAt End:\n");
    printf("InsertAt Pos:\n");
    printf("4.Delete From beg:\n");
    printf("5.Delete From end:\n");
    printf("6.delete at pos:\n");
    printf("7.display List");
    printf("8.exit\n");
   
   int choice,val,pos,key;
   printf("\n Enter your choice:\n");
   scanf("%d",&choice);
   switch (choice){
    case 1:
    printf("Enter the val to insert at Beg\n");
    scanf("%d",&val);
    head=insertAtBeg(head,val);
    break;
    case 2:
    printf("Enter the val to insert at end:\n");
    scanf("%d",&val);
    head=insertAtEnd(head,val);
  break;
  case 3:
  printf("Enter the pos:\n");
  scanf("%d",&pos);
  printf("Enter the val:\n");
  scanf("%d",&val);
  head=insertAtPos(head,pos,val);
  break;
  case 4:
  head=deleteFromBeg(head);
  break;
  case 5:
  head=deleteFromEnd(head);
  break;
  case 6:
  printf("Enter the key to be deleted:\n");
  scanf("%d",&key);
  head=deleteByKey(head,key);
  break;
  case 7:
  displayEle(head);
  break;
  case 8:
  while(head!=NULL){
    head=deleteFromBeg(head);
  }
  printf("program terminated");
    return 0;
    default:
    printf("Invalid choice.\n");
    
   }
    }
    return 0;

}
