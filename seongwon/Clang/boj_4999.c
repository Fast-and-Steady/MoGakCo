#include <stdio.h>

int main()
{
    char[100] my_sound, doctor_sound;
    int count_my_sound, count_doctor_sound;

    scanf("%s", &my_sound);
    getchar();
    scanf("%s", &doctor_sound);

    while (my_sound != '\0' && my_sound != 'h')
    {
        count_my_sound++;
        my_sound++;
    }
    while (*doctor_sound != '\0' && my_sound != 'h')
    {
        count_doctor_sound++;
        doctor_sound++;
    }
}
