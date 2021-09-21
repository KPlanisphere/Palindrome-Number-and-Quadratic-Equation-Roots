//Jesús Huerta Aguilar
//Programación I - "Programa: Discriminante de una ecuacion cuadratica"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//PROTOTIPOS
void lect(float *,float *,float *);
void veri(float,float,float);
void raiz(float,float,float,double *,double *);
//PRINCIPAL
int main(){
    float a=0,b=0,c=0;
    //LECTURA
    lect(&a,&b,&c);
    //VERIFICADOR
    veri(a,b,c);
    getch();
    return 0;
}
//RAICES
void raiz(float disc,float a,float b,double *r1,double *r2){
    if (disc > 0){
        *r1 = (-b + sqrt(disc))/(2*a);
        *r2 = (-b - sqrt(disc))/(2*a);
    }
    else{
        *r1 = -b/(2*a);
    }
}
//LECTURA
void lect(float *a,float *b,float *c){
    int cont=1;
    do{
        printf("Escriba los coeficientes de la siguiente ecuaci%cn cuadr%ctica:\n",162,160);
        printf("\n\t%.fx%c + %.fx + %.f = 0   donde   a = %.f, b = %.f, c = %.f\n",*a,253,*b,*c,*a,*b,*c);
        if (cont == 1){
            printf("\n/////  a = ");
            scanf("%f",a);
            //ERROR DIVICION ENTRE 0
            if (*a == 0){
                printf("\n[!] ERROR: El valor de {a} no puede ser 0 [!]");
                cont--;
                getch();
            }
        }
        if (cont == 2){
            printf("\n/////  b = ");
            scanf("%f",b);
        }
        if (cont == 3){
            printf("\n/////  c = ");
            scanf("%f",c);
        }
        if (cont <= 3){
            system("cls");
        }
        cont++;
    } while (cont <= 4);
}
//VERIFICADOR
void veri(float a,float b,float c){
    float disc;
    double r1,r2;
    disc = b*b-4*a*c;
    printf("\n///// ");
    if (disc < 0){
        printf("La ecuaci%cn cuadr%cica NO tiene soluci%cn",162,160,162);
    }
    else{
        if (disc > 0){
            raiz(disc,a,b,&r1,&r2);
            printf("Las ra%cces de la ecuaci%cn cuadr%ctica son: x1 = %lf, x2 = %lf",161,162,160,r1,r2);
        }
        else{
            raiz(disc,a,b,&r1,&r2);
            printf("Le ecuaci%cn cuadr%ctica tiene una %cnica ra%cz y es: x = %lf",162,160,163,161,r1);
        }
    }
}