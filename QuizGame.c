// Note :- we can't assign string values using = so instead we have to use strcpy()...

#include <stdio.h>
#include <string.h>

// Global Variables...
float correct = 0, incorrect = 0, score = 0, total_mcq = 5, percentage;
char u_ans1, u_ans2, u_ans3, u_ans4, u_ans5;
char question_1[500], answer_1, question_2[500], answer_2, question_3[500], answer_3, question_4[500], answer_4, question_5[500], answer_5;
char q1_opt_1[100], q1_opt_2[100], q1_opt_3[100], q1_opt_4[100];
char q2_opt_1[100], q2_opt_2[100], q2_opt_3[100], q2_opt_4[100];
char q3_opt_1[100], q3_opt_2[100], q3_opt_3[100], q3_opt_4[100];
char q4_opt_1[100], q4_opt_2[100], q4_opt_3[100], q4_opt_4[100];
char q5_opt_1[100], q5_opt_2[100], q5_opt_3[100], q5_opt_4[100];
int check_ans1 = 0, check_ans2 = 0, check_ans3 = 0, check_ans4 = 0, check_ans5 = 0;

// QUESTION-1 :-

// Function to Check User's Answer and Correct Answer for Qestion-1 only
int check_ans1_func()
{
    if (u_ans1 == answer_1)
    {
        correct++;
        check_ans1 = 1;
    }
    else
    {
        incorrect++;
        check_ans1 = 0;
    }
    return 0;
}

// Function to ask user for their ans. and store it for Question-1 Only
void user_answer1()
{
    printf("Write Your Answer: ");
    scanf("%c", &u_ans1);
}

// Function to display Question and its Options For Question-1 Only
void question_1_func()
{

    strcpy(question_1, "Who developed the C programming language?");

    strcpy(q1_opt_1, "James Gosling");
    strcpy(q1_opt_2, "Dennis Ritchie");
    strcpy(q1_opt_3, "Bjarne Stroustrup");
    strcpy(q1_opt_4, "Guido van Rossum");

    answer_1 = 'B';

    printf("\nQuestion-1: %s\n\n", question_1);
    printf("A. %s            B. %s\n", q1_opt_1, q1_opt_2);
    printf("C. %s        D. %s\n", q1_opt_3, q1_opt_4);
}

// QUESTION-2 :-

// Function to Check User's Answer and Correct Answer for Qestion-2 only
int check_ans2_func()
{
    if (u_ans2 == answer_2)
    {
        correct++;
        check_ans2 = 1;
    }
    else
    {
        incorrect++;
        check_ans2 = 0;
    }
    return 0;
}

// Function to ask user for their ans. and store it for Question-2 Only
void user_answer2()
{
    printf("Write Your Answer: ");
    scanf(" %c", &u_ans2);
}

// Function to display Question and its Options For Question-2 Only
void question_2_func()
{

    strcpy(question_2, "Which type of programming language is C?");

    strcpy(q2_opt_1, "High-level language");
    strcpy(q2_opt_2, "Low-level language");
    strcpy(q2_opt_3, "Middle-level language");
    strcpy(q2_opt_4, "Machine language");

    answer_2 = 'C';

    printf("\n\nQuestion-2: %s\n\n", question_2);
    printf("A. %s          B. %s\n", q2_opt_1, q2_opt_2);
    printf("C. %s        D. %s\n", q2_opt_3, q2_opt_4);
}

// QUESTION-3 :-

// Function to Check User's Answer and Correct Answer for Qestion-3 only
int check_ans3_func()
{
    if (u_ans3 == answer_3)
    {
        correct++;
        check_ans3 = 1;
    }
    else
    {
        incorrect++;
        check_ans3 = 0;
    }
    return 0;
}

// Function to ask user for their ans. and store it for Question-3 Only
void user_answer3()
{
    printf("Write Your Answer: ");
    scanf(" %c", &u_ans3);
}

// Function to display Question and its Options For Question-3 Only
void question_3_func()
{

    strcpy(question_3, "What is the extension of a C language source file?");

    strcpy(q3_opt_1, ".cpp");
    strcpy(q3_opt_2, ".java");
    strcpy(q3_opt_3, ".c");
    strcpy(q3_opt_4, ".py");

    answer_3 = 'C';

    printf("\n\nQuestion-3: %s\n\n", question_3);
    printf("A. %s      B. %s\n", q3_opt_1, q3_opt_2);
    printf("C. %s        D. %s\n", q3_opt_3, q3_opt_4);
}

