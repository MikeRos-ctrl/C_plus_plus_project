#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include "conio.h"
#include <string.h>
#include <string>
#include <fstream>
using namespace std;

void menugeneral();
string codigo;

void servicio1();
string codigo1;
int lavanderia1;
int lavanderia2;
int lavanderia3;
int lavanderia4;

void servicio2();
string codigo2;
int tintoreria1;
int tintoreria2;
int tintoreria3;
int tintoreria4;

void servicio3();
string codigo3;
int zapato1;
int zapato2;

void FinalizarCompra();

void agregarnombreservicios();
char nameserv[50][50];
int i = 0, f;

void agregarcod();
char cod[50][50];
int contadordelcodigo = 0;
int j = 0, k;
char*dir_num;
char*dir_num1;
char*dir_num2;
char*dir_num3;
int comodin;
int comodin1 = 0;

char copiar[100];

void agregarsubserv();
char subservicio[50][50];
int d = 0, m;

void subcod();
char codsubserv[50][50];
int x = 0, y;
char*dir_cod;
char*dir_cod1;
int joker;
int joker1 = 0;

void precio();
char precioxd[50][50];
int costodec = 0;
int cadena = 0;
char*dir_prec1;
char*dir_prec2;
char*dir_prec3;
int contadorcadena = 0;
int a = 0, b;

void decimales();
char decimalesdos[2];
int longitud = 0;
char *decimal1;
char *decimal2;
int supercontadorglobal;
int ciclar1 = 0;
int ciclar2 = 0;
int ciclar3 = 0;
int primeravuelta = 0;

void editar();
int supernum = 0;
char listo;
char letrita;
int letritaa;
int letritac;
int letritae;


void editar3();
int costdecxd;
int estring = 0;
char*dir_prec1xd;
char*dir_prec2xd;
char*dir_prec3xd;
int contadorcadenaxd = 0;

void editar4();
char decimalesdosxd[10];
char *decimal1xd;
char *decimal2xd;
int contadordecadena1;
int contadordecadena2;
int contadordecadena3;

void verservicios();

void eliminar();
char eliminacionsuprema[50];
int eliminacion = 0;
char opcioneliminar;

void salir();
int costodec1 = 0;
char answer;
int longitudxd = 0;
char*dir_codnum;
char*dir_codnum1;
char*dir_codnum2;
char*dir_codnum3;
char precio4[5];
int subormal2;
char menu[50][50];
int TotalT = 0;
char edit[50];
char respuesta;
int contador = 0;
char opcion;
int totaldecomprasdeldia = 0;
int l = 0;
int contadorefe = 0;
void generartxt();


int numerosdelatintoreriaseccion1[50][50];
int numerosdelatintoreriaseccion1subtotal[50][50];
int numerosdelatintoreriaseccion1iva[50][50];
int numerosdelatintoreriaseccion1total[50][50];
int numerosdelatintoreriaseccion1totalseccion[50][50];
int numerosdelatintoreriaseccion1totalprenda[50][50];
char numerosdelatintoreriaseccion1nombredelservicio[50][50];
int seccionuno = 0;
int seccionunox = 0;
int vertodo = 0;

void main()
{
	cout << "\t\t\t\t\t Bienvenido a la mejor tintoreria del mundo estimado usuario";
	system("pause>null");
	system("cls");
	cout << "\t\t\t\t\t A continuacion se le mostrara el Menu General con todos los servicios";
	system("pause>null");
	system("cls");
	menugeneral();

}

void menugeneral() {


	do
	{
		opcion = 0;
		system("cls");
		cout << "\t\t\t\ta) Servicios predeterminados por el programa\n";
		cout << "\t\t\t\tb) Agregar servicios\n";
		cout << "\t\t\t\tc) Ver servicios agregados\n";
		cout << "\t\t\t\td) Editar\n";
		cout << "\t\t\t\te) Eliminar\n";
		cout << "\t\t\t\tf) Salir\n";
		cout << "\t\t\t\tg) Generar archivo de texto\n";
		cout << "\t\t\t\t Ingrese la letra para ingresar en el servicio:\n";

		cin >> opcion;



	} while (opcion != 'a' && opcion != 'b' && opcion != 'c' && opcion != 'd' && opcion != 'e' && opcion != 'f' && opcion != 'g');

	if (opcion == 'a') {

		do
		{
			system("cls");
			cout << "\t\t\t\t\t A continuacion todos nuestros servicios:\n\n";
			cout << " Tintoreria \t\t|1111| <---CODIGO \n ";
			cout << "Lavanderia \t\t|1112| <---CODIGO \n ";
			cout << "Reparacion de Zapatos  |1113| <---CODIGO \n ";

			cout << "\n\n\nPara ingresar a los servicios escriba el codigo que aparece del lado DERECHO:\t\t";
			getline(cin, codigo);

		} while (codigo != "1111"&& codigo != "1112"&&  codigo != "1113");

		if (codigo == "1111") {

			servicio1();

		}
		else if (codigo == "1112") {

			servicio2();

		}
		else if (codigo == "1113") {
			servicio3();
		}

	}

	else if (opcion == 'b') {
		agregarnombreservicios();
	}
	else if (opcion == 'c')
	{
		verservicios();
	}
	else if (opcion == 'd')
	{
		editar();
	}
	else if (opcion == 'e')
	{

		eliminar();
	}
	else if (opcion == 'f') {
		salir();
	}

	else if (opcion == 'g')

		generartxt();

}

