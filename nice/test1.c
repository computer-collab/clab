#include <stdio.h>

int main() {
    int result = 0, cache, num;
    scanf("%d", &num);

start:
    while (num > 0) {
        cache = num % 10;
        num = num / 10;
        result = result + cache;
    }

    printf("%d\n", result);

    if (result == 1 || result == 0) {
        // do nothing, proceed to check final result
    } 
    else if (result > 1) {
        num = result;
        result = 0;
        goto start;
    }

    if (result == 1)
        printf("1");
    else
        printf("0");

    return 0;
}
/*

char and int 
char is letters and int is numbers
data types are the boxes that hold the values
while char and int says wh
arrays are the collections of data types in a single variable  
example:
char *sudentNames[rollNumber];




*/