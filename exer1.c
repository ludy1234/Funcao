#include <stdio.h>

//Escreva uma função que receba por parâmetro dois números e retorne o maior deles.

int maior( int n1, int n2){
    if(n1 > n2){
        return n1;
    } else{
     return n2;
    }

}


main(){
    
   int  numero1 = 50, numero2 = 10;

   int retornoFuncao = maior(numero1, numero2);
   printf("Retorno: %d", retornoFuncao);

}
