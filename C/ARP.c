#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main(){
	struct{
		char *ipa;
		char *pha;
	}ipadd[2];
	int i,j,x=10;
	char *temp,*temp1,*x1;
	char ip[2][15]={"135.237.105.128","225.22.205.221"};
	char ph[2][18]={"SYSTEM1","SYSTEM12"};
	clrscr();
	for(j=0;j<2;j++){
		srand(x++);
		for(i=0;i<4;i++){
			itoa(rand()%256,temp,10);
			printf("\n%s",temp);
			strcat(ipadd[j].ipa,temp);
			if(i<3)
			strcat(ipadd[j].ipa,".");
		}
		printf("%s",itoa(j+1,x1,10));
		temp1=strcat("SYSTEM",x1);
		strcpy(ipadd[j].pha,temp1);
		printf("\n%s\n",ipadd[j].ipa);
		printf("\n%s\n",ipadd[j].pha);
	}
		for(j=0;j<2;j++)
		printf("\n\n%s\n",ipadd[j].ipa);
		for(j=0;j<2;j++){
			for(i=0;i<2;i++){
				if(strcmp(ipadd[i].ipa,ip[j])==0){
					printf("\n the physical address of the given ip address %s is",ip[j]);
					printf("\n\n%s\n",ph[j]);
				}
			}
		}
		getch();
		for(j=0;j<2;j++){
			for(i=0;i<2;i++){
				if(strcmp(ipadd[i].pha,ph[j])==0){
					printf("\n the ip address of the given physical address %s is",ph[j]);
					printf("\n\n%s\n",ip[j]);
				}
			}
		}
		getch();
}
