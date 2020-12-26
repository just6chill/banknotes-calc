#include <stdio.h>
#include <stdlib.h>

int main()
{
    int banknotes[] = {5, 10, 20, 50, 100, 200, 500};
    size_t s = sizeof(banknotes)/sizeof(banknotes[0]);
    int number = 0;
    int sum = 0;
    int i;

    for(i = 0; i < s; i++)
    {
        printf("number of %d euro banknotes: ", banknotes[i] );
        scanf("%d", &number);
        banknotes[i] *= number;
        sum += banknotes[i];
    }

    printf("\nthat are %d euro \n", sum);
    return 0;
}
