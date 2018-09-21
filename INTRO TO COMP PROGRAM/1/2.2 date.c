#include<stdio.h>

int main(){
	
	int date;
	
	printf("Enter date : ");
	scanf("%d",&date);
	printf("New format date = %02d-%02d-%d",date%100,(date%10000)/100,date/10000);
	
	return 0;
}
