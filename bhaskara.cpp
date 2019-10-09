#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

	//Declarando variáveis

	int a, b, c;									
	float delta, x1, x2;
	
	//Coletando os valores

	printf("Digite o numero que corresponde ao 'a':");
	scanf("%d", &a);

	printf("Digite o numero que corresponde ao 'b':");
	scanf("%d", &b);
	
	printf("Digite o numero que corresponde ao 'c':");
	scanf("%d", &c);
	
	//Inicio de cálculo bhaskara
	
	delta = (pow(b,2) -4*a*c);

	float raiz = sqrt(delta);

	x1 = (-b + raiz / 2*a);
	x2 = (-b - raiz / 2*a);
	
	//Saída de resultados

	if(delta < 0)
	{
		printf("O delta e negativo, logo, nao existe resultado\n\n");
		
	}	
	else 
	{
		printf("O Delta e igual a: %.2f\n\n", delta);
		printf("O argumento a(%d), b(%d), c(%d), resultaram em x1 = '%.2f' e x2 = '%.2f'\n\n", a, b, c, x1, x2);
	}
	
	system("pause");

return 0;

};
