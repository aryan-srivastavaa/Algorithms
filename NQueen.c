//N-Queen Problem
#include <stdio.h>
int place(int arr[4][4], int i, int j, int n)
{
    //checking for column
    for (int a = j; a >= 0; a++)
    {
        if (arr[i][j] == 1)
        {
            return 0;
        }
    }
    //checking for left-diagonal
    int a = i;
    int b = j;
    while (a >= 0 && b >= 0)
    {
        if (arr[a][b] == 1)
        {
            return 0;
        }
        a--;
        b--;
    }
    //checking for right diagonal
    a = i;
    b = j;
    while (a >= 0 && b < n)
    {
        if (arr[a][b] == 1)
        {
            return 0;
        }
        a--;
        b++;
    }
    return 1;
}
int Nqueen(int arr[4][4], int i, int n)
{
    if (i == n)
    {
        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < n; y++)
            {
                if (arr[x][y] == 1)
                {
                    printf("Q ");
                }
                else
                {
                    printf("_ ");
                }
            }
            printf("\n");
        }
        return 1;
    }
    // if (i < n)
    // {
    for (int j = 0; j < n; j++)
    {
        if ( place(arr, i, j, n) == 1)
        {
            arr[i][j] = 1;

            int ans = Nqueen(arr, i + 1, n);
            if (ans == 1)
            {
                return 1;
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }

    // }
    return 0;
}
int main()
{
    int arr[4][4] = {0};
    int n = 4;
    //We have to find where we can place queens on a 4*4 board
    Nqueen(arr, 0, n);
    return 0;
}