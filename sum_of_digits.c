#include <stdio.h>
 
int sumaDigitos(int Numero){
int Suma=0, Resto;
 
    while(Numero!=0){
        Resto=(Numero%10);
        Suma=(Suma+Resto);
        Numero=(Numero/10);
    }
    return (Suma);
 
}
 
int main(){
int Numero;
    printf("Ingresa un Numero : ");
    scanf("%d",&Numero);
 
    printf("Procesado\n");
    printf("La suma de los digitos del numero [ %d ] es : %d\n",Numero,sumaDigitos(Numero));
}