void servicio1() {

	do
	{
		system("cls");
		cout << "\t\t\t\t\tEsta es la area de la Tintoreria\n";
		cout << "\nA continuacion se les mostrata los servicios que se encuentran en esta seccion:\n ";
		cout << "\n\nLimpieza de ropa en seco\t\t |01| <---CODIGO";
		cout << "\n\nLimpieza de alfombras\t\t\t |02| <---CODIGO ";
		cout << "\n\nRenta de Trajes de fiesta dama/caballero |03| <---CODIGO";
		cout << "\n\nDesmanchado de prendas\t\t\t |04| <---CODIGO";
		cout << "\n\n\nPara ingresar a los servicios escriba el codigo que aparece del lado DERECHO:\t\t";
		getline(cin, codigo1);
		system("cls");

	} while (codigo1 != "01" && codigo1 != "02" && codigo1 != "03" && codigo1 != "04");



	if (codigo1 == "01") {

		lavanderia1 = 0;

		while (lavanderia1 == 0) {

			//servicio tintoreria, seccion 01//

			system("cls");
			cout << "El costo por la limpieza en seco de cualquier prenda es de 150$";
			cout << "\n\nCuantas prendas desea ingresar?\n";
			char limpseco[100];
			cin >> limpseco;
			int numero = 0;
			numero = atoi(limpseco);


			if (numero == 0) {

				cout << "\ndato invalido...";
				system("pause>null");
				lavanderia1 = 0;

			}

			else if (numero >= 1000) {

				cout << "\nNo se tiene espacio para tantas prendas";
				system("pause>null");
				lavanderia1 = 0;
			}

			else if (numero > 0) {

				numerosdelatintoreriaseccion1[seccionuno][50] = numero;
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][0] = 'T';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][1] = 'i';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][2] = 'n';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][3] = 't';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][4] = 'o';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][5] = 'r';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][6] = 'e';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][7] = 'r';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][8] = 'i';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][9] = 'a';

				numerosdelatintoreriaseccion1totalseccion[seccionuno][50] = 01;
				numerosdelatintoreriaseccion1totalprenda[seccionuno][50] = 150;

				int total = 0;
				int iva = 0.16;
				int aux = 0;
				lavanderia1 = 1;

				numero = numero * 150;
				numerosdelatintoreriaseccion1subtotal[seccionuno][50] = numero;

				cout << "\nEl costo sub total fue de:\t" << numero << "$";
				aux = numero * 0.16;
				cout << endl << "El IVA es de:\t                 " << aux << "$";
				numerosdelatintoreriaseccion1iva[seccionuno][50] = aux;

				total = numero + aux;
				cout << "\nEl total es de:\t                " << total << "$";
				numerosdelatintoreriaseccion1total[seccionuno][50] = total;
				TotalT = TotalT + total;
				cout << "\n\nSi desea hacer otra compra/consulta/etc teclee la letra a)";
				cout << "\nSino se le mostrara el costo total de todas sus compras   b)\n";
				cout << "a)-menu general";
				cout << "\nb)-ver ticket\t\t\t";
				totaldecomprasdeldia = totaldecomprasdeldia + 1;

				char respuesta = 0;
				cin >> respuesta;

				while (respuesta != 'a'  && respuesta != 'b')
				{
					cout << "\ndato invalido...";
					cout << "\nINTENTE NUEVA MENTE...";
					cin >> respuesta;
				}


				if (respuesta == 'a') {

					seccionuno = seccionuno + 1;
					cout << "Se le enviara al menu general c:";
					system("pause>>null");
					menugeneral();
				}
				else if (respuesta == 'b') {

					seccionuno = seccionuno + 1;
					cout << "\nA continuacion se le mostrara el costo total de todo lo que compro.....";

					system("pause>>null");
					FinalizarCompra();
				}

			}



		}

	}

	else if (codigo1 == "02") {

		lavanderia2 = 0;

		while (lavanderia2 == 0) {

			system("cls");
			cout << "El costo por la limpieza de cada alfombra es de 100$";
			cout << "\n\nCuantas alfombras desea ingresar?\n";
			char alfombras[100];
			cin >> alfombras;
			int numero = 0;
			numero = atoi(alfombras);

			if (numero == 0) {

				cout << "\ndato invalido...";
				system("pause>null");
				lavanderia2 = 0;


			}

			else if (numero >= 1000) {

				cout << "\nNo se tiene espacio para tantas prendas";
				system("pause>null");
				lavanderia2 = 0;
			}

			else if (numero > 0) {


				numerosdelatintoreriaseccion1[seccionuno][50] = numero;
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][0] = 'T';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][1] = 'i';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][2] = 'n';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][3] = 't';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][4] = 'o';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][5] = 'r';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][6] = 'e';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][7] = 'r';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][8] = 'i';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][9] = 'a';

				numerosdelatintoreriaseccion1totalseccion[seccionuno][50] = 02;
				numerosdelatintoreriaseccion1totalprenda[seccionuno][50] = 100;

	   	 		lavanderia2 = 1;
				int total = 0;
				int iva = 0.16;
				int aux = 0;

				numero = numero * 100;
				numerosdelatintoreriaseccion1subtotal[seccionuno][50] = numero;

				cout << "\nEl costo sub total fue de:\t" << numero << "$";
				aux = numero * 0.16;
				cout << endl << "El IVA es de:\t                 " << aux << "$";
				numerosdelatintoreriaseccion1iva[seccionuno][50] = aux;

				total = numero + aux;
				cout << "\nEl total es de:\t                " << total << "$";
				numerosdelatintoreriaseccion1total[seccionuno][50] = total;

				TotalT = TotalT + total;
				cout << "\n\nSi desea hacer otra compra/consulta/etc teclee la letra a)";
				cout << "\nSino se le mostrara el costo total de todas sus compras   b)\n";
				cout << "a)-menu general";
				cout << "\nb)-ver ticket\t\t\t";
				totaldecomprasdeldia = totaldecomprasdeldia + 1;
				char respuesta = 0;
				cin >> respuesta;

				while (respuesta != 'a'  && respuesta != 'b')
				{
					cout << "\ndato invalido...";
					cout << "\nINTENTE NUEVA MENTE...";
					cin >> respuesta;

				}

				if (respuesta == 'a') {

					seccionuno = seccionuno + 1;
					cout << "Se le enviara al menu general c:";
					system("pause>>null");
					menugeneral();
				}
				else if (respuesta == 'b') {
					
					seccionuno = seccionuno + 1;
					cout << "A continuaion se le mostrara el costo total de todo lo que compro.....";
					system("pause>>null");
					FinalizarCompra();
				}
			}

		}


	}

	else if (codigo1 == "03") {

		lavanderia3 = 0;

		while (lavanderia3 == 0) {


			system("cls");
			cout << "El costo por la renta de trajes/vestidos de LA MEJOR CALIDAD es de 450$ por todo 1 dia";
			cout << "\nActualmente si tenemos trajes y vestidos disponibles c:";
			cout << "\n\nCuantos va a ocupar?\n";
			char trajesyvestidos[100];
			cin >> trajesyvestidos;
			int numero = 0;
			numero = atoi(trajesyvestidos);



			if (numero == 0) {

				cout << "\ndato invalido...";

				lavanderia3 = 0;
				system("pause>null");

			}



			else if (numero >= 1000) {

				cout << "\nNo se tiene espacio para tantas prendas";
				system("pause>null");
				lavanderia3 = 0;
			}


			else if (numero > 0) {


				numerosdelatintoreriaseccion1[seccionuno][50] = numero;
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][0] = 'T';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][1] = 'i';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][2] = 'n';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][3] = 't';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][4] = 'o';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][5] = 'r';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][6] = 'e';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][7] = 'r';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][8] = 'i';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][9] = 'a';

				numerosdelatintoreriaseccion1totalseccion[seccionuno][50] = 03;
				numerosdelatintoreriaseccion1totalprenda[seccionuno][50] = 450;


				lavanderia3 = 1;
				int total = 0;
				int iva = 0.16;
				int aux = 0;

				numero = numero * 450;
				numerosdelatintoreriaseccion1subtotal[seccionuno][50] = numero;

				cout << "\nEl costo sub total fue de:\t" << numero << "$";
				aux = numero * 0.16;
				cout << endl << "El IVA es de:\t                 " << aux << "$";
				numerosdelatintoreriaseccion1iva[seccionuno][50] = aux;

				total = numero + aux;
				cout << "\nEl total es de:\t                " << total << "$";
				numerosdelatintoreriaseccion1total[seccionuno][50] = total;
				TotalT = TotalT + total;
				cout << "\n\nSi desea hacer otra compra/consulta/etc teclee la letra a)";
				cout << "\nSino se le mostrara el costo total de todas sus compras   b)\n";
				cout << "a)-menu general";
				cout << "\nb)-ver ticket\t\t\t";
				totaldecomprasdeldia = totaldecomprasdeldia + 1;
				char respuesta = 0;
				cin >> respuesta;

				while (respuesta != 'a'  && respuesta != 'b')
				{

					cout << "\ndato invalido...";
					cout << "\nINTENTE NUEVA MENTE...";
					cin >> respuesta;

				}

				if (respuesta == 'a') {

					seccionuno = seccionuno + 1;
					cout << "Se le enviara al menu general c:";
					system("pause>>null");
					menugeneral();
				}
				else if (respuesta == 'b')
				{
					seccionuno = seccionuno + 1;
					cout << "A continuaion se le mostrara el costo total de todo lo que compro.....";
					system("pause>>null");
					FinalizarCompra();
				}
			}


		}

	}

	else if (codigo1 == "04") {

		lavanderia4 = 0;

		while (lavanderia4 == 0) {


			system("cls");
			cout << "El costo por el desmanchado de prendas es de 70$ por pieza";
			cout << "\nNo importa el tamanio, los pantalones y camisas cuestan lo mismo";
			cout << "\n\nCuantas piezas va a desmanchar?\n";
			char desmanchar[100];
			cin >> desmanchar;
			int numero = 0;
			numero = atoi(desmanchar);


			if (numero == 0) {

				cout << "\ndato invalido...";
				system("pause>null");
				lavanderia4 = 0;

			}

			else if (numero >= 1000) {

				cout << "\nNo se tiene espacio para tantas prendas";
				system("pause>null");
				lavanderia4 = 0;
			}

			else if (numero > 0) {

				numerosdelatintoreriaseccion1[seccionuno][50] = numero;
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][0] = 'T';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][1] = 'i';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][2] = 'n';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][3] = 't';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][4] = 'o';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][5] = 'r';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][6] = 'e';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][7] = 'r';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][8] = 'i';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][9] = 'a';

				numerosdelatintoreriaseccion1totalseccion[seccionuno][50] = 04;
				numerosdelatintoreriaseccion1totalprenda[seccionuno][50] = 70;


				lavanderia4 = 1;
				int total = 0;
				int iva = 0.16;
				int aux = 0;

				numero = numero * 70;
				numerosdelatintoreriaseccion1subtotal[seccionuno][50] = numero;

				cout << "\nEl costo sub total fue de:\t" << numero << "$";
				aux = numero * 0.16;
				cout << endl << "El IVA es de:\t                 " << aux << "$";
				numerosdelatintoreriaseccion1iva[seccionuno][50] = aux;

				total = numero + aux;
				cout << "\nEl total es de:\t                " << total << "$";
				numerosdelatintoreriaseccion1total[seccionuno][50] = total;

				TotalT = TotalT + total;
				cout << "\n\nSi desea hacer otra compra/consulta/etc teclee la letra a)";
				cout << "\nSino se le mostrara el costo total de todas sus compras   b)\n";
				cout << "a)-menu general";
				cout << "\nb)-ver ticket\t\t\t";
				totaldecomprasdeldia = totaldecomprasdeldia + 1;
				char respuesta = 0;
				cin >> respuesta;

				while (respuesta != 'a'  && respuesta != 'b')
				{
					cout << "\ndato invalido...";
					cout << "\nINTENTE NUEVA MENTE...";
					cin >> respuesta;

				}

				if (respuesta == 'a') {

					seccionuno = seccionuno + 1;
					cout << "Se le enviara al menu general c:";
					system("pause>>null");
					menugeneral();
				}
				else if (respuesta == 'b')
				{
					seccionuno = seccionuno + 1;
					cout << "A continuaion se le mostrara el costo total de todo lo que compro.....";
					system("pause>>null");
					FinalizarCompra();
				}

			}


		}

	}

}

