//Q3 - Write program to read 5 numbers from user and print their average.
//Name - Shrivats Agrawal

#include<stdio.h>

int main() {
    int arr[5], i, sum = 0, avg;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    //caluculating the sum of 5 no.s
    for(i = 0; i < 5; i++) {
        sum += arr[i];
    }

    //caluculating the avg of 5 no.s
    avg = sum/5;

    printf("The avergae of the 5 no.s entered is : %d\n", avg);

    return 0;

}

/*
OUTPUT ::
divyanshi-agr@DESKTOP-Q7MB9VU /mnt/c/Users/divsa/Documents/Shrivats Own $ ./q3
Enter 5 numbers:
4
5
7
6
9
The avergae of the 5 no.s entered is : 6

*/