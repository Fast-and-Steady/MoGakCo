#include <stdio.h>


void check_sound(char *my_sound, char *doctor_sound)
{
    int count_my_sound = 0, count_doctor_sound = 0;

    while (*my_sound != 'h')
    {
        count_my_sound++;
        my_sound++;
    }
    while (*doctor_sound != 'h')
    {
        count_doctor_sound++;
        doctor_sound++;
    }
    if (count_my_sound >= count_doctor_sound)
        printf("go");
    else
        printf("no");
}

void voice_init(char *my_sound, char *doctor_sound)
{
    scanf("%s", my_sound);
    getchar();
    scanf("%s", doctor_sound);
}

int main()
{
    char my_sound[1000], doctor_sound[1000];

    voice_init(my_sound, doctor_sound);
    check_sound(my_sound, doctor_sound);
}
