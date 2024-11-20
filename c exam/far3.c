#include<stdio.h>

int main (){
	float first_angle,second_angle,third_angle;
	
	printf("enter the first angle :");
	scanf("%f", & first_angle);
	
	printf("enter the second angle :");
	scanf("%f", &second_angle);
	
	third_angle = 180 - (first_angle+second_angle);
	
	printf("the third angle is:%.2f degrees\n",third_angle);
    return 0;
}