void servicio2() {

	do
	{
		system("cls");
		cout << "\t\t\t\t\tEsta es el area de la Lavanderia\n";
		cout << "\nA continuacion se les mostrata los servicios que se encuentran en esta seccion:\n ";
		cout << "\n\nLavado de ropa \t\t\t\t\t |01| <---CODIGO";
		cout << "\n\nSecado de ropa\t\t\t\t\t |02| <---CODIGO ";
		cout << "\n\nPlanchado de ropa\t\t\t\t |03| <---CODIGO ";
		cout << "\n\nLavado y secado de cobertores\t\t\t |04| <---CODIGO ";
		cout << "\n\n\nPara ingresar a los servicios escriba el codigo que aparece del lado DERECHO:\t\t";

		getline(cin, codigo2);

	} while (codigo2 != "01" && codigo2 != "02" && codigo2 != "03" && codigo2 != "04");


	if (codigo2 == "01") {


		tintoreria1 = 0;

		while (tintoreria1 == 0) {


			system("cls");
			cout << "El costo por kilo para lavar es de 100$";
			cout << "\n\nCuantos kilos va a ingresar?\n";
			char lavar[100];
			cin >> lavar;
			int numero2 = 0;
			numero2 = atoi(lavar);

			if (numero2 == 0) {

				cout << "\ndato invalido...";
				system("pause>null");
				tintoreria1 = 0;

			}

			else if (numero2 >= 1000) {

				cout << "\nNo se tiene espacio para tantas prendas";
				system("pause>null");
				tintoreria1 = 0;
			}

			else if (numero2 > 0) {

				numerosdelatintoreriaseccion1[seccionuno][50] = numero2;
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][0] = 'L';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][1] = 'a';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][2] = 'v';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][3] = 'a';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][4] = 'n';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][5] = 'd';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][6] = 'e';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][7] = 'r';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][8] = 'i';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][9] = 'a';

				numerosdelatintoreriaseccion1totalseccion[seccionuno][50] = 01;
				numerosdelatintoreriaseccion1totalprenda[seccionuno][50] = 100;



				tintoreria1 = 1;
				int total2 = 0;
				int iva = 0.16;
				int aux = 0;

				numero2 = numero2 * 100;
				numerosdelatintoreriaseccion1subtotal[seccionuno][50] = numero2;


				cout << "\nEl costo sub total fue de:\t" << numero2 << "$";
				aux = numero2 * 0.16;
				cout << endl << "El IVA es de:\t                 " << aux << "$";
				numerosdelatintoreriaseccion1iva[seccionuno][50] = aux;

				total2 = numero2 + aux;
				cout << "\nEl total es de:\t                " << total2 << "$";
				numerosdelatintoreriaseccion1total[seccionuno][50] = total2;

				TotalT = TotalT + total2;
				cout << "\n\nSi desea hacer otra compra/consulta/etc teclee la letra a)";
				cout << "\nSino se le mostrara el costo total de todas sus compras   b)\n";
				cout << "a)-menu general";
				cout << "\nb)-ver ticket\t\t\t";
				totaldecomprasdeldia = totaldecomprasdeldia + 1;
				char respuesta = 0;
				cin >> respuesta;

				while (respuesta != 'a'  && respuesta != 'b')
				{
					cout << "\ndato invalido...";
					cout << "\nINTENTE NUEVA MENTE...";
					cin >> respuesta;

				}

				if (respuesta == 'a') {

					seccionuno = seccionuno + 1;
					cout << "Se le enviara al menu general c:";
					system("pause>>null");
					menugeneral();
				}
				else if (respuesta == 'b') {

					seccionuno = seccionuno + 1;
					cout << "A continuaion se le mostrara el costo total de todo lo que compro.....";
					system("pause>>null");
					FinalizarCompra();
				}

			}

		}

	}

	else if (codigo2 == "02") {

		tintoreria2 = 0;


		while (tintoreria2 == 0) {


			system("cls");
			cout << "El costo por kilo para secar es de 20$";
			cout << "\n\nCuantos kilos va a ingresar?\n";
			char secar[100];
			cin >> secar;
			int numero2 = 0;
			numero2 = atoi(secar);



			if (numero2 == 0) {

				cout << "\ndato invalido...";
				system("pause>null");
				tintoreria2 = 0;


			}

			else if (numero2 >= 1000) {

				cout << "\nNo se tiene espacio para tantas prendas";
				system("pause>null");
				tintoreria2 = 0;
			}


			else if (numero2 > 0) {


				numerosdelatintoreriaseccion1[seccionuno][50] = numero2;
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][0] = 'L';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][1] = 'a';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][2] = 'v';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][3] = 'a';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][4] = 'n';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][5] = 'd';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][6] = 'e';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][7] = 'r';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][8] = 'i';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][9] = 'a';

				numerosdelatintoreriaseccion1totalseccion[seccionuno][50] = 02;
				numerosdelatintoreriaseccion1totalprenda[seccionuno][50] = 20;


				tintoreria2 = 1;
				int total2 = 0;
				int iva = 0.16;
				int aux = 0;

				numero2 = numero2 * 20;
				numerosdelatintoreriaseccion1subtotal[seccionuno][50] = numero2;

				cout << "\nEl costo sub total fue de:\t" << numero2 << "$";
				aux = numero2 * 0.16;
				cout << endl << "El IVA es de:\t                 " << aux << "$";
				numerosdelatintoreriaseccion1iva[seccionuno][50] = aux;


				total2 = numero2 + aux;
				cout << "\nEl total es de:\t                " << total2 << "$";
				numerosdelatintoreriaseccion1total[seccionuno][50] = total2;

				TotalT = TotalT + total2;
				cout << "\n\nSi desea hacer otra compra/consulta/etc teclee la letra a)";
				cout << "\nSino se le mostrara el costo total de todas sus compras   b)\n";
				cout << "a)-menu general";
				cout << "\nb)-ver ticket\t\t\t";

				totaldecomprasdeldia = totaldecomprasdeldia + 1;
				char respuesta = 0;
				cin >> respuesta;

				while (respuesta != 'a'  && respuesta != 'b')
				{
					cout << "\ndato invalido...";
					cout << "\nINTENTE NUEVA MENTE...";
					cin >> respuesta;


				}

				if (respuesta == 'a') {

					seccionuno = seccionuno + 1;
					cout << "Se le enviara al menu general c:";
					system("pause>>null");
					menugeneral();

				}
				else if (respuesta == 'b')
				{
					seccionuno = seccionuno + 1;
					cout << "A continuaion se le mostrara el costo total de todo lo que compro.....";
					system("pause>>null");
					FinalizarCompra();
				}
			}

		}

	}

	else if (codigo2 == "03") {

		tintoreria3 = 0;

		while (tintoreria3 == 0) {

			system("cls");
			cout << "El costo por kilo para planchar la ropa es de 50$";
			cout << "\n\nCuantos kilos va a ingresar?\n";
			char plancha[100];
			cin >> plancha;
			int numero2 = 0;
			numero2 = atoi(plancha);


			if (numero2 == 0) {

				cout << "\ndato invalido...";
				system("pause>null");
				tintoreria3 = 0;

			}
			else if (numero2 >= 1000) {

				cout << "\nNo se tiene espacio para tantas prendas";
				system("pause>null");
				tintoreria3 = 0;
			}


			else  if (numero2 > 0) {


				numerosdelatintoreriaseccion1[seccionuno][50] = numero2;
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][0] = 'L';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][1] = 'a';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][2] = 'v';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][3] = 'a';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][4] = 'n';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][5] = 'd';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][6] = 'e';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][7] = 'r';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][8] = 'i';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][9] = 'a';

				numerosdelatintoreriaseccion1totalseccion[seccionuno][50] = 03;
				numerosdelatintoreriaseccion1totalprenda[seccionuno][50] = 50;


				tintoreria3 = 1;
				int total2 = 0;
				int iva = 0.16;
				int aux = 0;

				numero2 = numero2 * 50;
				numerosdelatintoreriaseccion1subtotal[seccionuno][50] = numero2;

				cout << "\nEl costo sub total fue de:\t" << numero2 << "$";
				aux = numero2 * 0.16;
				cout << endl << "El IVA es de:\t                 " << aux << "$";
				numerosdelatintoreriaseccion1iva[seccionuno][50] = aux;


				total2 = numero2 + aux;
				cout << "\nEl total es de:\t                " << total2 << "$";
				numerosdelatintoreriaseccion1total[seccionuno][50] = total2;


				TotalT = TotalT + total2;
				cout << "\n\nSi desea hacer otra compra/consulta/etc teclee la letra a)";
				cout << "\nSino se le mostrara el costo total de todas sus compras   b)\n";
				cout << "a)-menu general";
				cout << "\nb)-Ver ticket\t\t\t";
				totaldecomprasdeldia = totaldecomprasdeldia + 1;
				char respuesta = 0;
				cin >> respuesta;

				while (respuesta != 'a'  && respuesta != 'b')
				{
					cout << "\ndato invalido...";
					cout << "\nINTENTE NUEVA MENTE...";
					cin >> respuesta;
				}

				if (respuesta == 'a') {
					seccionuno = seccionuno + 1;
					cout << "Se le enviara al menu general c:";
					system("pause>>null");
					menugeneral();
				}
				else if (respuesta == 'b')
				{
					seccionuno = seccionuno + 1;
					cout << "A continuaion se le mostrara el costo total de todo lo que compro.....";
					system("pause>>null");
					FinalizarCompra();
				}

			}



		}



	}

	else if (codigo2 == "04") {

		tintoreria4 = 0;

		while (tintoreria4 == 0) {

			system("cls");
			cout << "El costo por lavar y secar los cobertores por cada uno es de 60$";
			cout << "\n\nCuantos covertores va a ingresar?\n";
			char cober[100];
			cin >> cober;
			int numero2 = 0;
			numero2 = atoi(cober);


			if (numero2 == 0) {

				cout << "\ndato invalido...";
				system("pause>null");
				tintoreria4 = 0;

			}

			else if (numero2 >= 1000) {

				cout << "\nNo se tiene espacio para tantas prendas";
				system("pause>null");
				tintoreria4 = 0;
			}

			else if (numero2 > 0) {

				numerosdelatintoreriaseccion1[seccionuno][50] = numero2;
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][0] = 'L';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][1] = 'a';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][2] = 'v';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][3] = 'a';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][4] = 'n';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][5] = 'd';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][6] = 'e';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][7] = 'r';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][8] = 'i';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][9] = 'a';

				numerosdelatintoreriaseccion1totalseccion[seccionuno][50] = 04;
				numerosdelatintoreriaseccion1totalprenda[seccionuno][50] = 60;



				tintoreria4 = 1;
				int total2 = 0;
				int iva = 0.16;
				int aux = 0;

				numero2 = numero2 * 60;
				numerosdelatintoreriaseccion1subtotal[seccionuno][50] = numero2;

				cout << "\nEl costo sub total fue de:\t" << numero2 << "$";
				aux = numero2 * 0.16;
				cout << endl << "El IVA es de:\t                 " << aux << "$";
				numerosdelatintoreriaseccion1iva[seccionuno][50] = aux;

				total2 = numero2 + aux;
				cout << "\nEl total es de:\t                " << total2 << "$";
				numerosdelatintoreriaseccion1total[seccionuno][50] = total2;

				TotalT = TotalT + total2;
				cout << "\n\nSi desea hacer otra compra/consulta/etc teclee la letra a)";
				cout << "\nSino se le mostrara el costo total de todas sus compras   b)\n";
				cout << "a)-menu general";
				cout << "\nb)-finalizar compra\t\t\t";
				totaldecomprasdeldia = totaldecomprasdeldia + 1;
				char respuesta = 0;
				cin >> respuesta;

				while (respuesta != 'a'  && respuesta != 'b')
				{
					cout << "\ndato invalido...";
					cout << "\nINTENTE NUEVA MENTE...";
					cin >> respuesta;


				}

				if (respuesta == 'a') {

					seccionuno = seccionuno + 1;
					cout << "Se le enviara al menu general c:";
					system("pause>>null");
					menugeneral();
				}
				else if (respuesta == 'b')
				{
					seccionuno = seccionuno + 1;
					cout << "A continuaion se le mostrara el costo total de todo lo que compro.....";
					system("pause>>null");
					FinalizarCompra();
				}

			}


		}
	}
}

