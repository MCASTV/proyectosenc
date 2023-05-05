#include <stdio.h>

int tienda();
int menu ();
int productos();
void repetir();
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
	repetir();
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
	}
 
 	

	
}


	


	


}