// QUESTION-4 :-

// Function to Check User's Answer and Correct Answer for Qestion-4 only
int check_ans4_func()
{
    if (u_ans4 == answer_4)
    {
        correct++;
        check_ans4 = 1;
    }
    else
    {
        incorrect++;
        check_ans4 = 0;
    }
    return 0;
}

// Function to ask user for their ans. and store it for Question-4 Only
void user_answer4()
{
    printf("Write Your Answer: ");
    scanf(" %c", &u_ans4);
}

// Function to display Question and its Options For Question-4 Only
void question_4_func()
{

    strcpy(question_4, "Which of the following is used to translate C code into machine code?");

    strcpy(q4_opt_1, "Browser");
    strcpy(q4_opt_2, "Compiler");
    strcpy(q4_opt_3, "Editor");
    strcpy(q4_opt_4, "Operating System");

    answer_4 = 'B';

    printf("\n\nQuestion-4: %s\n\n", question_4);
    printf("A. %s       B. %s\n", q4_opt_1, q4_opt_2);
    printf("C. %s        D. %s\n", q4_opt_3, q4_opt_4);
}

// QUESTION-5 :-

// Function to Check User's Answer and Correct Answer for Qestion-5 only
int check_ans5_func()
{
    if (u_ans5 == answer_5)
    {
        correct++;
        check_ans5 = 1;
    }
    else
    {
        incorrect++;
        check_ans5 = 0;
    }
    return 0;
}

// Function to ask user for their ans. and store it for Question-5 Only
void user_answer5()
{
    printf("Write Your Answer: ");
    scanf(" %c", &u_ans5);
}

// Function to display Question and its Options For Question-5 Only
void question_5_func()
{

    strcpy(question_5, "Which of the following is NOT a feature of C language?");

    strcpy(q5_opt_1, "Portability");
    strcpy(q5_opt_2, "Structured programming");
    strcpy(q5_opt_3, "Object-oriented programming");
    strcpy(q5_opt_4, "Fast execution");

    answer_5 = 'C';

    printf("\n\nQuestion-5: %s\n\n", question_5);
    printf("A. %s                        B. %s\n", q5_opt_1, q5_opt_2);
    printf("C. %s        D. %s\n", q5_opt_3, q5_opt_4);
}

void intro()
{
    printf("\nC-Language %.0f-Mcqs Test...", total_mcq);
    printf("\nNote :- Each Question Contains 1-marks.\n");
}

void report()
{
    score = total_mcq - incorrect;
    percentage = (score / total_mcq) * 100;

    printf("\n\nFinal Report Of Your Test...\n");
    printf("\nPercentage : %.2f (%.0f out of %.0f)", percentage, score, total_mcq);
    printf("\nCorrect Questions : %.0f", correct);
    printf("\nIncorrect Questions : %.0f", incorrect);
    printf("\n\nIncorrectly attemted questions's correct answers...");
    if(check_ans1 == 0)
    {
        printf("\nQ-1 : %c", answer_1);
    }
    if(check_ans2 == 0)
    {
        printf("\nQ-2 : %c", answer_2);
    }
    if(check_ans3 == 0)
    {
        printf("\nQ-3 : %c", answer_3);
    }
    if(check_ans4 == 0)
    {
        printf("\nQ-4 : %c", answer_4);
    }
    if(check_ans5 == 0)
    {
        printf("\nQ-5 : %c", answer_5);
    }
}

// Main Function
int main()
{
    intro();

    // Question - 1
    question_1_func();
    user_answer1();
    check_ans1_func();

    // Question - 2
    question_2_func();
    user_answer2();
    check_ans2_func();

    // Question - 3
    question_3_func();
    user_answer3();
    check_ans3_func();

    // Question - 4
    question_4_func();
    user_answer4();
    check_ans4_func();

    // Question - 5
    question_5_func();
    user_answer5();
    check_ans5_func();

    report();

    return 0;
}
