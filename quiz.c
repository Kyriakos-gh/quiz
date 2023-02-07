/*
    quiz.c : C programming language tiny quiz game!
    Kyriakos, 24/4/2020
*/

#include <stdio.h>

// Variables that hold question number and the number of correct answers
unsigned short int question_number = 0;
unsigned short int correct_answers = 0;

// See the comment in the definition of quiz() after main()
void quiz(const char *question, const char *answer_1, const char *answer_2, const char *answer_3, const char *answer_4, const unsigned short int answer);

int main(void)
{
    printf("\nWelcome to the C language game! Choose from 1 to 4\n");

    // Let's start the questions!

    quiz("Who and when created the C language?", \
         "Linus Torvalds in 1991", \
         "Dennis Ritchie in 1972", \
         "Bjarne Stroustrup in 1985", \
         "Bill Gates in 1975", \
         2);

    quiz("A header file:", \
         "Contains statements that can be used by the rest of the code", \
         "Contains the object code of the program", \
         "Contains instructions on how the compiler works", \
         "It just contains some comments about how the program works", \
         1);

    quiz("What is a main() function?", \
         "Prints the contents of the memory used by the program", \
         "It is a function that the programmer defines if he wants", \
         "It's not a function, it's a global variable", \
         "It is the function that is always called first when the program starts", \
         4);

    quiz("What is the use of void before the name in a function definition?", \
         "Indicates that the function returns a character as a value", \
         "Indicates that the program is for the C++ language", \
         "Indicates that the function does not return a value", \
         "Indicates that the function returns a pointer", \
         3);

    quiz("What does for(;;) {.. } do?", \
         "It is a loop that repeats the following commands only twice", \
         "It is a loop that executes the following commands only once", \
         "It is a loop that continuously repeats the commands that follow", \
         "It is a loop that blocks the commands that follow", \
         3);

    quiz("What is a pointer in C?", \
         "It is a variable whose value is the memory address of another object", \
         "It is a character type variable", \
         "It is a generic type variable", \
         "It is variable used to store real numbers", \
         1);

    quiz("What is the malloc() function for?", \
         "Prints various memory information to the console", \
         "Allocates the requested memory for use via a pointer", \
         "Erases the contents of memory", \
         "It is a garbage collector", \
         2);

    quiz("The union:", \
         "Concatenates alphanumerics", \
         "Combines structures", \
         "It is a special type array for using only integers", \
         "It stores different types of data in the same memory area", \
         4);

    // We print the number of correct answers
    printf("\nYou answered %u from %u questions correctly!\n\n", correct_answers, question_number);

    return 0;
}

/* Function that asks the question, the possible answers 1 through 4, holds the number
   of the correct answer, accepts input from the user, and returns the result */
void quiz(const char *question, const char *answer_1, const char *answer_2, const char *answer_3, const char *answer_4, const unsigned short int answer)
{
    // In this variable we will later store the user's choice
    short int user_answer;

    // We print the question and the possible answers
    printf("\n%s\n\n 1. %s\n 2. %s\n 3. %s\n 4. %s\n\n", question, answer_1, answer_2, answer_3, answer_4);

    // We ask the user for the answer and store it in the variable
    scanf("%1d", &user_answer);

    // Is the answer given by the user correct or incorrect? We print the answer
    if(user_answer == answer) {
        printf("\nYou answered correctly!\n\n");
        // User answered correctly so we increment the variable with the number of correct answers by one
        correct_answers++;
    }
    else {
        printf("\nWrong, the correct one is %u\n\n", answer);
    }

    // We increment the number of displayed questions
    question_number++;
}
