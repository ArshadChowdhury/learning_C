#include <stdio.h>
#include <stdlib.h>



double makeCube(double target_number);

int minMax (int num1, int num2, int num3);

int main()
{
    char characterName[] = "John";
    int characterAge = 70;

    printf("There was a man named %s\nHe was %d years old\n", characterName, characterAge);
    characterAge = 20;
    printf("He was %d years old\n", characterAge);
    printf("He really liked the name %s\n", characterName);
    characterAge = 30;
    printf("But he did not like being %d\n", characterAge);

    int luckyNumbers[10];
    luckyNumbers[0] = 90;
    printf("%d\n", luckyNumbers[0]);
    sayHi("Arshad", 25);
    sayHi("Sazzad", 30);
    sayHi("Maruf", 35);

    printf("Answer to cube of input is : %f\n", makeCube(4.0));
    printf("Bigger number among those two is : %d\n", minMax(60, 30, 50));


    double num1;
    double num2;
    char userOperator;

    printf("Enter your first number :");
    scanf("%lf", &num1);
    printf("Enter your operator :");
    scanf(" %c", &userOperator);
    printf("Enter your second number :");
    scanf("%lf", &num2);

    if (userOperator == '+')
    {
        printf("%f", num1 + num2);
    }
    else if ( userOperator == '-')
    {
        printf("%f", num1 - num2);
    }
    else if (userOperator == '*')
    {
        printf("%f", num1 * num2);
    }
    else if(userOperator == '/')
    {
        printf("%f", num1 / num2);
    }
    else
    {
        printf("Enter a valid operator");
    }


    return 0;
}

void sayHi(char name[], int age)
{
    printf("Hello %s, you are %d years old\n", name, age);
}

double makeCube(double target_number)
{

    double result = target_number  * target_number * target_number;

    return result;

}

int minMax (int num1, int num2, int num3)
{


    if(num1 > num2 && num1> num3)
    {
        return num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

