#include <stdio.h>
int swappingfunction(int arr[], int a);
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    swappingfunction(arr, a);
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
}
int swappingfunction(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}