void servicio3() {

	do
	{
		system("cls");
		cout << "\t\t\t\t\tEsta es la area de reparacion de zapatos \n";
		cout << "\nA continuacion se les mostrata los servicios que se encuentran en esta seccion:\n ";
		cout << "\n\nLavado de zapatos\t\t\t\t |01| <---CODIGO";
		cout << "\n\nRestauramiento de zapatos \t\t\t |02| <---CODIGO ";
		cout << "\n\n\nPara ingresar a los servicios escriba el codigo que aparece del lado DERECHO:\t\t";
		getline(cin, codigo3);
		system("cls");

	} while (codigo3 != "01" && codigo3 != "02");

	if (codigo3 == "01") {

		zapato1 = 0;

		while (zapato1 == 0) {


			system("cls");
			cout << "El costo un zapato solo sin par es de 10$";
			cout << "\n\nCuantos zapatos desea ingresar?\n";
			char zapatos[100];
			cin >> zapatos;
			int numero3 = 0;
			numero3 = atoi(zapatos);

			if (numero3 == 0) {

				cout << "\ndato invalido...";
				system("pause>null");
				zapato1 = 0;


			}

			else if (numero3 >= 1000) {

				cout << "\nNo se tiene espacio para tantas prendas";
				system("pause>null");
				zapato1 = 0;
			}

			else if (numero3 > 0) {


				numerosdelatintoreriaseccion1[seccionuno][50] = numero3;
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][0] = 'Z';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][1] = 'a';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][2] = 'p';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][3] = 'a';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][4] = 't';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][5] = 'o';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][6] = 's';
				
				numerosdelatintoreriaseccion1totalseccion[seccionuno][50] = 01;
				numerosdelatintoreriaseccion1totalprenda[seccionuno][50] = 10;



				zapato1 = 1;
				int total3 = 0;
				int iva = 0.16;
				int aux = 0;

				numero3 = numero3 * 10;
				numerosdelatintoreriaseccion1subtotal[seccionuno][50] = numero3;

				cout << "\nEl costo sub total fue de:\t" << numero3 << "$";
				aux = numero3 * 0.16;
				cout << endl << "El IVA es de:\t                 " << aux << "$";
				numerosdelatintoreriaseccion1iva[seccionuno][50] = aux;

				total3 = numero3 + aux;
				cout << "\nEl total es de:\t                " << total3 << "$";
				numerosdelatintoreriaseccion1total[seccionuno][50] = total3;

				TotalT = TotalT + total3;
				cout << "\n\nSi desea hacer otra compra/consulta/etc teclee la letra a)";
				cout << "\nSino se le mostrara el costo total de todas sus compras   b)\n";
				cout << "a)-menu general";
				cout << "\nb)-ver ticket\t\t\t";
				totaldecomprasdeldia = totaldecomprasdeldia + 1;
				char respuesta = 0;
				cin >> respuesta;

				while (respuesta != 'a'  && respuesta != 'b')
				{
					cout << "\ndato invalido...";
					cout << "\nINTENTE NUEVA MENTE...";
					cin >> respuesta;
				}

				if (respuesta == 'a') {
					seccionuno = seccionuno + 1;
					cout << "Se le enviara al menu general c:";
					system("pause>>null");
					menugeneral();
				}
				else if (respuesta == 'b')
				{
					seccionuno = seccionuno + 1;
					cout << "A continuaion se le mostrara el costo total de todo lo que compro.....";
					system("pause>>null");
					FinalizarCompra();
				}

			}



		}

	}

	else if (codigo3 == "02") {

		zapato2 = 0;

		while (zapato2 == 0) {

			system("cls");
			cout << "El costo por la restauracion de cada zapato solo es de 40$";
			cout << "\n\nCuantos zapatos desea ingresar?\n";
			char rest[100];
			cin >> rest;
			int numero3 = 0;
			numero3 = atoi(rest);


			if (numero3 == 0) {
				cout << "\ndato invalido...";
				system("pause>null");
				zapato2 = 0;


			}

			else if (numero3 >= 1000) {

				cout << "\nNo se tiene espacio para tantas prendas";
				system("pause>null");
				zapato2 = 0;
			}

			else if (numero3 > 0) {

				zapato2 = 2;
				int total3 = 0;
				int iva = 0.16;
				int aux = 0;

				numerosdelatintoreriaseccion1[seccionuno][50] = numero3;
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][0] = 'Z';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][1] = 'a';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][2] = 'p';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][3] = 'a';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][4] = 't';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][5] = 'o';
				numerosdelatintoreriaseccion1nombredelservicio[seccionuno][6] = 's';

				numerosdelatintoreriaseccion1totalseccion[seccionuno][50] = 02;
				numerosdelatintoreriaseccion1totalprenda[seccionuno][50] = 40;



				numero3 = numero3 * 40;

				numerosdelatintoreriaseccion1subtotal[seccionuno][50] = numero3;

				cout << "\nEl costo sub total fue de:\t" << numero3 << "$";
				aux = numero3 * 0.16;
				cout << endl << "El IVA es de:\t                 " << aux << "$";
				numerosdelatintoreriaseccion1iva[seccionuno][50] = aux;

				total3 = numero3 + aux;
				cout << "\nEl total es de:\t                " << total3 << "$";
				numerosdelatintoreriaseccion1total[seccionuno][50] = total3;

				TotalT = TotalT + total3;
				cout << "\n\nSi desea hacer otra compra/consulta/etc teclee la letra a)";
				cout << "\nSino se le mostrara el costo total de todas sus compras   b)\n";
				totaldecomprasdeldia = totaldecomprasdeldia + 1;
				cout << "a)-menu general";
				cout << "\nb)-ver ticket\t\t\t";
				char respuesta = 0;
				cin >> respuesta;

				while (respuesta != 'a'  && respuesta != 'b')
				{
					cout << "\ndato invalido...";
					cout << "\nINTENTE NUEVA MENTE...";
					cin >> respuesta;

				}

				if (respuesta == 'a') {

					seccionuno = seccionuno + 1;
					cout << "Se le enviara al menu general c:";
					system("pause>>null");
					menugeneral();
				}
				else if (respuesta == 'b')
				{
					seccionuno = seccionuno + 1;
					cout << "A continuaion se le mostrara el costo total de todo lo que compro.....";
					system("pause>>null");
					FinalizarCompra();
				}

			}


		}
	}

}

void agregarnombreservicios() {

	system("cls");
	cout << "INGRESE el nombre del servicio\n";
	cin.getline(nameserv[i], 50);
	gets_s(nameserv[i]);
	i = i + 1;
	f = i;
	system("cls");
	agregarcod();

}

void agregarcod() {

	comodin = 0;

	while (comodin == 0) {
		contadorefe = 0;
		system("cls");
		cout << "\nIngrese el codigo, este debe ser de 4 NUMEROS\n";
		cout << "Y estos codigos no se deben de repetir\n";

		cin >> cod[j];

		if (cod[j][3] < 2)
		{

			cout << "le faltaron digitos";
			system("pause>nul");
			comodin = 0;
		}

		else if (cod[j][4] > 5)
		{

			cout << "se paso de digitos";
			system("pause>nul");
			comodin = 0;
		}

		else {

			cout << "Ahora checaremos si el codigo tiene alguna letra\n ";
			system("pause>null");
			system("cls");
			comodin = 1;



			if (cod[j][0] == '0') {

				cod[j][0] = '0';
				cout << "\nNumero posigcion [1]\t" << cod[j][0];

			}

			else {
				dir_num = &cod[j][0];
				cout << "\nNumero posicion [1]\t" << *dir_num << endl;
				int numero = 0;
				numero = atoi(dir_num);

				if (numero == 0) {

					cout << "\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
					comodin1 = comodin1 + 1;

				}

			}

			if (cod[j][1] == '0') {

				cod[j][1] = '0';

				cout << "\nNumero posicion [2]\t" << cod[j][1];
			}

			else {
				dir_num1 = &cod[j][1];
				cout << "\n\n\nNumero posicion [2]\t" << *dir_num1 << endl;
				int numero1 = 0;
				numero1 = atoi(dir_num1);

				if (numero1 == 0)
				{
					cout << "\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
					comodin1 = comodin1 + 1;

				}

			}


			if (cod[j][2] == '0') {

				cod[j][2] = '0';
				cout << "\nNumero posicion [3]\t" << cod[j][2];

			}
			else {

				dir_num2 = &cod[j][2];
				cout << "\n\n\nNumero posicion [3]\t" << *dir_num2 << endl;
				int numero2 = 0;
				numero2 = atoi(dir_num2);

				if (numero2 == 0)
				{
					cout << "\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
					comodin1 = comodin1 + 1;

				}

			}

			if (cod[j][3] == '0') {

				cod[j][3] = '0';
				cout << "\nNumero posicion [4]\t" << cod[j][3];

			}
			else {
				dir_num3 = &cod[j][3];
				cout << "\n\n\nNumero posicion [4]\t" << *dir_num3 << endl;
				int numero3 = 0;
				numero3 = atoi(dir_num3);

				if (numero3 == 0) {

					cout << "\nESTE ES UNA LETRA Y NO ESTA PERMITIDO\n";
					comodin1 = comodin1 + 1;
				}

			}

			system("pause>null");

			if (comodin1 != 0)
			{
				comodin1 = 0;
				system("cls");
				cout << "\nUsted cometio uno o varios errores :c, asi que volvera a empezar";
				system("pause>null");
				system("cls");
				comodin = 0;
			}

			else {

				contadordelcodigo = contadordelcodigo + 1;

				if (contadordelcodigo == 1) {


					cout << "\nCodigo agregado con exito :)";

					j = j + 1;
					k = j;

					system("pause>null");
					agregarsubserv();

				}

				else {

					for (int z = 0; z <= 1; z++) {

						for (int y = 1; y <= k; y++) {

							if (strcmp(cod[z], cod[y]) == 0) {
								contadorefe = contadorefe + 1;

							}

						}

					}

					if (contadorefe % 2 == 0) {

						comodin = 0;
						cout << "\nNo se puden repetir los codigos :c" << endl;
						system("pause>null");

					}

					else if (contadorefe == 1) {


						cout << "\nCodigo agregado con exito :)";
						j = j + 1;
						k = j;
						system("pause>null");
						agregarsubserv();
					}
				}

			}


		}

	}

}

void agregarsubserv() {

	system("cls");
	cout << "Bien, ahora agregaremos el nombre del Sub-servico:\n";
	cin.getline(subservicio[d], 50);
	gets_s(subservicio[d]);
	d = d + 1;
	m = d;
	system("pause>null");
	subcod();

}

void subcod() {
	joker = 0;

	while (joker == 0) {
		system("cls");

		cout << "Bien, ahora agregaremos el codigo del sub-servicio\n";
		cout << "debe tener solo 2 digitos y contener puros numeros\n";
		cin >> codsubserv[x];

		if (codsubserv[x][1] <= 0) {

			cout << "le faltaron digitos";
			system("pause>nul");
			joker = 0;
		}

		else if (codsubserv[x][2] > 3) {

			cout << "se paso de digitos";
			system("pause>nul");
			joker = 0;
		}

		else {

			cout << "Ahora checaremos si el codigo tiene alguna letra\t ";
			system("pause>null");
			joker = 1;
			//aqui va el ciclo xd sin funcion recursiva


			if (codsubserv[x][0] == '0')
			{
				codsubserv[x][0] = '0';
				cout << "\nNumero posicion [1]\t 0";

			}

			else {

				dir_cod = &codsubserv[x][0];
				cout << "\nNumero posicion [1]\t" << *dir_cod << endl;
				int numero = 0;
				numero = atoi(dir_cod);

				if (numero == 0) {

					cout << "\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
					joker1 = joker1 + 1;


				}

			}
			if (codsubserv[x][1] == '0') {

				codsubserv[x][1] = '0';
				cout << "\n\nNumero posicion [2]\t 0";

			}

			else {

				dir_cod1 = &codsubserv[x][1];
				cout << "\n\nNumero posicion [2]\t" << *dir_cod1 << endl;
				int numero1 = 0;
				numero1 = atoi(dir_cod1);

				if (numero1 == 0) {

					cout << "\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
					joker1 = joker1 + 1;

				}

			}


			system("pause>null");

			if (joker1 != 0) {

				joker1 = 0;
				system("cls");
				cout << "\nUsted cometio uno o varios errores :c, asi que volvera a empezar";
				system("pause>null");
				system("cls");
				joker = 0;
			}


			else {

				cout << "\nSub codigo agregado con exito :)";
				x = x + 1;
				y = x;
				system("pause>null");
				system("cls");
				precio();

			}

		}

	}

}

