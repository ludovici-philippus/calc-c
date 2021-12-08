#include <stdio.h>

int main (void){
	float sum(float a, float b);
	float sub(float a, float b);
	float div(float a, float b);
	float mul(float a, float b);

	float num1;
	float num2;
	int operation;
	float result;

	printf("=== Hey! Welcome to the simple calc, an simple calculator '-' ===\n");
	printf("Please, enter the first number : \n");
	scanf("%f", &num1);

	printf("Alright, now enter the second number: \n");
	scanf("%f", &num2);

	printf("And now, select what kind of operation do you want? \n");
	printf("1 - Sum \n");
	printf("2 - Subtract \n");
	printf("3 - Division \n");
	printf("4 - Multiplication \n");

	scanf("%i", &operation);
	
	if(operation == 1)
		result = sum(num1, num2);
	else if(operation == 2)
		result = sub(num1, num2);
	else if(operation == 3)
		result = div(num1, num2);
	else if(operation == 4)
		result = mul(num1, num2);
	else{
		printf("ERROR! \n");
		return 0;
	}

	printf("The result is: %.2f \n", result);
	
	return 0;
}

float sum(float a, float b){
	return a + b;
}

float sub(float a, float b){
	return a - b;
}

float div(float a, float b){
	return a / b;
}

float mul(float a, float b){
	return a * b;
}

