#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// https://www.youtube.com/watch?v=KJgsSFOSQv0
int main()
{
    // String appears to be a list of char
    char characterName[] = "John";

    // Age of out character :: Int
    int characterAge = 35;

    // Let's talk about Dtypes in C

    // Integer
    int integer = 40;

    // Decimal Types

    // Double
    double gpa = 3.97;

    // Float
    float sortaPi = 3.14;

    // Characters: You can store one single character
    // Note characters are in single quotes.
    char grade = 'A';

    // String: basically an array of char
    // Note double quotes here
    char phrase[] = "This is a phrase";

    // Math with two integers returns an integer.
    // Math with a float coerces all to float
    // Fun path functions
    int twoCubed = pow(2, 3);

    printf("twoCubed is %d.\n", twoCubed);

    printf("This is a %s. This is an %c. This is a %f and this is a %d", characterName, grade, sortaPi, integer);

    printf("There was once a man named %s.\n", characterName);
    printf("He was %d years old.\n", characterAge);
    printf("He really liked the name %s.\n", characterName);
    printf("but did not like being %d.\n", characterAge);

    return 0;
}
