#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	system("color 0A");

	int contador = 1, plaza1 = 0, plaza2 = 0, opcion2;

	char opcion, matricula1[7], matricula2[7], matriculaX[7];

	while (contador == 1) {

		//DOS PLAZAS LIBRES

		printf("Selecione una de estas opciones:\nR - Reservar plaza.\nA - Abandonar plaza.\nE - Estado del aparcamiento.\nB - Buscar vehiculo por matricula.\nS - Salir del programa.\nEscriba su opcion: ");
		scanf_s("%c", &opcion);

		system("cls");

		if (opcion == 'r' || opcion == 'a' || opcion == 'e' || opcion == 's' || opcion == 'b') {
			opcion = opcion - 32;
		}

		switch (opcion) {


		case 'E':

			if (plaza1 == 0 && plaza2 == 0) {

				printf("Plaza 1- LIBRE\nPlaza 2- LIBRE \n");
				system("pause");
				system("cls");
			}
			else if (plaza1 == 0 && plaza2 == 1) {

				printf("Plaza 1- LIBRE \nPlaza 2- OCUPADA (Matricula %s)\n", matricula2);
				system("pause");
				system("cls");
			}

			else if (plaza1 == 1 && plaza2 == 0) {

				printf("Plaza 1- OCUPADA (Matricula %s)\nPlaza 2- LIBRE\n", matricula1);
				system("pause");
				system("cls");
			}
			else {
				printf("Plaza 1- OCUPADA (Matricula %s)\n", matricula1);

				printf("Plaza 2- OCUPADA (Matricula %s)\n", matricula2);
				system("pause");
				system("cls");
			}
			break;



		case 'R':

			if (plaza1 == 0 && plaza2 == 1) {

				printf("La plaza 1 esta libre, escriba su matricula\n");
				plaza1 = 1;
				printf("Introduzca su matricula: ");
				scanf_s("%s", matricula1, 8);
				system("cls");
			}
			else if (plaza1 == 0 && plaza2 == 0) {

				printf("Las dos plazas estan libres, se le ha asignado la 1\n");
				plaza1 = 1;
				printf("Introduzca su matricula: ");
				scanf_s("%s", matricula1, 8);
				system("cls");
			}

			else if (plaza1 == 1 && plaza2 == 0) {

				printf("Se le ha asignado la plaza 2\n");
				plaza2 = 1;
				printf("Introduzca su matricula: ");
				scanf_s("%s", matricula2, 8);
				system("cls");
			}
			else {
				printf("Las dos plazas estan ocupadas\n");
				system("cls");

			}
			break;

		case 'A':

			if (plaza1 == 1 || plaza2 == 1) {

				printf("¿En que plaza estaba, en la 1 o en la 2?: ");
				scanf_s("%d", &opcion2);
				switch (opcion2) {

				case 1:
					if (plaza1 == 1) {
						printf("La plaza 1 queda libre.\n");
						plaza1 = 0;
						system("pause");
					}
					else {
						printf("Usted no estaba en esa plaza.\n");
						system("pause");
					}
					
					
					break;

				case 2:
					if (plaza2 == 1) {
						printf("La plaza 2 queda libre\n");
						plaza2 = 0;
						system("pause");
					}
					else {

						printf("Usted no estaba en esa plaza.\n");
						system("pause");
					}
					system("cls");
					break;

				default:
					printf("No hay esa plaza\n");
					system("pause");
					system("cls");
					break;
				}
			}
			else {
				printf("No hay plazas ocupadas.\n");
				system("pause");
				system("cls");
			}
			break;

		case 'B':

			printf("Introduzca la matricula que desea buscar: ");
			scanf_s("%s", matriculaX, 8);

			if (plaza1 == 1 || plaza2 == 1) {
				if (strcmp(matriculaX, matricula1) == 0) {
					printf("El vehiculo con la matricula %s esta en la plaza 1. \n", matricula1);
					system("pause");
				}

				else if (strcmp(matriculaX, matricula2) == 0) {
					printf("El vehiculo con la matricula %s esta en la plaza 2. \n", matricula2);
					system("pause");
				}

				else {
					printf("No hay vehiculo con tal numero de matricula en el parking. \n");
					system("pause");
				}
			}
			else printf("No hay ningun vehiculo aparcado.\n");

			break;

		case 'S':
			printf("SALIENDO DEL PROGRAMA.\n");
			contador = 0;
			break;



		default:

			printf("No puso ninguna opcion valida\n");
			system("cls");
		}
	}
}