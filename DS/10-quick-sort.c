/* 
Lab Class- 5 (14-08-2022)
Group- Q (Roll: 61-125)
11. Quick Sort
*/

#include<stdio.h>

void quicksort(int number[25], int first, int last)
{
    int i, j, pivot, temp;

    if(first < last)
    {
        pivot = first;
        i = first;
        j = last;

        while(i < j)
        {
            while(number[i] <= number[pivot] && i < last)
                i++;

            while(number[j] > number[pivot])
                j--;

            if(i < j)
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }

        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        quicksort(number, first, j - 1);
        quicksort(number, j + 1, last);
    }
}

int main()
{
    int i, count, number[25];

    printf("How Many Elements Are You Going To Enter: ");
    scanf("%d", &count);

    printf("Enter %d Elements: ", count);

    for(i = 0; i < count; i++)
        scanf("%d", &number[i]);

    quicksort(number, 0, count - 1);

    printf("Order of Sorted Elements: ");

    for(i = 0; i < count; i++)
        printf("%d ", number[i]);

    printf("\n");

    return 0;
}



/*
Sample Input/Output:

How Many Elements Are You Going To Enter: 5
Enter 5 Elements: 40 50 10 30 20
Order of Sorted Elements: 10 20 30 40 50

*/
