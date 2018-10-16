// Write a program to read n number of real values in an array and then shows a menu that let the user:
// - Compute the sum of the given numbers.
// - Compute the average of the given numbers.
// - Display the smallest value of the given numbers and the number of the cell where it is stored.
// - Display the biggest value of the given numbers and the number of the cell where it is stored.
//
// Made by Jim Holguín on October 15th, 2018.

#include <stdio.h>

int sum (int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i ++)
    {
        sum += a[i];
    }
    return sum;
}

double av (int a[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i ++)
    {
        sum += a[i];
    }

    double avg = sum/n;
    return avg;
}

void maxval (int a[] , int n)
{
    int max = a[0];
    int loc = 1;

    for (int i = 0; i < n; i++ )
    {
        if (a[i] > max)
        {
            max = a [i];
            loc = i+1;
        }
    }
    printf ("Maximum value of array: %i; Location: %i", max, loc);
}

void minval (int a[] , int n)
{
    int min = a[0];
    int loc = 1;
    for (int i = 0; i < n; i++ )
    {
        if (a[i] < min)
        {
            min = a [i];
            loc = i+1;
        }
    }
    printf ("Minimum value of array: %i; Location: %i", min, loc);
}

int main(void)
{
    int n;
    int op;
    int i;

    printf ("Give me N.");
    scanf ("%i", &n);
    int a[n];

    for ( i = 0; i < n; i++) {
        printf ("Element %i:", i + 1);
        scanf ("%i", &a[i]);
    }

    do
    {
        printf ("\n\nWhat would you like to do?\n");
        printf ("1. Get sum.\n");
        printf ("2. Get average.\n");
        printf ("3. Get maximum value.\n");
        printf ("4. Get minimum value.\n");
        printf ("0. Get away from here\n");
        scanf ("%i", &op);

        switch (op)
        {
            case 0:
                printf ("Sad to see you go.\nWas sorta hoping that you'd stay.");
                return 0;
                break;

            case 1:
                printf ("Sum: %i", sum (a,i));
                break;

            case 2:
                printf ("Average: %lf", av (a, i));
                break;

            case 3:
                maxval (a, i );
                break;

            case 4:
                minval (a, i);
                break;

            default:
                printf ("Wrong, mate.");
                break;
        }
    }
    while (op!=0);

}