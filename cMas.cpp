#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int n, num;
char seguir;
int main ()
{
	printf("\t MENU QUINTO TALLER \n");
	printf("\n A=Tablas de multiplicar \n");
	printf("\n B=Comparar tres numeros \n");
	printf("\n C=Volumen de un Rombo \n");
printf("\n D=Volumen de un Trapecio \n");
	printf("\n DESEA CONTINUAR (S/N)? :  ");
	scanf ("%s",&seguir);
	
	while (seguir!='N')
	{
		printf("\n SELECCIONE UNA OPCION:  ");
		scanf("%");
		num=getchar();
	
	
	switch (num)
	{
		case 'A':
			int i, numero;
			printf("Introduzca un numero entero: ");
			scanf("%d",&numero);
			printf("\n La tabla de multiplicar del %d es: \n",numero);
				for (i=1; i<=10; i++)
				{
					printf("\n %d X %d = %d",numero,i,numero*i);
				}
		break;
		
		


case 'B':
		int a,b,c;
		printf("digite el valor para a : ");
		scanf("%d",&a);
		printf("digite el valor para b : ");
		scanf("%d",&b);
		printf("digite el valor para c : ");
		scanf("%d",&c);
		
		if ((a>b) && (a>c))
		printf("El numero mayor es %d",a);
		else if ((b>a) && (b>c))
		printf("El numero mayor es %d",b);
		else
				printf("El numero mayor es %d",c);
		break;
		
case 'C':
		int a,b;
		float c = 2;
		printf("digite la diagonal mayor del rombo: ");
		scanf("%d",&a);
		printf("digite la diagonal menor del rombo: ");
		scanf("%d",&b);
		
	printf("El área del rombo es: %.2f\n", (a*b)/c);
		break;
			
		
	
	
	}
		printf("\n DESEA CONTINUAR (S/N)? : ");
		scanf ("%s",&seguir);
	}
	
getch();
return 0;	
}