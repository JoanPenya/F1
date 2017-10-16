#include <stdio.h>
#include <conio.h>

int main ()
{
	int jugador;
	
	printf("Anyo 2030.");
	getch();
	printf("\nLa tercera mundial acabo en un caos.");
	getch();
	printf("\nUn tercio de la poblacion acabaron extinguidos.");
	getch();
	printf("\nMientras la otras personas, acabaron sobrevividos \ncon enfermedades o mutaciones en el cuerpo.");
	getch();
	printf("\nMientras los restantes...");
	getch();
	printf("Seguian vivos.");
	getch();
	printf("\nCuentas unas historia sobre de una chica que saco la \ncarrera de medicina.");
	getch();
	printf("\nY es una de las que tiene una cura especial para evitar esta pandemia zombie ");
	
	printf("--------Horror Zombie-------");
	printf("\n1) Jugar.");
	printf("\n2) Salir.");
	scanf("%d", &jugador);
	
	while(jugador)
	{
		switch(jugador)
		case 1:
			printf("Que pasa?");
			getch();
			printf("\nPor que ha pasado este holocausto?");
			getch();
			printf("\nPobre gente");
			getch();
			printf("\nTu eres la unica que sabes parar este holocausto.");
			getch();
			printf("\nY tu tiene una receta para poder crear unos anticuerpos y curar toda la humanidad.");
			break;	
		case 2:
			char salir;
			do
			{
				printf("Estas seguro de salir de este juego? s/n: ");
				scanf("%c", &salir);
			}
			while((salir != 's') || (salir != 'S'));
			
				printf("\nGracias por jugar ;)");
				getch();
				return 0;
			}
	
	getch();
	return 0;
}
