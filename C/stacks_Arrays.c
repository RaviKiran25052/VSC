#include<stdio.h>
#include<stdlib.h>

int st[20],r=-1;

int push(int s) {
    int e;
    if (r==s-1) {
        printf("\n\tThe stack is full.\n");
    }
    else {
        printf("Enter the element to be pushed : ");
        scanf("%d",&e);
        r++;
        st[r]=e;
    }
}

int pop() {
    int d;
    if (r==-1) {
        printf("\n\tThe stack is empty.\n");
    }
    else {
        d = st[r];
        r--;
        printf("The poped element was : %d.\n",d);
    }
}

void display(int s) {
    int i;
    if (r==-1) {
        printf("\n\tThe stack is empty.\n");
    }
    else {
        printf("The elements in the stack are : ");
        for(i=r;i>=0;i--) {
            printf("%d ",st[i]);
        }
        printf("\n");
    }
}

int main(){
    int c,e,s;
    printf("\n\t****** stacks using arrays ******\n\n");
    printf("Enter the size of the stack : ");
    scanf("%d",&s);
    printf("\n1).Push.\n2).Pop.\n3)Display.\n");
    while(1) {
        printf("\nEnter your choice : ");
        scanf("%d",&c);
        switch(c){
            case 1:
                push(s);
                break;
            case 2:
                pop();
                break;
            case 3:
                display(s);
                break;
            default :
                exit(0);
        }
    }
}