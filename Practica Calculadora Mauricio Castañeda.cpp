#include<stdio.h>

float calcular(float l1, float l2, int figura);

int menu();
void pedir_datos();

float lado1, lado2; 
int op;

int main(){
	int op2;
		printf("Bienvenidos a la calculadora 3000");
	
		printf("Desea continuar");
		printf("1-Si");
		printf("2-No");
		scanf("%d",&op2);
		menu();
	do{
		
		switch(op2){
			case 1: 
			
		pedir_datos();
		
					printf("El resultades %f\n",calcular(lado1,lado2,op));
		do {
		printf("Desea continuar");
		printf("1-Si");
		printf("2-No");
		scanf("%d",&op2);
		}while(op2!=2);
		
					break;
		
		}

	}while(op!=5);

}

int menu(){
	
	printf("1.- Suma\n");
	printf("2.- Resta\n");
	printf("3.- Multiplicacion\n");
	printf("4.- Resta\n");
	printf("5.- Salir\n");
	scanf("%d",&op);
	
	
}

void pedir_datos(){
	printf("Dame el dato 1\n");
	scanf("%f",&lado1);
	printf("Dame el dato 2\n");
	scanf("%f",&lado2);
}

float calcular(float l1, float l2, int figura){
	float respuesta;
	switch(figura){
		case 1: respuesta = l1 + l1;
				break;
		case 2: respuesta = l1 - l2;
				break;
		case 3: respuesta = (l1 * l2 );
				break;
		case 4: respuesta = l1 / l2;
				break;
	}

	return respuesta;}
