#include <stdio.h>
#include <math.h>
#include <conio.h>

int			IntMaximosIntentos,intentos,n=0;
float		floatRaizInicial,Xnp1=0,Xn=0,FdeXn=0,DerivadaFdeXn=0,error=0,tolerancia=0.001 ;

 
main()

   {

       int a, b;

       printf("Ingrese el valor estimado de la raiz inicial X0:\n");

       scanf("%f", &floatRaizInicial);

       printf("Ingrese el valor del numero maximo de intentos:\n");

       scanf("%d", &IntMaximosIntentos);

		Xn=floatRaizInicial;
		 
     
		do{
		//Aquí puede deposit
        FdeXn= (Xn-cos (Xn) );
//Aquí puede depositar la derivada de su función --- f'(x) --- si la va a cambiar.
		DerivadaFdeXn=(1+sin(Xn));
		
		//Este es el algoritmo principal
		Xnp1=Xn-(FdeXn/DerivadaFdeXn);
		//Este es el algoritmo principal
		 
		error=Xn-Xnp1;		
		
		if(error<0)
		{error=Xnp1-Xn;
		}
		intentos++;  //intentos = intentos+1;
		if(intentos==IntMaximosIntentos)
		error=tolerancia;
		Xn=Xnp1;
		
		}while(error>tolerancia);
		
		printf("\n La raiz mas aproximada es %f, con %d intentos", Xnp1,intentos);
	    getch();
 

   }
     
