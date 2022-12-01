#include <stdio.h>
int lestdigit(int a);
int main()
{
    int a;
    scanf("%d", &a);
    lestdigit(a);
}

int lestdigit(int a)
{
    int arr[a];
    for (int i = 0; i < a; i++)
    {
    scanf("%d",&arr[i]);
    }
    int sum=0;
    for (int i = 0; i < a; i++)
    {
       if(arr[i] %10==0){
        sum +=arr[i];
       }
    }
    printf("%d",sum);
}