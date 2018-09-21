#include<stdio.h>

int main(){
	
	int day,month,year;
	
	printf("Enter dd/mm/yyyy : ");
	scanf("%d/%d/%d",&day,&month,&year);
	printf("New format = %d/%d/%d\n",month,day,year-543);
	
	return 0;
}
