#include<stdio.h>
#include<stdlib.h>

int c=0;

struct node {
    int d;
    struct node *next;
};

typedef struct node *NODE;
NODE front=NULL;
NODE rear=NULL;

void push() {
    NODE nn;
    int x;
    nn=(NODE)malloc(sizeof(NODE));
    printf("Enter the data of the element : ");
    scanf("%d",&x);
    nn->d=x;
    if (front==NULL && rear==NULL) {
        front=nn;
        rear=nn;
        return;
    }
    rear->next=nn;
    rear=nn;
    c++;
}

void display() {
    NODE temp=front;
    if (temp==NULL) {
        printf("\n\tThe Queue is empty.\n");
        return;
    }
    printf("\n\t");
    while(temp->next!=NULL) {
        printf("[ %d ]-->",temp->d);
        temp=temp->next;
    }
    printf("[ %d ]-->[ NULL ]\n",temp->d);
}

void pull() {
    NODE temp=front;
    int e;
    if (temp==NULL) {
        printf("\n\tThe Queue is empty.\n");
        return;
    }
    e=front->d;
    front=temp->next;
    temp->next=NULL;
    printf("The Pulled element is : %d\n",e);
}

int main() {
    int op;
    printf("\n\t******* Queues using linked list *******\n\n");
    printf("   Press 1 to PUSH.\n   Press 2 to DISPLAY.\n   Press 3 to PULL.\n   Press any to EXIT.\n");
    while(1) {
        printf("\nEnter ur choice : ");
        scanf("%d",&op);
        switch(op) {
            case 1:
                push();
                break;
            case 2:
                display();
                break;
            case 3:
                pull();
                break;
            default :
                exit(0);
        }
    }
}