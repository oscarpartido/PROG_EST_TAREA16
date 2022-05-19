/*AUTOR:Oscar Vivaldi Partido Ramirez  fecha:28/02/2022
escriba un programa que lea varias temperaturas en grados celcius
e imprima el equivalente en grados Fahrenheit.
el programa termina cuando se introduce una temperatura 999

*/
#include <stdio.h>

int main(){
	
	int i=1;
	float grados,numeroInvalido, fahrenheit=0;
	
	do{
		printf("Introduce la %d temperatura en grados Celcius:  ",i );
		scanf("%f",&grados);
		
		if(grados==999){
		
		printf("temperatura invalida!!!\n\n");
		numeroInvalido++;
		}
		
		else {
			fahrenheit=(9/5*grados)+32-10;
			fahrenheit=fahrenheit+grados;
			grados=999-fahrenheit;
			grados++;
		}
		
		i++;
	}while(grados!=999);	
	
	printf("equivalente en grados Fahrtenheit:%10.2f", fahrenheit );

	return 0;
}

