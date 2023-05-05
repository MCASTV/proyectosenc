#include <stdio.h>

int tienda();
int menu ();
int productos();
int repetir();
int opc;
int opc2;
int op3;
int main(){
	tienda();
	
	
}
int tienda()
{


	printf("BIENVENIDOS A LA TIENDA DEPORTIVA\n");
	menu();

}

int repetir(){
		printf("Desea continuar?\n");
 	printf("1.Si \n");
 	printf("2.No \n");
 	scanf("%d",&op3);	
 	if(op3==1){
 		productos();
	 }
	if(op3==2)
	{
		printf("Area por trabajar\n");
	}
}


int menu()
{
	
	printf("Escoje lo que deseas hacer\n");
	printf("1.Comprar\n");
	printf("2.Saldo\n");
	scanf("%d",&opc);
	if(opc==1)
	{
		productos();
	}
}

int productos(){
if(opc==1)
{
	printf("Los productos que tenemos son los siguientes\n");
	printf("1.Pants voit\n");
	printf("2.Tenis Adidas\n");
	printf("3.Balon de Basket\n");
	printf("4.Muñeras Eescord\n");
	printf("5.Silbato Acme\n");
	printf("6-Redes de poteria\n");
	printf("7-Raqueta\n");
	scanf("%d",&opc2);
	
	
	switch(opc2)
	{
		case 1:
			printf("El producto es unos Pants Voit\n");
			printf("Costo 290\n");
			break;
		case 2:
			printf("El producto es unos Tenis Adidas\n");
			printf("Costo 290\n");
			break;
		case 3:
			printf("El producto es unos Balon de Basket\n");
			printf("Costo 290\n");
			break;
		case 4:
			printf("El producto es unos Muñeras Eescord\n");
			printf("Costo 290\n");
			break;
		case 5:
			printf("El producto es unos Silbato Acme\n");
			printf("Costo 290\n");
			break;
		case 6:
				printf("El producto es unos Redes de poteria\n");
			printf("Costo 290\n");
			break;
		case 7:
			printf("El producto es unos raqueta\n");
			printf("Costo 290\n");
			break;
	}
 
 	repetir();

	
}




}
	


	





