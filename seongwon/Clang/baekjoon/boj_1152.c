#include <stdio.h>

int main()
{
    char string_input[1000000];
    int count = 0;

    scanf ("%s", string_input);

    for (int i = 0; string_input[i] == 0 ; i++){
        if (i != 0 && string_input[i] == ' '){
            count++;
        }
    }
    printf ("%d", count);
}

