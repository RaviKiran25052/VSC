#include<stdio.h>
#include<stdlib.h>
struct node{
    int d;
    struct node *next,*prev;
};
typedef struct node *NODE;
NODE head = NULL,tail = NULL;

void create(){
    int i,n;
    NODE temp,p;
    printf("Enter No. of Nodes required : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        temp=(NODE)malloc(sizeof(NODE));
        printf("Enter data in node-%d : ",i);
        scanf("%d",&(temp->d));
        temp->next=NULL;
        temp->prev=NULL;
        if(head==NULL)
            head=temp;
        else{
            p=head;
            while(p->next!=NULL)
                p=p->next;
            p->next=temp;
            temp->prev=p;
            tail=temp;
        }
    }
}

void display(){
    NODE p=head;
    printf("\n\t");
    if (p==NULL){
        printf("The list is empty.\n");
        return;
    }
    printf("[ NULL ]<-->");
    while(p->next!=NULL){
        printf("[ %d ]<-->",p->d);
        p=p->next;
    }
    printf("[ %d ]<-->[ NULL ]\n",p->d);
    p=tail;
    printf("\t[ NULL ]<-->");
        while(p->prev!=NULL){
            printf("[ %d ]<-->",p->d);
            p=p->prev;
        }
        printf("[ %d ]<-->[ NULL ]\n",p->d);
}

void insert(){
    int i,pos=0;
    NODE temp,p=head;
    if (head == NULL){
        printf("\n\tInsertion cannot be possible.\n");
        return;
    }
    temp=(NODE)malloc(sizeof(NODE));
    temp->next=NULL;
    temp->prev=NULL;
    printf("Enter the position to be inserted : ");
    scanf("%d",&pos);
    printf("Enter the data in the new node : ");
    scanf("%d",&(temp->d));
    if (pos==1){
        p->prev=temp;
        temp->next=head;
        head=temp;
        return;
    }
    for(i=1;i<pos-1;i++){
        p=p->next;
    }
    temp->next=p->next;
    temp->prev=p;
    p->next->prev=temp;
    p->next=temp;
    display();
}

void delete(){
    int i,p;
    NODE temp=head;
    if (head == NULL){
        printf("\n\tDeletion cannot be possible.\n\n");
    }
    printf("Enter the position of node to be deleted : ");
    scanf("%d",&p);
    if (p==1){
        head=temp->next;
        temp->prev=NULL;
        return;
    }
    for(i=1;i<p-1;i++){
        temp=temp->next;
    }
    temp->next->next->prev=temp;
    temp->next=temp->next->next;
}

int main(){
    int c,d;
    NODE head=NULL;
    printf("\n\n********* Double Linked List *********\n\n");
    printf("Press 1 to : Create.\nPress 2 to : Display.\nPress 3 to : Insert.\nPress 4 to : Delete.\nPress any to : Exit.\n");
    while(1){
        printf("\nEnter ur choice : ");
        scanf("%d",&c);
        switch(c){
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                delete();
                break;
            default:
                exit(0);
        }
    }
}