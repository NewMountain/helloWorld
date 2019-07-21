#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// https://www.youtube.com/watch?v=KJgsSFOSQv0
// Stopped at: 56:00

// Let's make a struct
struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

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

    // CONSTANTS
    const int NUM = 5;

    // declare a variable for the user age
    int age;

    printf("Hey user: enter your age:\n");

    scanf("%d", &age);

    printf("You are %d years old.\n", age);

    // Suppose you wanted to get a line
    char someText[255];
    printf("Write some text yo: ");
    // Grabs a line of text
    // Note, this isn't a pointer
    fgets(someText, 255, stdin);

    printf("You said:\n%s", someText);

    // Math with two integers returns an integer.
    // Math with a float coerces all to float
    // Fun path functions
    int twoCubed = pow(2, 3);
    int isTen = sqrt(100);

    // ceil() rounds a number up
    // floor() rounds a number down

    printf("twoCubed is %d.\n", twoCubed);
    printf("isTen is %d.\n", isTen);

    printf("This is a %s. This is an %c. This is a %f and this is a %d", characterName, grade, sortaPi, integer);

    printf("There was once a man named %s.\n", characterName);
    printf("He was %d years old.\n", characterAge);
    printf("He really liked the name %s.\n", characterName);
    printf("but did not like being %d.\n", characterAge);

    // Declare the struct
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    //
    strcpy(student1.name, "Jim");
    strcpy(student1.name, "Business");

    return 0;
};
