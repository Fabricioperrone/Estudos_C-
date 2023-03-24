 // soma de 2 notas e a media
#include <stdio.h>
#include <stdlib.h>
using namespace std;
main()
{
 int nota1, nota2,media;
 textbackground(LIGHTBLUE);
 system("cls");
 textcolor(BLACK);
 gotoxy(15,2);
 cout<<"Programa que calcula a soma e a media de duas notas";
 gotoxy(1,4);
 cout<<"Digite a primeria nota.: ";cin>>nota1;
 cout<<endl;
 cout<<"Digite a segunda nota.: ";cin>>nota2;
 cout<<endl;

 media = (nota1 + nota2) / 2;

 cout<<"A media das duas notas e.: "<<media;
	getch();
}

