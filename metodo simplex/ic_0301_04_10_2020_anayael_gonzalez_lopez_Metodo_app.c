#include "ic_0301_04_10_2020_anayael_gonzalez_lopez_Metodo.h"

int leeDatos(int *var){
int rest,c,i; 

printf(" Funcion a Optimizar \nNumero de Variables: ");
scanf("%d",var);
printf("\nRecuerda: s1.X1+s2.X2+...sn.Xn = b \n\n");
for(c=0;c<*var;c++)
{
printf(" c%d: ", c+1);
scanf("%lf",&funcion[c]);
fflush(stdin);
}
printf("\nNumero de Restricciones: ");
scanf("%d",&rest);
fflush(stdin);
for(i=0;i <rest;i++);
{
printf("Restriccion %d\n",i+1);
for(c=0;c<*var;c++)
{
printf(" c%d: ",c+1);
scanf("%lf",&restricciones[i][c]);
fflush(stdin);
}
printf("Termino independiente ");
scanf("%lf", &independiente[i]);
fflush(stdin);
}
return rest;
}
