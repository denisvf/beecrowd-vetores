#include <stdio.h>
int main()
{
    int coluna;
    double matriz[12][12], resultado;
    char operacao;

    scanf("%i", &coluna);
    scanf("\n%c", &operacao);


    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf ("%lf", &matriz[i][j]);
        }
        resultado = resultado + matriz[i][coluna];
    }

    if (operacao == 'M')
    {
            resultado = resultado/12;
            printf("%.1lf\n", resultado);
    }
    if (operacao == 'S')
    {
        printf("%.1lf\n", resultado);
    }
    return 0;
}