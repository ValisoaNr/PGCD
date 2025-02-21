#include<stdio.h>

int main ()
{
	int a , b , r ;
	
	printf("\tCALCULE DU pgcd DE a ET b DIFFERENT DE 0\nEntrez la valeur de a :");//Presentation du programme
	scanf("%d", &a);
	printf("Entrez la valeur de b :");
	scanf("%d", &b);
	
	if( (a%b)==0 )//pour a divisible par b
	{
      		printf("pgcd (a,b) = %d\n", b );
	}
		else
		{
			do
			{
		  r = a % b ;
				a = b ;
				b = r ;
				r = ( a % b );	
			}while( r != 0 ) ;
			printf("pgcd (a,b) = %d\n" , b); //affichage de b , le dernier reste non nulle 
		}
	return (0);
}
