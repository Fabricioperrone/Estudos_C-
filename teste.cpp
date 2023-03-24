#include <stdio.h>
int main()
{
float nota1, nota2, media;
printf("Digite a 1ª nota: \n");
scanf_s("%f", &nota1);
printf("Digite a 1ª nota: \n");
scanf_s("%f", &nota2);
media = (nota1 + nota2) /2;
if (media >= 5)
{
printf("APROVADO!\n");
}
else
{
printf("REPROVADO! \n”);
}
system ("pause");
return(0);
}
