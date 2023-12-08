#include <stdio.h>
int main(){
    
    int n[10], numero;

    scanf("%i", &numero);

    for (int i = 0; i <= 9; i++)
    {
        n[i] = numero;
        numero = numero * 2;
        printf("N[%i] = %i\n",i, n[i]);
    }
    return 0;
}