#include<stdio.h>
void main() {
      int a[10],i,s=0;
      printf("Enter the 4 elements : ");
      for(i=0;i<4;i++) {
            scanf("%d",&a[i]);
      }
      for(i=0;i<4;i++)
            s+=a[i];
      printf("The sum of these 4 terms is : %d\n",s);
}