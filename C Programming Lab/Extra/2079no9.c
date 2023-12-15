#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *input, *even, *odd;
    int n;

    input = fopen("input.txt", "r");
    odd = fopen("odd.txt", "w");
    even = fopen("even.txt", "w");

    while (fscanf(input, "%d", &n) != EOF)
    {
        if (n % 2 == 0)
            fprintf(even, "%d\n", n);
        else
            fprintf(odd, "%d\n", n);
    }

    fclose(input);
    fclose(odd);
    fclose(even);
    
    getch();
    return 0;
}