void precio() {


	cadena = 0;

	costodec = 0;


	while (costodec == 0) {

		system("cls");
		cout << "Para finalizar se tiene que agregar el precio";
		cout << "\nTiene permitido usar solo 3 digitos, ya que con 4 seria muy caro un servicio";
		cout << "\nLos decimales los agregara despues";
		cout << "\nIngrese el precio:\n";
		cin >> precioxd[a];
		cadena = strlen(precioxd[a]);

		if (cadena > 3) {

			cout << "El precio es muy caro";
			system("pause>nul");
			costodec = 0;
		}

		else {

			cout << "Ahora checaremos si el precio tiene alguna letra\t ";
			system("pause>null");
			costodec = 1;

			if (cadena == 1) {

				if (precioxd[a][0] == '0') {

					cout << "\nError, ningun precio puede iniciar en '0' ";
					system("pause>null");
					costodec = 0;

				}
				else {

					dir_prec1 = &precioxd[a][0];
					cout << "\nNumero posicion [1]\t" << *dir_prec1 << endl;
					int numero = 0;
					numero = atoi(dir_prec1);

					if (numero == 0) {

						cout << "\n\n\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
						system("pause>null");
						costodec = 0;

					}

					else
					{
						contadorcadena = 1;
						a = a + 1;
						b = a;
						cout << "\nTodo bien :)";
						system("pause>null");
						decimales();
					}
				}
			}

			else if (cadena == 2) {

				if (precioxd[a][0] == '0') {

					cout << "\nError, ningun precio puede iniciar en '0' ";
					system("pause>null");
					costodec = 0;
				}

				else if (precioxd[a][0] != '0') {


					dir_prec1 = &precioxd[a][0];
					cout << "\nNumero posicion [1]\t" << *dir_prec1 << endl;
					int numero = 0;
					numero = atoi(dir_prec1);
					if (numero == 0) {

						cout << "\n\n\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
						system("pause>null");
						costodec = 0;
					}

					else {

						if (precioxd[a][1] == '0') {

							precioxd[a][1] = '0';
							cout << "\n\n\nNumero posicion [2]\t" << precioxd[a][1];
							contadorcadena = 2;
							a = a + 1;
							b = a;
							system("pause>null");
							decimales();

						}
						else if (precioxd[a][1] != '0') {

							dir_prec2 = &precioxd[a][1];
							cout << "\nNumero posicion [2]\t" << *dir_prec2 << endl;
							int numero1 = 0;
							numero1 = atoi(dir_prec2);
							if (numero1 == 0) {

								cout << "\n\n\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
								system("pause>null");
								costodec = 0;
							}

							else
							{
								system("pause>null");
								contadorcadena = 2;
								a = a + 1;
								b = a;
								decimales();

							}
						}
					}
				}
			}

			else if (cadena == 3) {


				if (precioxd[a][0] == '0') {

					cout << "\nError, ningun precio puede iniciar en '0' ";

					system("pause>null");
					costodec = 0;
				}

				else {


					dir_prec1 = &precioxd[a][0];
					cout << "\nNumero posicion [1]\t" << *dir_prec1 << endl;
					int numero = 0;
					numero = atoi(dir_prec1);
					if (numero == 0) {

						cout << "\n\n\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
						system("pause>null");
						costodec = 0;
					}

					else {

						if (precioxd[a][1] == '0') {

							precioxd[a][1] = '0';
							cout << "\n\n\nNumero posicion [2]\t" << precioxd[a][1];

							if (precioxd[a][2] == '0') {

								precioxd[a][2] = '0';
								cout << "\n\n\nNumero posicion [3]\t" << precioxd[a][2];
								system("pause>null");
								a = a + 1;
								b = a;
								contadorcadena = 3;
								decimales();


							}
							else if (precioxd[a][2] != '0') {

								dir_prec3 = &precioxd[a][2];
								cout << "\nNumero posicion [3]\t" << *dir_prec1 << endl;
								int numero2 = 0;
								numero2 = atoi(dir_prec3);

								if (numero2 == 0) {

									cout << "\n\n\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
									system("pause>null");
									costodec = 0;
								}
								else
								{
									system("pause>null");
									a = a + 1;
									b = a;
									contadorcadena = 3;
									decimales();

								}
							}
						}
						else if (precioxd[a][1] != '0') {

							dir_prec2 = &precioxd[a][1];
							cout << "\nNumero posicion [2]\t" << *dir_prec2 << endl;
							int numero1 = 0;
							numero1 = atoi(dir_prec2);
							if (numero1 == 0) {

								cout << "\n\n\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
								system("pause>null");
								costodec = 0;
							}

							else {

								if (precioxd[a][2] == '0') {

									precioxd[a][2] = '0';
									cout << "\n\n\nNumero posicion [3]\t" << precioxd[a][2];
									contadorcadena = 3;
									a = a + 1;
									b = a;
									system("pause>null");
									decimales();

								}
								else if (precioxd[a][2] != '0') {

									dir_prec3 = &precioxd[a][2];
									cout << "\nNumero posicion [3]\t" << *dir_prec3 << endl;
									int numero2 = 0;
									numero2 = atoi(dir_prec3);

									if (numero2 == 0) {

										cout << "\n\n\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
										system("pause>null");
										costodec = 0;
									}
									else
									{
										system("pause>null");
										contadorcadena = 3;
										a = a + 1;
										b = a;
										decimales();

									}
								}
							}
						}
					}
				}
			}


		}

	}

}

void decimales() {

	system("cls");


	if (contadorcadena == 1) {

		longitud = 0;
		ciclar1 = 0;

		while (ciclar1 == 0) {

			system("cls");
			cout << "Usted digito 1 digito\n";
			cout << "Ahora es hora de agregar los 2 decimales \n";
			cout << "Digite los decimales\n .";
			cin >> decimalesdos;
			longitud = strlen(decimalesdos);

			if (longitud >= 3) {

				cout << "\nSe paso de decimales";

				system("pause>null");
				ciclar1 = 0;

			}
			else if (longitud < 2) {
				cout << "\nLe faltaron decimales";
				system("pause>null");
				ciclar1 = 0;
			}

			else {

				ciclar1 = 1;

				if (longitud == 2) {

					precioxd[a - 1][1] = '.';

					if (decimalesdos[0] == '0') {

						precioxd[a - 1][2] = '0';

						if (decimalesdos[1] == '0') {

							precioxd[a - 1][3] = '0';
							cout << precioxd[a][2];
							cout << "\n	Decimales agregados con exito c:";
							system("pause>null");
							system("cls");
							primeravuelta = primeravuelta + 1;
							supercontadorglobal = supercontadorglobal + 1;
							menugeneral();

						}
						else {

							decimal2 = &decimalesdos[1];
							int numero2 = 0;
							numero2 = atoi(decimal2);
							if (numero2 == 0) {

								cout << "\nLas letras no estan permitidas\t" << decimal2;
								system("pause>null");
								ciclar1 = 0;
							}
							else {
								precioxd[a - 1][3] = decimalesdos[1];
								cout << "\nDecimales agregados correctamente :)";
								system("pause>null");
								supercontadorglobal = supercontadorglobal + 1;
								primeravuelta = primeravuelta + 1;
								menugeneral();
							}

						}


					}

					else {

						decimal1 = &decimalesdos[0];
						int numero1 = 0;
						numero1 = atoi(decimal1);
						if (numero1 == 0) {

							cout << "\nLas letras no estan permitidas\t" << decimal1;
							system("pause>null");
							ciclar1 = 0;
						}
						else {

							precioxd[a - 1][2] = decimalesdos[0];

							if (decimalesdos[1] == '0') {

								precioxd[a - 1][3] = '0';
								cout << precioxd[a][2];
								cout << "\n	Decimales agregados con exito c:";
								system("pause>null");
								system("cls");
								supercontadorglobal = supercontadorglobal + 1;
								primeravuelta = primeravuelta + 1;
								menugeneral();

							}
							else {

								decimal2 = &decimalesdos[1];
								int numero2 = 0;
								numero2 = atoi(decimal2);
								if (numero2 == 0) {

									cout << "\nLas letras no estan permitidas\t" << decimal2;
									system("pause>null");
									ciclar1 = 0;
								}
								else {
									precioxd[a - 1][3] = decimalesdos[1];
									primeravuelta = primeravuelta + 1;
									cout << "\nDecimales agregados correctamente :)";
									system("pause>null");
									supercontadorglobal = supercontadorglobal + 1;
									menugeneral();

								}

							}

						}

					}


				}


			}

		}

	}

	else if (contadorcadena == 2) {

		longitud = 0;

		ciclar2 = 0;

		while (ciclar2 == 0) {


			system("cls");
			cout << "Usted digito 2 digitos\n";
			cout << "Ahora es hora de agregar los 2 decimales \n";
			cout << "Digite los decimales\n .";
			cin >> decimalesdos;
			longitud = strlen(decimalesdos);

			if (longitud >= 3) {

				cout << "\nSe paso de decimales";
				system("pause>null");
				ciclar2 = 0;

			}
			else if (longitud < 2) {
				cout << "\nLe faltaron decimales";
				system("pause>null");
				ciclar2 = 0;
			}

			else {

				ciclar2 = 1;

				if (longitud == 2) {

					precioxd[a - 1][2] = '.';

					if (decimalesdos[0] == '0') {

						precioxd[a - 1][3] = '0';

						if (decimalesdos[1] == '0') {

							precioxd[a - 1][4] = '0';
							cout << precioxd[a][3];
							primeravuelta = primeravuelta + 1;
							cout << "\n	Decimales agregados con exito c:";
							system("pause>null");
							system("cls");
							supercontadorglobal = supercontadorglobal + 1;
							menugeneral();

						}
						else {

							decimal2 = &decimalesdos[1];
							int numero2 = 0;
							numero2 = atoi(decimal2);
							if (numero2 == 0) {

								cout << "\nLas letras no estan permitidas\t" << decimal2;
								system("pause>null");
								ciclar2 = 0;
							}
							else {
								precioxd[a - 1][4] = decimalesdos[1];
								cout << "\n	Decimales agregados con exito c:";
								primeravuelta = primeravuelta + 1;
								system("pause>null");
								system("cls");
								supercontadorglobal = supercontadorglobal + 1;
								menugeneral();

							}

						}


					}

					else if (decimalesdos[0] != '0') {

						decimal1 = &decimalesdos[0];
						int numero1 = 0;
						numero1 = atoi(decimal1);
						if (numero1 == 0) {

							cout << "\nLas letras no estan permitidas\t" << decimal1;
							system("pause>null");
							ciclar2 = 0;

						}
						else {

							precioxd[a - 1][3] = decimalesdos[0];

							if (decimalesdos[1] == '0') {

								precioxd[a - 1][4] = '0';
								cout << precioxd[a][4];
								cout << "\n	Decimales agregados con exito c:";
								primeravuelta = primeravuelta + 1;
								system("pause>null");
								system("cls");
								supercontadorglobal = supercontadorglobal + 1;
								menugeneral();

							}
							else {

								decimal2 = &decimalesdos[1];
								int numero2 = 0;
								numero2 = atoi(decimal2);
								if (numero2 == 0) {

									cout << "\nLas letras no estan permitidas\t" << decimal2;
									system("pause>null");
									ciclar2 = 0;
								}
								else {
									precioxd[a - 1][4] = decimalesdos[1];
									cout << "\n	Decimales agregados con exito c:";
									primeravuelta = primeravuelta + 1;
									system("pause>null");
									system("cls");
									supercontadorglobal = supercontadorglobal + 1;
									menugeneral();

								}

							}



						}

					}


				}


			}



		}


	}

	else if (contadorcadena == 3) {

		ciclar3 = 0;
		longitud = 0;

		while (ciclar3 == 0) {

			system("cls");

			cout << "Usted digito 3 digitos\n";
			cout << "Ahora es hora de agregar los 2 decimales \n";
			cout << "Digite los decimales\n .";
			cin >> decimalesdos;
			longitud = strlen(decimalesdos);

			if (longitud >= 3) {

				cout << "\nSe paso de decimales";
				system("pause>null");
				ciclar3 = 0;

			}
			else if (longitud < 2) {
				cout << "\nLe faltaron decimales";
				system("pause>null");
				ciclar3 = 0;
			}

			else {

				ciclar3 = 1;

				if (longitud == 2) {

					precioxd[a - 1][3] = '.';

					if (decimalesdos[0] == '0') {

						precioxd[a - 1][4] = '0';

						if (decimalesdos[1] == '0') {

							precioxd[a - 1][5] = '0';
							cout << precioxd[a][4];

							cout << "\n	Decimales agregados con exito c:";
							primeravuelta = primeravuelta + 1;
							system("pause>null");
							system("cls");
							supercontadorglobal = supercontadorglobal + 1;
							menugeneral();
						}
						else {

							decimal2 = &decimalesdos[1];
							int numero2 = 0;
							numero2 = atoi(decimal2);
							if (numero2 == 0) {

								cout << "\nLas letras no estan permitidas\t" << decimal2;
								system("pause>null");
								ciclar3 = 0;
							}
							else {
								precioxd[a - 1][5] = decimalesdos[1];
								cout << "\n	Decimales agregados con exito c:";
								system("pause>null");
								primeravuelta = primeravuelta + 1;
								system("cls");
								supercontadorglobal = supercontadorglobal + 1;
								menugeneral();
							}

						}
					}

					else if (decimalesdos[0] != '0') {

						decimal1 = &decimalesdos[0];
						int numero1 = 0;
						numero1 = atoi(decimal1);
						if (numero1 == 0) {

							cout << "\nLas letras no estan permitidas\t" << decimal1;
							system("pause>null");
							ciclar3 = 0;

						}
						else {

							precioxd[a - 1][4] = decimalesdos[0];

							if (decimalesdos[1] == '0') {

								precioxd[a - 1][5] = '0';
								cout << precioxd[a][5];
								primeravuelta = primeravuelta + 1;
								cout << "\n	Decimales agregados con exito c:";
								system("pause>null");
								system("cls");
								supercontadorglobal = supercontadorglobal + 1;
								menugeneral();
							}
							else {

								decimal2 = &decimalesdos[1];
								int numero2 = 0;
								numero2 = atoi(decimal2);
								if (numero2 == 0) {

									cout << "\nLas letras no estan permitidas\t" << decimal2;
									system("pause>null");
									ciclar3 = 0;
								}
								else {
									precioxd[a - 1][5] = decimalesdos[1];
									cout << "\n	Decimales agregados con exito c:";
									primeravuelta = primeravuelta + 1;
									system("pause>null");
									system("cls");
									supercontadorglobal = supercontadorglobal + 1;
									menugeneral();
								}

							}



						}

					}


				}


			}

		}

	}

}

