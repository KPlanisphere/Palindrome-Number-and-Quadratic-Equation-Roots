//Jesús Huerta Aguilar
//Programación I - "Programa: numero capicua"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
//PROTOTIPOS
void lect(int*);
void capi(int,int*);
//PRINCIPAL
int main(){
    //DECLARAR VARIABLES
    int x,num,cif,inv=0;   
    //LECTURA
    lect(&num);
    x=num;
    //IDENTIFICADOR
    capi(num,&inv);
    //Salidas
    if (x == inv){
        printf("\n\t%c %d SI ES CAPICUA %c",16,x,17);
    }
    else{
        printf("\n\t%c %d NO ES CAPICUA %c",16,x,17);
    }
    getch();
    return 0;
}
//LECTURA
void lect(int* num){
    do{
        printf("/// DETECTOR DE NUMEROS CAPICUA ///\n\n");
        printf("\tIngresa un numero: ");
        scanf("%d",num);
        if (*num < 0){
        printf("\n\n[!] ERROR: Los numeros capicua no son negativos [!]");
        getch();
        system("cls");
        }
   }while (*num<0);
}
//IDENTIFICADOR
void capi(int num,int *inv){
    int cif;
    while(num!=0){
        cif=num%10;
        *inv=*inv * 10+cif;
        num=num/10;
    }
}