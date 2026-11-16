#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("\n===== C PROGRAMMING QUIZ =====\n");

    // Question 1
    printf("\n1. Who developed C language?\n");
    printf("1. James Gosling\n");
    printf("2. Dennis Ritchie\n");
    printf("3. Bjarne Stroustrup\n");
    printf("4. Guido van Rossum\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong Answer!\n");
    }

    // Question 2
    printf("\n2. Which symbol ends a C statement?\n");
    printf("1. .\n");
    printf("2. :\n");
    printf("3. ;\n");
    printf("4. ,\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong Answer!\n");
    }

    // Question 3
    printf("\n3. Which function is used for output?\n");
    printf("1. scanf()\n");
    printf("2. printf()\n");
    printf("3. main()\n");
    printf("4. gets()\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong Answer!\n");
    }

    // Question 4
    printf("\n4. Which data type stores decimal values?\n");
    printf("1. int\n");
    printf("2. char\n");
    printf("3. float\n");
    printf("4. void\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong Answer!\n");
    }

    // Question 5
    printf("\n5. Which loop executes at least once?\n");
    printf("1. for\n");
    printf("2. while\n");
    printf("3. do-while\n");
    printf("4. None\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong Answer!\n");
    }

    // Final Result
    printf("\n===== QUIZ RESULT =====\n");
    printf("Total Questions: 5\n");
    printf("Correct Answers: %d\n", score);
    printf("Wrong Answers: %d\n", 5 - score);
    printf("Your Score: %d / 5\n", score);

    if(score == 5)
        printf("Excellent Performance!");
    else if(score >= 3)
        printf("Good Job!");
    else
        printf("Keep Practicing!");

    return 0;
}