void verservicios() {

	system("cls");
	cout << "\t\t\t\tAqui va a ver todo lo que agrego\n\n\n";

	cout << "|Servicio|\t\t\t|Codigo|\t\t\t|Sub-servicio|\t\t\t|Sub-codigo|\t\t\t|Precio|\n";

	for (i = 0, j = 0, d = 0, x = 0, a = 0; i < f, j < k, d < m, x < y, a < b; i++, j++, d++, x++, a++) {

		cout << "\n" << "[" << i + 1 << "]" << nameserv[i] << "\t\t\t\t" << "[" << j + 1 << "]" << cod[j] << "\t\t\t\t" << "[" << d + 1 << "]" << subservicio[d] << "\t\t\t\t" << "[" << x + 1 << "]" << codsubserv[x] << "\t\t\t\t" << "[" << a + 1 << "]" << precioxd[a] << "\n\n";

	}

	system("pause>null");
	menugeneral();


}

void editar() {

	supernum = 0;
	letrita = 0;


	if (primeravuelta == 0) {
		cout << "\nAun no ha ingresado algun valor para editar";
		system("pause>null");
		menugeneral();
	}

	while (letrita != 'a' && letrita != 'c' && letrita != 'e') {



		system("cls");
		cout << "Estos son los parametros que se pueden editar \n ";
		cout << "Editar un servicio     -> a)\n ";
		cout << "Editar un sub-servicio -> c)\n ";
		cout << "Editar un precio       -> e)\n ";
		cin >> letrita;
		cout << letrita;


	}

	if (letrita == 'a') {

		supernum = 0;
		letritaa = 0;

		while (letritaa == 0) {

			letritaa = 0;

			system("cls");

			cout << "Estos son todos los Servicios que usted agrego:\n";

			for (i = 0; i < f; i++) {

				cout << "\n" << "[" << i + 1 << "]" << nameserv[i];

			}


			cout << "\n\nDIGITE LA |POSICION| DONDE ESTA EL numero deL Servicio que desea editar:\t";
			cin >> edit;
			supernum = atoi(edit);


			if (supernum == 0) {

				cout << "\nNo estan permitidos usar caracteres/ o poner el numero cero ";
				system("pause>null");
				letritaa = 0;

			}

			else if (supernum > supercontadorglobal) {
				cout << "\nAun no exite esa posicion *_*\n";
				system("pause>null");
				letritaa = 0;

			}

			else {

				letritaa = 1;
				cout << "\nIngrese el nuevo nombre del servicio:\t";
				cin.getline(nameserv[supernum - 1], 50);
				gets_s(nameserv[supernum - 1]);
				cout << "\nNombre nuevo:\t" << nameserv[supernum - 1];
				system("pause>null");
				system("cls");
				menugeneral();

			}

		}

	}


	else if (letrita == 'c') {

		supernum = 0;
		letritac = 0;

		while (letritac == 0) {

			letritac = 0;

			system("cls");

			cout << "Estos son todos los Sub-servicios que usted agrego:\n";

			for (d = 0; d < m; d++) {

				cout << "\n" << "[" << d + 1 << "]" << subservicio[d];

			}

			cout << "\n\nDIGITE LA |POSICION| DONDE ESTA EL numero deL sub-servicio que desea editar:\t";
			cin >> edit;
			supernum = atoi(edit);


			if (supernum == 0) {


				cout << "\nNo estan permitidos usar caracteres/ o poner el numero cero ";
				system("pause>null");
				letritac = 0;

			}


			else if (supernum > supercontadorglobal) {
				cout << "\nAun no exite esa posicion *_*\n";
				system("pause>null");
				letritac = 0;

			}

			else {
				letritac = 1;

				cout << "\nIngrese el nuevo nombre del sub-servicio:\t";
				cin.getline(subservicio[supernum - 1], 50);
				gets_s(subservicio[supernum - 1]);
				cout << "\nNombre nuevo:\t" << subservicio[supernum - 1];
				system("pause>null");
				system("cls");
				menugeneral();

			}

		}

	}


	else if (letrita == 'e') {

		supernum = 0;
		letritae = 0;

		while (letritae == 0) {

			letritae = 0;

			system("cls");

			cout << "Estos son todos los Precios que usted agrego:\n";

			for (a = 0; a < b; a++) {

				cout << "\n" << "[" << a + 1 << "]" << precioxd[a];

			}

			cout << "\n\nDIGITE LA |POSICION| DONDE ESTA EL numero deL precio que desea editar:\t";
			cin >> edit;
			supernum = atoi(edit);

			system("pause>null");

			if (supernum == 0) {


				cout << "\nNo estan permitidos usar caracteres/ o poner el numero cero ";
				system("pause>null");
				letritae = 0;

			}

			else if (supernum > supercontadorglobal) {
				cout << "\nAun no exite esa posicion *_*\n";
				system("pause>null");
				letritae = 0;

			}


			else {
				letritae = 1;
				editar3();

				system("pause>null");

			}

		}

	}

}

