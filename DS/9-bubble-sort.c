//5. A C Program for Bubble Sort Algorithm. (17-07-2022)

#include<stdio.h>

int main()
{
    int k, ptr, data[33], i, n, temp;

    printf("How Many Numbers: ");
    scanf("%d", &n);

    printf("Enter %d Numbers: ", n);

    for(i = 1; i <= n; i++)
        scanf("%d", &data[i]);

    for(k = 1; k <= n - 1; k++)
    {
        ptr = 1;

        while(ptr <= n - k)
        {
            if(data[ptr] > data[ptr + 1])
            {
                temp = data[ptr];
                data[ptr] = data[ptr + 1];
                data[ptr + 1] = temp;
            }

            ptr++;
        }
    }

    printf("The Sorted Data is: ");

    for(k = 1; k <= n; k++)
        printf("%d ", data[k]);

    printf("\n");

    return 0;
}


// Sample Output:

// How Many Numbers: 5
// Enter 5 Numbers: 30 20 50 10 40
// The Sorted Data is: 10 20 30 40 50

