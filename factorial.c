#include<stdio.h>
#include<conio.h>
void main(){
	int a,i,fact;
	printf("Enter the number to get it's factorial:");
	scanf("%d",&a);
	fact = 1;
	for(i = a; i > 0; i--){
		fact = fact*i;
	}
	printf("%d",fact);
	getch();
}
