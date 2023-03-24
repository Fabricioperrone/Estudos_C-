#include <stdio.h>
#include <stdlib.h>

int main() {
int nota1, nota2, media;
	printf("Digite a primreira nota: ");
	scanf_s("%d", &nota1);
	printf("Digite a segunda nota: ");
	scanf_s("%d", &nota2);

	media = (nota1 + nota2) / 2;
	if (media >= 5) {

		printf("Aprovado, meus parabens! \n");
	}
	

	else {

	printf("Reprovado voce precisa estudar mais! \n");
	
	}







system("pause");
return 0;

}
