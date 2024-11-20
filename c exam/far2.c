#include<stdio.h>

int main(){
	float basesalary ,HRA,DA,TA,grossalary;
	
	printf("total salary :=");
	scanf("%f",&basesalary);
    	printf("bonus HRA:=");
	scanf("%f",&HRA);
	    printf("bonus DA:=");
	scanf("%f",&DA);
	    printf("bonus TA:=");
	scanf("%f",&TA);
	grossalary=basesalary+(basesalary*HRA/100)+(basesalary*DA/100)+(basesalary*TA/100);
	printf("grossalary %f",	grossalary);
	return 0;
}
