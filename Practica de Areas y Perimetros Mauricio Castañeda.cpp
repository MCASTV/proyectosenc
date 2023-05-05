#include<stdio.h>

float area(float l1, float l2, int figura);
float perimetro(float l1, float l2, int figura);
int menu();
void pedir_datos();

float lado1, lado2; 
int op;
float pi;
int main(){
	int op2;
	
	pi = 3.1416;
	do{
		menu();
		printf("1.- Area\n");
		printf("2.- Perímetro\n");
		scanf("%d",&op2);
		switch(op2){
			case 1: pedir_datos();
					printf("El área es %f\n",area(lado1,lado2,op));
					break;
			case 2: 
			pedir_datos();
					printf("El perimetro es %f\n",perimetro(lado1,lado2,op));
					break;
		}

	}while(op!=5);

}

int menu(){
	
	printf("1.- Cuadrado\n");
	printf("2.- Rectángulo\n");
	printf("3.- Triángulo\n");
	printf("4.- Círculo\n");
	printf("5.- Salir\n");
	scanf("%d",&op);
	
}

void pedir_datos(){
	printf("Dame el dato 1\n");
	scanf("%f",&lado1);
	printf("Dame el dato 2\n");
	scanf("%f",&lado2);
}

float area(float l1, float l2, int figura){
	float respuesta;
	switch(figura){
		case 1: respuesta = l1 * l1;
				break;
		case 2: respuesta = l1 * l2;
				break;
		case 3: respuesta = (l1 * l2 )/2;
				break;
		case 4: respuesta = pi * l1 * l1;
				break;
	}

	return respuesta;
}
float perimetro(float l1, float l2, int figura){
	float respuesta1;
	switch(figura)
	{
			//Cuadrado
		case 1:
			respuesta1 = 4*l1;
		break;
	// Rectangulo
		case 2:
			respuesta1 = 2*(l1+ l2);
		break;
	//Triangulo
		case 3:
			respuesta1 = l1 + l1 +l1;
		break;
	//Circulo
		case 4:
			respuesta1= 2*(pi*l1);
		break;
	}
	 return respuesta1;		
	}
	