void editar3() {

	costdecxd = 0;


	while (costdecxd == 0) {

		estring = 0;
		system("cls");
		cout << "Aqui va a editar el precio";
		cout << "\nTiene permitido usar solo 3 digitos, ya que con 4 seria muy caro un servicio";
		cout << "\nLos decimales los agregara despues";
		cout << "\nIngrese el precio:\n";
		cin >> precioxd[supernum - 1];
		estring = strlen(precioxd[supernum - 1]);

		if (estring > 3) {

			cout << "El precio es muy caro";
			system("pause>nul");
			costdecxd = 0;
		}

		else {

			cout << "Ahora checaremos si el precio tiene alguna letra\t ";
			system("pause>null");
			costdecxd = 1;

			if (estring == 1) {

				if (precioxd[supernum - 1][0] == '0') {

					cout << "\nError, ningun precio puede iniciar en '0' ";
					system("pause>null");
					costdecxd = 0;

				}
				else {

					dir_prec1xd = &precioxd[supernum - 1][0];
					cout << "\nNumero posicion [1]\t" << *dir_prec1xd << endl;
					int numero = 0;
					numero = atoi(dir_prec1xd);

					if (numero == 0) {

						cout << "\n\n\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
						system("pause>null");
						costdecxd = 0;

					}

					else {

						contadorcadenaxd = 1;

						cout << "\nTodo bien :)";
						system("pause>null");
						editar4();
					}
				}
			}

			else if (estring == 2) {

				if (precioxd[supernum - 1][0] == '0') {

					cout << "\nError, ningun precio puede iniciar en '0' ";
					system("pause>null");
					costdecxd = 0;
				}

				else {


					dir_prec1xd = &precioxd[supernum - 1][0];
					cout << "\nNumero posicion [1]\t" << *dir_prec1xd << endl;
					int numero = 0;
					numero = atoi(dir_prec1xd);
					if (numero == 0) {

						cout << "\n\n\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
						system("pause>null");
						costdecxd = 0;
					}

					else {

						if (precioxd[supernum - 1][1] == '0') {

							precioxd[supernum - 1][1] = '0';
							cout << "\n\n\nNumero posicion [2]\t" << precioxd[supernum - 1][1];
							contadorcadenaxd = 2;
							system("pause>null");
							editar4();

						}
						else {

							dir_prec2xd = &precioxd[supernum - 1][1];
							cout << "\nNumero posicion [2]\t" << *dir_prec2xd << endl;
							int numero1 = 0;
							numero1 = atoi(dir_prec2xd);
							if (numero1 == 0) {

								cout << "\n\n\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
								system("pause>null");
								costdecxd = 0;
							}

							else
							{
								system("pause>null");
								contadorcadenaxd = 2;
								editar4();

							}
						}
					}
				}
			}

			else if (estring == 3) {

				if (precioxd[supernum - 1][0] == '0') {

					cout << "\nError, ningun precio puede iniciar en '0' ";
					system("pause>null");
					costdecxd = 0;
				}

				else {


					dir_prec1xd = &precioxd[supernum - 1][0];
					cout << "\nNumero posicion [1]\t" << *dir_prec1xd << endl;
					int numero = 0;
					numero = atoi(dir_prec1xd);
					if (numero == 0) {

						cout << "\n\n\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
						system("pause>null");
						costdecxd = 0;
					}

					else {

						if (precioxd[supernum - 1][1] == '0') {

							precioxd[supernum - 1][1] = '0';
							cout << "\n\n\nNumero posicion [2]\t" << precioxd[supernum - 1][1];

							if (precioxd[supernum - 1][2] == '0') {

								precioxd[supernum - 1][2] = '0';
								cout << "\n\n\nNumero posicion [3]\t" << precioxd[supernum - 1][2];
								contadorcadenaxd = 3;
								system("pause>null");
								editar4();

							}
							else if (precioxd[supernum - 1][2] != '0') {

								dir_prec3xd = &precioxd[supernum - 1][2];
								cout << "\nNumero posicion [3]\t" << *dir_prec1xd << endl;
								int numero2 = 0;
								numero2 = atoi(dir_prec3xd);

								if (numero2 == 0) {

									cout << "\n\n\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
									system("pause>null");
									costdecxd = 0;
								}
								else
								{
									system("pause>null");
									contadorcadenaxd = 3;
									editar4();

								}
							}
						}
						else {

							dir_prec2xd = &precioxd[supernum - 1][1];
							cout << "\nNumero posicion [2]\t" << *dir_prec2xd << endl;
							int numero1 = 0;
							numero1 = atoi(dir_prec2xd);
							if (numero1 == 0) {

								cout << "\n\n\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
								system("pause>null");
								costdecxd = 0;
							}

							else {

								if (precioxd[supernum - 1][2] == '0') {

									precioxd[supernum - 1][2] = '0';
									cout << "\n\n\nNumero posicion [3]\t" << precioxd[supernum - 1][2];
									contadorcadenaxd = 3;
									system("pause>null");
									editar4();

								}
								else {

									dir_prec3xd = &precioxd[supernum - 1][2];
									cout << "\nNumero posicion [3]\t" << *dir_prec3xd << endl;
									int numero2 = 0;
									numero2 = atoi(dir_prec3xd);

									if (numero2 == 0) {

										cout << "\n\n\nESTE ES UNA LETRA Y NO ESTA PERMITIDO";
										system("pause>null");
										costdecxd = 0;
									}
									else
									{
										system("pause>null");
										contadorcadenaxd = 3;
										editar4();

									}
								}
							}
						}
					}
				}
			}
		}

	}
}

void editar4() {

	system("cls");

	if (contadorcadenaxd == 1) {

		contadordecadena1 = 0;

		while (contadordecadena1 == 0) {

			longitudxd = 0;
			cout << "Ahora es hora de agregar los 2 decimales \n";
			cout << "Digite los decimales\n .";
			cin >> decimalesdosxd;
			longitudxd = strlen(decimalesdosxd);


			if (longitudxd != 2) {
				cout << "se paso o le faltaron decimales :c";
				system("pause>null");
				contadordecadena1 = 0;

			}

			else {

				contadordecadena1 = 1;

				precioxd[supernum - 1][1] = '.';
				precioxd[supernum - 1][2] = 0;
				precioxd[supernum - 1][3] = 0;
				precioxd[supernum - 1][4] = 0;

				if (decimalesdosxd[0] == '0') {

					precioxd[supernum - 1][2] = '0';

					if (decimalesdosxd[1] == '0') {

						precioxd[supernum - 1][3] = '0';
						cout << precioxd[supernum - 1][3];
						cout << "\n	Decimales agregados con exito c:";
						system("pause>null");
						system("cls");
						menugeneral();

					}
					else {

						decimal2xd = &decimalesdosxd[1];
						int numero2 = 0;
						numero2 = atoi(decimal2xd);
						if (numero2 == 0) {

							cout << "\nLas letras no estan permitidas\t" << decimal2xd;
							system("pause>null");
							contadordecadena1 = 0;
						}
						else {
							precioxd[supernum - 1][3] = decimalesdosxd[1];
							cout << "\nDecimales agregados correctamente :)";
							system("pause>null");
							menugeneral();
						}

					}


				}

				else if (decimalesdosxd[0] != '0') {

					decimal1xd = &decimalesdosxd[0];
					int numero1 = 0;
					numero1 = atoi(decimal1xd);
					if (numero1 == 0) {

						cout << "\nLas letras no estan permitidas\t" << decimal1xd;
						system("pause>null");
						contadordecadena1 = 0;

					}
					else {

						precioxd[supernum - 1][2] = decimalesdosxd[0];

						if (decimalesdosxd[1] == '0') {

							precioxd[a - 1][3] = '0';
							cout << precioxd[supernum - 1][2];
							cout << "\n	Decimales agregados con exito c:";
							system("pause>null");
							system("cls");
							menugeneral();

						}
						else {

							decimal2xd = &decimalesdosxd[1];
							int numero2 = 0;
							numero2 = atoi(decimal2xd);
							if (numero2 == 0) {

								cout << "\nLas letras no estan permitidas\t" << decimal2xd;
								system("pause>null");
								contadordecadena1 = 0;
							}
							else {
								precioxd[supernum - 1][3] = decimalesdosxd[1];
								cout << "\nDecimales agregados correctamente :)";
								system("pause>null");
								menugeneral();

							}

						}
					}

				}

			}

		}


	}

	else if (contadorcadenaxd == 2) {

		contadordecadena2 = 0;
		while (contadordecadena2 == 0) {

			longitudxd = 0;

			system("cls");
			cout << "Ahora es hora de agregar los 2 decimales \n";
			cout << "Digite los decimales\n .";
			cin >> decimalesdosxd;
			longitudxd = strlen(decimalesdosxd);



			if (longitudxd != 2) {
				cout << "se paso o le faltaron decimales :c";
				system("pause>null");
				contadordecadena2 = 0;

			}

			else {

				contadordecadena2 = 1;

				precioxd[supernum - 1][2] = '.';
				precioxd[supernum - 1][3] = 0;
				precioxd[supernum - 1][4] = 0;
				precioxd[supernum - 1][5] = 0;



				if (decimalesdosxd[0] == '0') {

					precioxd[supernum - 1][3] = '0';

					if (decimalesdosxd[1] == '0') {

						precioxd[supernum - 1][4] = '0';
						cout << precioxd[supernum - 1][3];
						cout << "\n	Decimales agregados con exito c:";
						system("pause>null");
						system("cls");
						menugeneral();

					}
					else {

						decimal2xd = &decimalesdosxd[1];
						int numero2 = 0;
						numero2 = atoi(decimal2xd);
						if (numero2 == 0) {

							cout << "\nLas letras no estan permitidas\t" << decimal2xd;
							system("pause>null");
							contadordecadena2 = 0;
						}
						else {
							precioxd[supernum - 1][4] = decimalesdosxd[1];
							cout << "\n	Decimales agregados con exito c:";
							system("pause>null");
							system("cls");
							menugeneral();

						}

					}


				}

				else if (decimalesdosxd[0] != '0') {

					decimal1xd = &decimalesdosxd[0];
					int numero1 = 0;
					numero1 = atoi(decimal1xd);
					if (numero1 == 0) {

						cout << "\nLas letras no estan permitidas\t" << decimal1xd;
						system("pause>null");
						contadordecadena2 = 0;

					}
					else {

						precioxd[supernum - 1][3] = decimalesdosxd[0];

						if (decimalesdosxd[1] == '0') {

							precioxd[supernum - 1][4] = '0';
							cout << precioxd[supernum - 1][4];
							cout << "\n	Decimales agregados con exito c:";
							system("pause>null");
							system("cls");
							menugeneral();

						}
						else {

							decimal2xd = &decimalesdosxd[1];
							int numero2 = 0;
							numero2 = atoi(decimal2xd);
							if (numero2 == 0) {

								cout << "\nLas letras no estan permitidas\t" << decimal2xd;
								system("pause>null");
								contadordecadena2 = 0;
							}
							else {
								precioxd[supernum - 1][4] = decimalesdosxd[1];
								cout << "\n	Decimales agregados con exito c:";
								system("pause>null");
								system("cls");
								menugeneral();

							}

						}

					}

				}

			}

		}

	}

	else if (contadorcadenaxd == 3) {

		contadordecadena3 = 0;

		while (contadordecadena3 == 0) {

			longitudxd = 0;


			cout << "Ahora es hora de agregar los 2 decimales \n";
			cout << "Digite los decimales\n .";
			cin >> decimalesdosxd;
			longitudxd = strlen(decimalesdosxd);


			if (longitudxd != 2) {
				cout << "se paso o le faltaron decimales :c";
				system("pause>null");
				contadordecadena3 = 0;

			}


			else {

				contadordecadena3 = 1;

				precioxd[supernum - 1][3] = '.';

				if (decimalesdosxd[0] == '0') {

					precioxd[supernum - 1][4] = '0';

					if (decimalesdosxd[1] == '0') {

						precioxd[supernum - 1][5] = '0';
						cout << precioxd[supernum - 1][5];

						cout << "\n	Decimales agregados con exito c:";
						system("pause>null");
						system("cls");
						menugeneral();
					}
					else {

						decimal2xd = &decimalesdosxd[1];
						int numero2 = 0;
						numero2 = atoi(decimal2xd);
						if (numero2 == 0) {

							cout << "\nLas letras no estan permitidas\t" << decimal2xd;
							system("pause>null");
							contadordecadena3 = 0;
						}
						else {
							precioxd[supernum - 1][5] = decimalesdosxd[1];
							cout << "\n	Decimales agregados con exito c:";
							system("pause>null");
							system("cls");
							menugeneral();
						}

					}
				}

				else {

					decimal1xd = &decimalesdosxd[0];
					int numero1 = 0;
					numero1 = atoi(decimal1xd);
					if (numero1 == 0) {

						cout << "\nLas letras no estan permitidas\t" << decimal1xd;
						system("pause>null");
						contadordecadena3 = 0;

					}
					else {

						precioxd[supernum - 1][4] = decimalesdosxd[0];

						if (decimalesdosxd[1] == '0') {

							precioxd[a - 1][5] = '0';
							cout << precioxd[supernum - 1][5];
							cout << "\n	Decimales agregados con exito c:";
							system("pause>null");
							system("cls");
							menugeneral();
						}
						else {

							decimal2xd = &decimalesdosxd[1];
							int numero2 = 0;
							numero2 = atoi(decimal2xd);
							if (numero2 == 0) {

								cout << "\nLas letras no estan permitidas\t" << decimal2xd;
								system("pause>null");
								contadordecadena3 = 0;
							}
							else {
								precioxd[supernum - 1][5] = decimalesdosxd[1];
								cout << "\n	Decimales agregados con exito c:";
								system("pause>null");
								system("cls");
								menugeneral();
							}

						}

					}

				}

			}

		}

	}

}

