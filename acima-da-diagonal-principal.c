#include <stdio.h>
int main(){
    
    int x[10];

    for (int i = 0; i <= 9; i++)
    {
        scanf("%i", &x[i]);
        
        if (x[i] <= 0)
        {
            x[i] = 1;
        }
        printf("X[%i] = %i\n",i, x[i]);
    }
    return 0;
}