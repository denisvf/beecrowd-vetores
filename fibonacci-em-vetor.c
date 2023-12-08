#include <stdio.h>
int main()
{
    int n, testes;
    long long int sequencia[100], fibonacci;
    scanf("%i", &testes);

    for (int i = 0; i < testes; i++)
    {
        scanf("%i", &n);

        sequencia[0] = 0;
        sequencia[1] = 1;

        if (n == 0)
        {
            fibonacci = 0;
        }
        if (n == 1 || n == 2)
        {
            fibonacci = 1;
        }
        for (int j = 2; j <= n; j++)
        {
            sequencia[j] = sequencia[j-1] + sequencia[j-2];
            // printf("sequencia = %i \n", sequencia[j]);
            fibonacci = sequencia[j];
        }

    printf("Fib(%i) = %lli\n", n, fibonacci);

    }

    return 0;
}