void eliminar() {

	opcioneliminar = 0;
	eliminacion = 0;

	if (primeravuelta == 0) {
		cout << "\nAun no ha ingresado algun valor para editar";
		system("pause>null");
		menugeneral();
	}


	while (opcioneliminar != 'a' && opcioneliminar != 'b' && opcioneliminar != 'c') {

		system("cls");
		cout << "En esta seccion solo hay 3 parametros que se pueden eliminar las cuales son:";
		cout << "\na)Servicio";
		cout << "\nb)Sub-servicio";
		cout << "\nc)Precio";
		cout << "\n\nSeleccione la opcion que desea eliminar:\n";
		cin >> opcioneliminar;

	}


	if (opcioneliminar == 'a') {


		cout << "\nEn esta seccion si elimina el Servicio se estaria eliminando tambien el Sub-servicio y el Precio c:";
		system("pause>null");

		eliminacion = 0;


		while (eliminacion == 0) {

			system("cls");


			cout << "Estos son todos los Servicios que usted agrego:\n";

			for (i = 0; i < f; i++) {

				cout << "\n" << "[" << i + 1 << "]" << nameserv[i];

			}

			cout << "\n\nseleccione la posicion que desea eliminar\t";
			cin >> eliminacionsuprema;
			int numeroxd = 0;
			numeroxd = atoi(eliminacionsuprema);
		

			if (numeroxd > supercontadorglobal) {
				cout << "\nAun no exite esa posicion *_*\n";
				system("pause>null");
				eliminacion = 0;

			}


			else if(numeroxd == 0) {


				cout << "\nDato invalido *_*\n";
				system("pause>null");
				eliminacion = 0;


			}

			else {

				eliminacion = 1;

				cout << "\nTodo en la posicion numero" << "[" << numeroxd << "]" << " ha sido eliminado";
				nameserv[numeroxd - 1][0] = 0;
				subservicio[numeroxd - 1][0] = 0;
				precioxd[numeroxd - 1][0] = 0;
				system("pause>null");
				menugeneral();

			}


		}

	}

	else if (opcioneliminar == 'b') {

		cout << "\nEn esta seccion si elimina el Sub-servicio tambien se eliminaria el Precio c:";
		system("pause>null");

		eliminacion = 0;

		while (eliminacion == 0) {

			system("cls");

			cout << "Estos son todos los Sub-servicios que usted agrego:\n";

			for (d = 0; d < m; d++) {

				cout << "\n" << "[" << d + 1 << "]" << subservicio[d];

			}


			cout << "\n\nseleccione la posicion que desea eliminar\t";
			cin >> eliminacionsuprema;
             int numeroxd = 0;

			numeroxd = atoi(eliminacionsuprema);


			if (numeroxd > supercontadorglobal) {
				cout << "\nAun no exite esa posicion *_*\n";
				system("pause>null");
				eliminacion = 0;
			}


			else if (numeroxd == 0) {

				cout << "\nDato invalido *_*\n";
				system("pause>null");
				eliminacion = 0;

			}


		

			else {

				eliminacion = 1;
				cout << "\nSub-servicio y Precio en la posicion" << "[" << numeroxd << "]" << " ha sido eliminado";
				subservicio[numeroxd - 1][0] = 0;
				precioxd[numeroxd - 1][0] = 0;
				system("pause>null");
				menugeneral();

			}

		}

	}

	else if (opcioneliminar == 'c') {

		cout << "\nEn esta seccion solo se eliminaria el Precio c:";
		system("pause>null");

		eliminacion = 0;

		while (eliminacion == 0) {

			system("cls");


			cout << "Estos son todos los Precios que usted agrego:\n";

			for (a = 0; a < b; a++) {

				cout << "\n" << "[" << a + 1 << "]" << precioxd[a];

			}


			cout << "\n\nseleccione la posicion que desea eliminar\t";
			cin >> eliminacionsuprema;
			int numeroxd = 0;
			numeroxd = atoi(eliminacionsuprema);


			if (numeroxd > supercontadorglobal) {
				cout << "\nAun no exite esa posicion *_*\n";
				system("pause>null");
				eliminacion = 0;

			}


			else if (numeroxd == 0) {


				cout << "\nDato invalido *_*\n";
				system("pause>null");
				eliminacion = 0;


			}


			else {
				eliminacion = 1;
				cout << "\nPrecio en la posicion numero" << "[" << numeroxd << "]" << " ha sido eliminado";
				precioxd[numeroxd - 1][0] = 0;
				system("pause>null");
				menugeneral();

			}

		}

	}

}

void FinalizarCompra() {

	system("cls");
	cout << "Aqui vera el ticket general de todas las compras realizadas\n";

	for (vertodo = 0; vertodo < seccionuno; vertodo++) {

		cout << "\nServicio\t" << numerosdelatintoreriaseccion1nombredelservicio[vertodo] << endl;
		cout << "Seccion\t\t" << numerosdelatintoreriaseccion1totalseccion[vertodo][50] << endl << "Costo del servicio por prenda:\t"<<numerosdelatintoreriaseccion1totalprenda[vertodo][50]<<"$";
		cout << "\nNumero de prendas que ingreso:\t" << numerosdelatintoreriaseccion1[vertodo][50];
		cout << "\nEl subtotal es de:\t" << numerosdelatintoreriaseccion1subtotal[vertodo][50];
		cout << "\nEl iva fue de:\t\t" << numerosdelatintoreriaseccion1iva[vertodo][50];
		cout << "\nEl total fue de:\t" << numerosdelatintoreriaseccion1total[vertodo][50] << endl;

	}

	cout << "\n\nEl costo de todas sus compras completo es de " << TotalT << "$";
	cout << "\nY el numero de ventas totales que se hicieron en todo el dia son de\t" << totaldecomprasdeldia << endl;

	system("pause>null");
	menugeneral();

}

void salir()
{



	system("cls");
	cout << "A continuacion en un archivo .txt se guardara toda la informacion que usted agrego";
	cout << "\nReferiendose a los servicios, codigo, precio, etc";
	cout << "\nEl archivo se llama |Servicios.txt|\n";

	ofstream catalogodeservicios;
	catalogodeservicios.open("Servicios.txt", ios::out);

	if (catalogodeservicios.fail()) {

		cout << "No se pudo crear el archivo";
		exit(1);
	}


	catalogodeservicios << "Aqui vera todos los servicios que se agregaron c:\n\n\n";
	catalogodeservicios << "|Servicio|\t\t\t|Codigo|\t\t\t|Sub-servicio|\t\t\t|Sub-codigo|\t\t\t|Precio|";


	for (i = 0; i < f; i++) {

		catalogodeservicios << "\n" << "[" << i + 1 << "]" << " " << nameserv[i];

	}

	for (j = 0; j < k; j++) {

		catalogodeservicios << "\n\t\t\t\t" << "[" << j + 1 << "]" << cod[j];

	}

	for (d = 0; d < m; d++) {

		catalogodeservicios << "\n\t\t\t\t\t\t\t\t" << "[" << d + 1 << "]" << subservicio[d];

	}
	for (x = 0; x < y; x++) {

		catalogodeservicios << "\n\t\t\t\t\t\t\t\t\t\t\t\t" << "[" << x + 1 << "]" << codsubserv[x];

	}

	for (a = 0; a < b; a++) {

		catalogodeservicios << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << "[" << a + 1 << "]" << precioxd[a];

	}





}


void generartxt() {


	system("cls");
	cout << "A continuacion en un archivo .txt se guardara toda la informacion que usted agrego";
	cout << "\nReferiendose a los servicios, codigo, precio, etc";
	cout << "\nEl archivo se llama |Servicios1.txt|\n";

	ofstream catalogodeservicios1;
	catalogodeservicios1.open("Servicios1.txt", ios::out);

	if (catalogodeservicios1.fail()) {

		cout << "No se pudo crear el archivo";
		exit(1);
	}


	catalogodeservicios1 << "Aqui vera todos los servicios que se agregaron c:\n\n\n";
	catalogodeservicios1 << "|Servicio|\t\t\t|Codigo|\t\t\t|Sub-servicio|\t\t\t|Sub-codigo|\t\t\t|Precio|";


	for (i = 0; i < f; i++) {

		catalogodeservicios1 << "\n" << "[" << i + 1 << "]" << " " << nameserv[i];

	}

	for (j = 0; j < k; j++) {

		catalogodeservicios1 << "\n\t\t\t\t" << "[" << j + 1 << "]" << cod[j];

	}

	for (d = 0; d < m; d++) {

		catalogodeservicios1 << "\n\t\t\t\t\t\t\t\t" << "[" << d + 1 << "]" << subservicio[d];

	}
	for (x = 0; x < y; x++) {

		catalogodeservicios1 << "\n\t\t\t\t\t\t\t\t\t\t\t\t" << "[" << x + 1 << "]" << codsubserv[x];

	}

	for (a = 0; a < b; a++) {

		catalogodeservicios1 << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << "[" << a + 1 << "]" << precioxd[a];

	}

	system("pause>null");



}