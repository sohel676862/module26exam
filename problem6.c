#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int lenght=strlen(str);
    for (int i = 0; i <lenght; i++)
    {
        if(str[i] %2==0){
            str[i] -=32;
        }
    }
    printf("%s",str);
}