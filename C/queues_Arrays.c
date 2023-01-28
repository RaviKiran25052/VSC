#include<stdio.h>
#include<stdlib.h>

int q[20],r=-1,f=0;

int push(int s) {
    int e;
    if (r==s-1) {
        printf("\n\tThe queue is full.\n");
    }
    else {
        printf("Enter the element to be pushed : ");
        scanf("%d",&e);
        r++;
        q[r]=e;
    }
}

int pull() {
    int d;
    if (r==f-1) {
        printf("\n\tThe queue is empty.\n");
    }
    else {
        d = q[f++];
        printf("The pulled element was : %d.\n",d);
    }
}

void display(int s) {
    int i;
    if (r==f-1) {
        printf("\n\tThe queue is empty.\n"); 
    }
    else {
        printf("The elements in the queue are : ");
        for(i=f;i<=r;i++) {
            printf("%d ",q[i]);
        }
        printf("\n");
    }
}

int main(){
    int c,e,s;
    printf("\n\t****** Queues using arrays ******\n\n");
    printf("Enter the size of the Queue : ");
    scanf("%d",&s);
    printf("\n1).Push.\n2).Pull.\n3)Display.\n");
    while(1) {
        printf("\nEnter your choice : ");
        scanf("%d",&c);
        switch(c){
            case 1:
                push(s);
                break;
            case 2:
                pull();
                break;
            case 3:
                display(s);
                break;
            default :
                exit(0);
        }
    }
}