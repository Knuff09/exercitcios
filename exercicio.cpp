#include <stdio>

int main (){
	int num1, num2;
	printf("Digite o primeiro numero inteiro: ", num1);
	scanf("%d", &num1);
	printf("Digite o segundo numero inteiro: ", num2);
	scanf("%d", &num2);
	
	if (num1 > num2){
		printf("O maior numero e : %d ", num1);
		
	}
	else if (num2 > num1){
		printf("O maior numero e: %d", num2);
		
	}
	else{
		printf("Os nunmeros são iguais. ");
	}
	return 0;
	}
