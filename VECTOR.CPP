//JAIME DOMINGUEZ MAURICIO//
//1AV6//

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

using namespace std;
void  menu ();
void leer_opcion(int &opt);
void printVector(int myVector[], int size);
void printVectorF(double myVector[], int size);
void scanVector(int myVector[], int size);

void suma(int v1[3],int v2[3],int *ptr);
void resta(int vector1[3],int vector2[3],int *ptr);
float vectorEscalar (int myVector[], int myV2[],int size);
 void punto(int Vector[3],int Vector2[3],int size);
float norma (int Vector[],int s);
void punto(int Vector[3],int Vector2[3],int size);
void unitario(int vector1[3], int *ptr, double *ptr2);
int main(){

int opt;
float n,e;
char rep;
int a[3] = {0,0,0};
int *ptra = &a[0];
int b[3] = {9,6,-2};
int c[3] = {0,0,0};
double cf[3] = {0.0,0.0,0.0};
int *ptrC = &c[0];
double *ptrCf = &cf[0];
	scanVector(a,3);
		scanVector(b,3);

printf("\n Vector 1\n");
printVector(a,3);

printf("\n Vector 2\n");
printVector(b,3);

do{

menu ();
leer_opcion(opt);
switch(opt){
case 1:
suma(a,b,ptrC);
printf("\n suma Vector 1\n");
printVector(c,3); break;
case 2:
resta(a,b,ptrC);
printf("\n resta Vector 1\n");
printVector(c,3); break;
case 3:
n = norma(a,3);
printf("\n norma Vector  %f \n",n);
break;
case 4:
printf(" \n Producto punto");
punto(a,b,3);
break;
case 5:
printf("\n \n Producto escalar");
e = vectorEscalar(a,b,3);
printf(" \n producto escalar con raiz: %f ",e);
 break;
case 6:
printf("\n \n vector unitario \n");
unitario(a,ptra,ptrCf);
break;

default:
printf("opcion invalida"); break;
}

printf("\nDesea hacer otra operacion? S N \n");
rep = getch();
}while((rep=='S') || (rep=='s'));
}

void menu(){
printf("1. suma\n");
printf("2. resta\n");
printf("3. norma\n");
printf("4. producto punto\n");
printf("5. producto escalar\n");
printf("6. vector unitario\n");

}
void leer_opcion(int& opt){
printf("introduce una opcion");
scanf("%d",&opt);
}
void printVector(int myVector[],int size){
for (int i=0; i<size; i++){
printf("vector[%d]: %d\n",i,myVector[i]);
}
}

void scanVector(int myVector[],int size){
for (int i=0; i<size; i++){
int valor;
printf("vector[%d]: \n",i);
scanf("%d",&valor);
myVector[i] = valor;

}
}

void printVectorF(double myVector[],int size){
for (int i=0; i<size; i++){
printf("vector[%d]: %d\n",i,myVector[i]);
}
}

void suma(int ve1[3], int ve2[3],int *ptr){
for(int i = 0; i<3; i++){
*(ptr+i) = ve1[i] + ve2[i];
}
}

void resta(int v1[3], int v2[3],int *ptr){
for(int i = 0; i<3; i++){
*(ptr+i) = v1[i] - v2[i];
}

}

float norma (int myVector[3],int size){
float suma=0.0;
for(int i = 0; i<=size; i++){
suma += myVector[i]*myVector[i];

}printf(" norma sin raiz %f",suma);
return sqrt(suma);

}
void punto (int myVector[3],int myVector2[3],int size){
float suma=0.0;
for(int i = 0; i<=size; i++){
suma += myVector[i]*myVector2[i];

}
printf(" \n la suma producto punto: %f", suma);

}
float vectorEscalar (int V[3], int V2[3],int size){
float suma=0.0;
for(int i = 0; i<=size; i++){
suma += V[i]*V[i] +V2[i]*V2[i];

}printf(" \n raiz de %f",suma);
return sqrt(suma);

}
void unitario(int v1[3],int *ptr, double *ptr2){
float raiz=0.0;
for(int i = 0; i<3; i++){
raiz += v1[i]*v1[i];

}
float raiz2 = sqrt (raiz);
printf(" El vector unitario es: %f \n a la menos uno 1/%f = %f \n",raiz2,raiz2,1/raiz2);
for(int i = 0; i<3; i++){

*(ptr2+1) = *(ptr+i) * 1/raiz2;
printf(" el vector unitario: %d * 1/%f ",v1[i],1/raiz2);
printf (" = %f \n",*(ptr2+1));

}
printf("\n");


}
