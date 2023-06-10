#include <stdio.h>
#include <stdlib.h>



double makeCube(double target_number);

int minMax (int num1, int num2, int num3);


struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
int num = 4;
printf("%p" , &num);
    int nums[3][4] =
    {
        {1,2,3,4},
        {5,6,7,8},
        {9, 10, 11,12}
    };

    int i, j;

    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("%p, ", &nums[i][j]);
        }
        printf("\n");
    }










    /*

      int i = 1;

      while(i <= 5)
      {
          printf("%d\n", i);
          i++;
      }

      for(int i=0; i<=5; i++ )
      {
          printf("%d\n", i);
      }

      int secret_number = 5;
      int guess;
      int guessCount = 0;
      int guessLimit = 3;
      int outOfGuesses = 0;

      while(guessCount < guessLimit){
          printf("Guess the secret number : ");
          scanf("%d", &guess);
          if(guess == secret_number)
          {
              printf("You win finally, %d is the correct number\n", guess);
          }
          else
          {
              printf("Try again\n");
          }
          guessCount++;
      }


      int index = 3;
      while(index >= 0)
      {
          printf("Guess the secret number : ");
          scanf("%d", &guess);

          if(guess == secret_number)
          {
              printf("You win finally, %d is the correct number\n", guess);
          }
          else
          {
              printf("Try again, you have %d chances left\n", index);
          }

          index--;
      }
      */


    /*
     struct Student student1;
     student1.age = 22;
     student1.gpa = 3.53;
     strcpy(student1.major, "Honors");
     strcpy(student1.name, "Arshad");

     struct Student student2;
     student2.age = 23;
     student2.gpa = 3.83;
     strcpy(student2.major, "Chemistry");
     strcpy(student2.name, "Minha");

     printf("%f\n", student1.gpa);
     printf("%s\n", student1.name);

     printf("%f\n", student2.gpa);
     printf("%s\n", student2.name);


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

     printf("\nHello World again");
      */

    /* char grade;
    printf("Enter your grade : ");
    scanf("%c", &grade);

    switch(grade)
    {
    case 'A' :
        printf("You did great!");
        break;
    case 'B' :
        printf("You did good!");
        break;
    case 'C' :
        printf("You did okay!");
        break;
    case 'D' :
        printf("You could've done better!");
        break;
    case 'F' :
        printf("You failed!");
        break;
    default :
        printf("Please enter a valid grade");
    }

     */



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

