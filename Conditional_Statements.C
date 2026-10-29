/* Topic 1: if statement
If the condition is true, it will print a message */

#include <stdio.h>
int main() {
    int marks = 85;

    if (marks >= 80) {
        printf("You got a good result.\n");
    }
 return 0;
}


/* Topic 2 : if-else statement
provide a different output depending on whether the condition is true or false */

#include <stdio.h>
int main() {
    int number = 7;

    if (number % 2 == 0) {
        printf("Even number\n");
    } else {
        printf("Odd number\n");
    }
   return 0;
} 


/* topic 3: else if statement
Will check multiple conditions */

#include <stdio.h>
int main() {
    int marks = 85;

    if (marks >= 80) {
        printf("Grade A\n");
    } else if (marks >= 60) {
        printf("Grade B\n");
    } else if (marks >= 40) {
        printf("Grade C\n");
    } else {
        printf("Grade F\n");
    }
  return 0;
}


/* Topic 4: Nested if statement
An 'if' inside another 'if' */

#include <stdio.h>
int main() {
    int age = 19;
    int marks = 60;

    if (age >= 18) {
        if (marks >= 40) {
            printf("Eligible for exam\n");
        }
    }
  return 0;
}

