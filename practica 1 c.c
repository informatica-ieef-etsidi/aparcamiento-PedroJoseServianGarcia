#include <time.h>
#include<stdio.h>
#include<stdlib.h>

int main() {

	system("color A2");

	int contador=1, plaza1=0, plaza2=0, opcion2; 

	char opcion, matricula1[7] , matricula2[7];

	while (contador = 1) {

		//DOS PLAZAS LIBRES

		printf("Selecione una de estas opciones:\nR - Reservar plaza.\nA - Abandonar plaza.\nE - Estado del aparcamiento.\nEscriba su opcion: ");
		scanf("%c", &opcion);

		system("cls");
		
		if(opcion=='r' || opcion=='a' || opcion=='e'){
			opcion=opcion-32;
		}
		
		switch (opcion) { 
		
		
		case 'E': 

			if (plaza1 == 0 && plaza2 == 0) {

				printf("Plaza 1- LIBRE\nPlaza 2- LIBRE \n");
				system("cls");
			}
			else if (plaza1 == 0 && plaza2 == 1) {

				printf("Plaza 1- LIBRE \nPlaza 2- OCUPADA (Matricula %s)\n", matricula2);
				system("cls");
			}

			else if (plaza1 == 1 && plaza2 == 0) {

				printf("Plaza 1- OCUPADA (Matricula %s)\nPlaza 2- LIBRE\n", matricula1);
				system("cls");
			}
			else {
				printf("Plaza 1- OCUPADA (Matricula %s)\n", matricula1);

				printf("Plaza 2- OCUPADA (Matricula %s)\n", matricula2);
				system("cls");
			}
			break;

		case 'R':

			if (plaza1 == 0 && plaza2 == 1) {

				printf("La plaza 1 esta libre, escriba su matricula\n");
				plaza1 = 1;
				printf("Introduzca su matricula: ");
				scanf("%s", matricula1, 8);
				system("cls");
			}
			else if (plaza1 == 0 && plaza2 == 0) {

				printf("Las dos plazas estan libres, se le ha asignado la 1\n");
				plaza1 = 1;
				printf("Introduzca su matricula: ");
				scanf("%s", matricula1, 8);
				system("cls");
			}

			else if (plaza1 == 1 && plaza2 == 0) {

				printf("Se le ha asignado la plaza 2\n");
				plaza2 = 1;
				printf("Introduzca su matricula: ");
				scanf("%s", matricula2, 8);
				system("cls");
			}
			else {
				printf("Las dos plazas estan ocupadas\n");
				system("cls");

			}	
		break;

		case 'A': 

			if (plaza1==1 || plaza2==1){

				printf("¿En que plaza estaba, en la 1 o en la 2?: ");
				scanf("%d", &opcion2);
				switch (opcion2) {
					
				case 1:
					if (plaza1 == 1) {
						printf("La plaza 1 queda libre.\n");
						plaza1 = 0;
					}
					else {
						printf("Usted no estaba en esa plaza.\n");
					}
					system("cls");
					break;

				case 2:
					if (plaza2 == 1) {
						printf("La plaza 2 queda libre\n");
						plaza2 = 0;
					}
					else {

						printf("Usted no estaba en esa plaza.\n");
					}
					system("cls"); 
					break;

				default:
					printf("No hay esa plaza\n");
					system("cls");
					break;
				}
			} 
			else {
				printf("No hay plazas ocupadas.\n");
				system("cls");
			}
		break;

		
		default: 

			printf("No puso ninguna opcion valida\n");
			system("cls");
		}	
	}
}
