#include <stdio.h>
#include <string.h>

int main() {
    int i, len;
    char str[50], copy[50];
    char *st = str, *cpy = copy;

    printf("Enter string:");
    gets(str);

    for (i = 0; *st != '\0'; i++) // Change '\n' to '\0'
        st++;
    len = i;
    st = &str[0];

    for (i = 0; i < len; i++) {
        // Change the conditions to use logical operators '&&' and fix the ASCII range checks
        if ((*st >= 'A' && *st <= 'Z') || (*st >= 'a' && *st <= 'z')) {
            *cpy = *st;
            cpy++;
        }
        st++;
    }
    
    *cpy = '\0'; // Add a null terminator to the copied string

    puts(copy);
    return 0;
}
