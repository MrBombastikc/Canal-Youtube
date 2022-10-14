/******************************************************************************

                            Cesar Cruz Muñoz.
                Programa realizado para el canal de youtube
CANAL: Cesar Cruz Muñoz    Video: Verificador de numeros primos programa en C.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // Verificar si cierto numero es primo o no
    int numero;
    int contador = 2;
    int flag = 0;
    
    printf("Numero a verificar:");
    scanf("%d", &numero);
    
    while(contador<numero && flag == 0){
        if(numero%contador == 0){
            flag = 1;
        }
        contador = contador + 1;
    }
    if(flag==0){
        printf("El numero %d es primo", numero);
    }else{
        printf("El numero %d NO es primo", numero);
    }

    return 0;
}