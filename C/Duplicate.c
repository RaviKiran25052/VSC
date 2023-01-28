#include<stdio.h>
void duplicate(int a[],int n) {
	int i,j,k=0;
	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
			if (a[i]==a[j])
				k=1;
			else
				k=0;
		}
	}
	if (k==1)
		printf("true");
	else
		printf("false");
}
int main() {
	int a[4]={1,2,3,1};
	duplicate(a[4],4);
	return 0;
}