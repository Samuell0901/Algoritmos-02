#include <stdio.h>

int main() {
    //Escrever um algoritmo que leia dois valores inteiro distintos e informe qual deles é o maior.
    //Solicita ao usuário para digitar um número
    int numero1, numero2;
   printf( "Digite o primerio numero distintos: ");
    scanf("%d", &numero1 );
    
    printf( "Digite o segundo numero distintos: ");
    scanf("%d", &numero2 );
    
//qual séra o maior numero{
if (numero1 > numero2){
         printf("O maior numero é:%d\n", numero1);
             } 
else {
             printf("O maior numero é:%d\n", numero2);
    } 
    

        
    


    return 0;
}