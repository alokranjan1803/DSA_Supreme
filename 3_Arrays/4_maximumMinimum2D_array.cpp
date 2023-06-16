#include <iostream>
#include <limits.h>
using namespace std;
int maximum(int arr[][3], int row, int col)
{
    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int minimum(int arr[][3], int row, int col)
{
    int min = INT_MAX;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}

int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << maximum(arr, row, col);
    cout<<" ";

    cout << minimum(arr, row, col);
}