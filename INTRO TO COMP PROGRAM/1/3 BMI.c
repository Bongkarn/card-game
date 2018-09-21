#include<stdio.h>

int main(){
	
	float weight,height;
	int Cyear,Byear;
	
	printf("Enter current year : ");
	scanf("%d",&Cyear);
	printf("Enter your birth year : ");
	scanf("%d",&Byear);
	printf("Enter your weight(kg) : ");
	scanf(" %f",&weight);
	printf("Enter your height(cm) : ");
	scanf(" %f",&height);
	printf("\n---------------\n");
	printf("Your age = %d\n",Cyear-Byear);
	printf("Your BMI = %.3f\n",weight/((height/100.0)*(height/100.0)));
	printf("Your BMR(male) = %.3f\n",66+(13.75*weight)+(5*height)-(6.8*(Cyear-Byear)));
	printf("Your BMR(female) = %.3f\n",655+(9.6*weight)+(1.8*height)-(4.7*(Cyear-Byear)));
	
	return 0;
}
