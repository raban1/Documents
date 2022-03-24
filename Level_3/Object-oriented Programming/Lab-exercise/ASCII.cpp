/*program to find  the ascii value*/
#include<stdio.h>
#include<conio.h>
int fun(char c);
int main(){
	
	int i;
	char c;
	printf("\t\t\t\tProgram to Calculate  ASCII VAlue\n\n");
	printf("Enter a charactere : ");
	scanf("%c",&c);
	
	i = c;
	printf("\n\nASCII value of %c = %d decimal",c,i);
	return 0;
}
