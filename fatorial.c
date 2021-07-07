#include <stdio.h>
#include <stdlib.h>

int main(){
        // Declarando variaveis
        int num;
        int fac = 1;

        // Lendo valores
        printf("Digite um numero para ver seu fatorial: ");
        scanf("%d", &num);

        // Verificando se é negativo
        if(num < 0){
                num = abs(num);
        }

        // Calculando o fatorial
        for(int i = 1; i <= num; i++){
                fac = fac * i;
        }

        // Mostrando o fatorial de num
        printf("O fatorial de %d é %d.\n", num, fac);

        // Finalizando a execução.
        return 0;

}
