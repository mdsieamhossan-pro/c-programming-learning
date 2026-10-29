/* Topic 1: Sum of Natural Numbers Using For Loop
   Calculate the sum of natural numbers from 1 to n. */

#include <stdio.h>
int main() {
    int n, sum = 0;

printf("Enter a number: ");
    scanf("%d", &n);
 for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
     printf("Sum of natural numbers = %d\n", sum);
  return 0;
}



/* Topic 2: Sum of Natural Numbers Using While Loop
   Calculate the sum of natural numbers from 1 to n. */

#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
 while (i <= n) {
        sum = sum + i;
        i++;
    }
    printf("Sum of natural numbers = %d\n", sum);
  return 0;
}

/* Topic 3: Sum of Natural Numbers Using Do-While Loop
   Calculate the sum of natural numbers from 1 to n. */

#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
 if (n >= 1) {
        do {
            sum = sum + i;
            i++;
        } while (i <= n);
    }
    printf("Sum of natural numbers = %d\n", sum);
  return 0;
}



/* Topic 4: Sum of Even Numbers Using For Loop
   Calculate the sum of even numbers from 1 to n. */

#include <stdio.h>
int main() {
    int n, sum = 0;

printf("Enter a number: ");
    scanf("%d", &n);
 for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }
     printf("Sum of even numbers = %d\n", sum);
  return 0;
}



/* Topic 5: Sum of Even Numbers Using While Loop
   Calculate the sum of even numbers from 1 to n. */

#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;

  printf("Enter a number: ");
    scanf("%d", &n);

  while (i <= n) {
        if (i % 2 == 0) {
            sum = sum + i;
        }

        i++;
    }
    printf("Sum of even numbers = %d\n", sum);
    return 0;
}


/* Topic 6: Sum of Even Numbers Using Do-While Loop
   Calculate the sum of even numbers from 1 to n. */

#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n >= 1) {
        do {
            if (i % 2 == 0) {
                sum = sum + i;
            }
            i++;
        } while (i <= n);
    }
  printf("Sum of even numbers = %d\n", sum);
  return 0;
}



/* Topic 7: Sum of Odd Numbers Using For Loop
   Calculate the sum of odd numbers from 1 to n. */

#include <stdio.h>
int main() {
    int n, sum = 0;
  printf("Enter a number: ");
    scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum = sum + i;
        }
    }
  printf("Sum of odd numbers = %d\n", sum);
  return 0;
}


/* Topic 8: Sum of Odd Numbers Using While Loop
   Calculate the sum of odd numbers from 1 to n. */

#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n) {
        if (i % 2 != 0) {
            sum = sum + i;
        }
        i++;
    }
  printf("Sum of odd numbers = %d\n", sum);
   return 0;
}



/* Topic 9: Sum of Odd Numbers Using Do-While Loop
   Calculate the sum of odd numbers from 1 to n. */

#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 1) {
        do {
            if (i % 2 != 0) {
                sum = sum + i;
            }
     i++;
        } while (i <= n);
    }
  printf("Sum of odd numbers = %d\n", sum);
   return 0;
}
