#include <stdio.h>
#include <stdlib.h>

// https://www.youtube.com/watch?v=KJgsSFOSQv0
int main()
{
    // Let's make some variables
    // String appears to be a list of char
    char characterName[] = "John";
    int characterAge = 35;

    printf("There was once a man named %s.\n", characterName);
    printf("He was %d years old.\n", characterAge);
    printf("He really liked the name %s.\n", characterName);
    printf("but did not like being %d.\n", characterAge);

    return 0;
}
