#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;
Node* createNode(int val){
    Node* newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("Memory allocation failed.\n");
        return NULL;
    }
    newNode->data=val;
    newNode->next=NULL;
    return newNode;
}
Node* insertAtBeginning(Node* head,int val){
    Node* newNode=createNode(val);
    if(newNode==NULL){
        printf("Memory allocation failed.\n");
        return head;
    }
    if(head==NULL){
        head=newNode;
        return head;
    }
    newNode->next=head;
    head=newNode;
    return head;

}
Node* insertAtEnd(Node* head,int val){
    
   Node* newNode=createNode(val);
    if(newNode==NULL){
        printf("Memory allocation failed.\n");
        return head;
    }
    if(head==NULL){
        return insertAtBeginning(head,val);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return head;

}
Node* insertAtPos(Node* head, int val, int pos){
    if(pos<1){
        printf("Invalid location.\n");
        return head;
    }
    if(pos==1){
        return insertAtBeginning(head,val);
    }
    Node* temp=head;
    int i=1;
    while(temp!=NULL && i<pos-1){
        temp=temp->next;
    i++;
    }
    if(temp==NULL){
        printf("Invalid position.\n");
        return head;
    }
        Node *newNode = createNode(val);

    if (newNode == NULL)
        return head;

    newNode->next = temp->next;
    temp->next = newNode;

    return head;

}


Node* deleteAtBeginning(Node* head){
    if(head==NULL){
        printf("Thhere is not element to delelte.\n");
        return NULL;
    }
    if(head->next==NULL){
        free(head);
        return NULL;
    }
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;


}
Node* deleteAtEnd(Node* head){
  if(head==NULL){
        printf("Thhere is not element to delelte.\n");
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
Node* deleteAtPos(Node* head, int val){
    if(head==NULL){
        printf("Thhere is not element to delelte.\n");
        return NULL;
    }
      if(head->data==val){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }

    Node* temp=head;
  
    while(temp->next!=NULL && temp->next->data!=val){
        temp=temp->next;
    }
    if(temp->next==NULL){
        printf("Element not found.\n");
        return head;
    }
    Node* del=temp->next;
    temp->next=del->next;
    free(del);

    return head;

}
void display(Node* head){
if(head==NULL){
    printf("The SLL is empty!\n");
    return;
}
Node* temp=head;
while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
}
printf("NULL\n");

}
int main(){
    Node* head=NULL;
    int choice, val,pos;
    while(1){
        printf("-----OPERATIONS ON SLL-----\n");
        printf("1.Insert at beginning.\n");
        printf("2.Insert at end.\n");
        printf("3.Insert at pos.\n");
        printf("4.delete at beginning.\n");
        printf("5.delete at end\n");
        printf("6.delete by value.\n");
        printf("7. printf all the elements.\n");
        printf("8.exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
             printf("Enter the value to insert:\n");
             scanf("%d",&val);
             head=insertAtBeginning(head,val);
             break;
             case 2:
             printf("Enter the value to insert at end:\n");
             scanf("%d",&val);
             head=insertAtEnd(head,val);
             break;
             case 3:
             printf("Enter the pos:\n");
             scanf("%d",&pos);
             printf("Enter the value :\n");
             scanf("%d",&val);
             head=insertAtPos(head,val,pos);
             break;
             case 4:
             head=deleteAtBeginning(head);
             break;
             case 5:
             head=deleteAtEnd(head);
             break;
             case 6:
             printf("Enter the value to delete:\n");
             scanf("%d",&val);
             head=deleteAtPos(head,val);
             break;
             case 7:
             display(head);
             break;

             case 8:
             
             while(head!=NULL){
               head= deleteAtBeginning(head);
              

             }
             printf("memory freed successfully.7\n");
             return 0;
             default:
             printf("Invalid choice.\n");

        }
    }
}