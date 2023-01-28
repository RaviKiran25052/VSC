#include<stdio.h>
#include<stdlib.h>

struct node {
    int d;
    struct node *next;
};

typedef struct node *NODE;
NODE top=NULL;

void push() {
    NODE nn;
    int x;
    nn=(NODE)malloc(sizeof(NODE));
    printf("Enter the data of the element : ");
    scanf("%d",&x);
    nn->d=x;
    if (top==NULL) {
        top=nn;
        return;
    }
    nn->next=top;
    top=nn;
}

void display() {
    NODE temp=top;
    if (temp==NULL) {
        printf("\n\tThe stack is empty.\n");
        return;
    }
    printf("\n\t");
    while(temp->next!=NULL) {
        printf("[ %d ]-->",temp->d);
        temp=temp->next;
    }
    printf("[ %d ]\n",temp->d);
}

void pop() {
    NODE temp=top;
    if (temp==NULL) {
        printf("\n\tThe stack is empty.\n");
        return;
    }
    top=temp->next;
    temp->next=NULL;
}

int main() {
    int op;
    printf("\n\t******* Stacks using linked list *******\n\n");
    printf("   Press 1 to PUSH.\n   Press 2 to DISPLAY.\n   Press 3 to POP.\n   Press any to EXIT.\n");
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
                pop();
                break;
            default :
                exit(0);
        }
    }
}