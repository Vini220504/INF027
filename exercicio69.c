/*Escreva um programa que leia um vetor de 15 posições de inteiros. Em seguida, o
programa deve ler um valor inteiro e imprimir o número de vezes que este valor ocorre
no vetor.*/

#include <stdio.h>

int main()
{
    int array[5] = {4,5,6,7,8}, i, numero, contador;
    
    printf("Informe um número.\n");
    scanf("%d", &numero);
    
    //printf("Informe os valores dos quinze elementos do array.\n");
    
    for(i = 0; i < 5; i++){
        
        //scanf("%d", &array[i]);
        array[i];
        
    }

    for(i = 0; i < 5; i++){
        
        //printf("%d", array[i]);
        if(numero == array[i]){
            
         contador++;   
            
        }
        
    }
    
    printf("O número %d aparece %d vez(es) no array.", numero, contador);
    
    return 0;
}
