#include <stdio.h>
#include <string.h>

//Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo: Entrada = 4. Saída = abril.

   void mostraMes(int numero){
    int dias;
    char nomeMes[10];
    
    switch(numero){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        dias = 31; 
        if(numero == 1){
            strcpy(nomeMes ,"Janeiro");
        }
        else if(numero == 3){
            strcpy(nomeMes ,"Marco");
        }
        else if(numero == 5){
            strcpy(nomeMes ,"Maio");
        }
        else if(numero == 7){
            strcpy(nomeMes ,"Julho");
        }
        else if(numero == 8){
            strcpy(nomeMes ,"Agosto");
        }
        else if(numero == 10){
            strcpy(nomeMes ,"Outubro");
        }
        else{
            strcpy(nomeMes ,"Dezembro");
        }
        break;
        case 4: case 6: case 9: case 11:
        dias = 30;
        if(numero == 4){
            strcpy(nomeMes ,"Abril");
        }
        else if(numero == 6){
            strcpy(nomeMes ,"junho");
        }
        else if(numero == 9){
            strcpy(nomeMes ,"Setembro");
        }
        else{
            strcpy(nomeMes ,"Novembro");
        }
        break;
        case 2:
        dias = 28;
        strcpy(nomeMes ,"Fevereiro");
        break;
        default: 
        printf("Esse codigo invalido");


    }
    printf("Quantidade de dias: %d e mes: %s", dias, nomeMes);

   }

main(){
    mostraMes (1);

}
