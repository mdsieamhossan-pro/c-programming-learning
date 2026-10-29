// Break: Print numbers from 1 to 10;
#include <stdio.h>
int main() {
int i;
for (i = 1; i <= 10; i++) {
    if (i == 5) {
        break;
    }
   printf("%d ", i);
}
return 0;
}
/* Output: 1 2 3 4

 
Continue: Print numbers from 1 to 10;*/
#include <stdio.h>
int main() {
int i;
for (i = 1; i <= 10; i++) {
    if (i == 5) {
        continue;
    }
   printf("%d ", i);
}
return 0;
}

// Output: 1 2 3 4 6 7 8 9 10
