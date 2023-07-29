#include<stdio.h>
int main()
{
      int marks[10];
    int i, total = 0;
    float average;

    printf("Enter the 10 marks:\n");

    // Reading the marks from the user
    for (i = 0; i < 10; i++)
    {
        printf("Mark %d: ", i+1 );
        scanf("%d", &marks[i]);
        total+=marks[i];
    }

    average = (float)total / 10;

    printf("\nTotal marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    if (average < 50) {
        printf("Fail!\n");
    } else {
        printf("Pass!\n");
    }


}
