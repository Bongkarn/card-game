#include<stdio.h>

int main(){
	
	char name1[20],name2[20],name3[20],group1,group2,group3;
	float gpa1,gpa2,gpa3;
	
	printf("Enter name1 : ");
	scanf(" %s",&name1);
	printf("Enter group1 : ");
	scanf(" %c",&group1);
	printf("Enter gpa1 : ");
	scanf(" %f",&gpa1);
	printf("Enter name2 : ");
	scanf(" %s",&name2);
	printf("Enter group2 : ");
	scanf(" %c",&group2);
	printf("Enter gpa2 : ");
	scanf(" %f",&gpa2);
	printf("Enter name3 : ");
	scanf(" %s",&name3);
	printf("Enter group3 : ");
	scanf(" %c",&group3);
	printf("Enter gpa3 : ");
	scanf(" %f",&gpa3);
	printf("\nReport\n");
	printf("-----------------------------\n");
	printf("Name\t\tGroup\tGPA\n");
	printf("-----------------------------\n");
	printf("%s\t\t%c\t%.2f\n",name1,group1,gpa1);
	printf("%s\t\t%c\t%.2f\n",name2,group2,gpa2);
	printf("%s\t\t%c\t%.2f\n",name3,group3,gpa3);
	
	return 0;
}
