#include <stdio.h>
int main()
{
    int age;
    printf("ENTER YOUR AGE: ");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("YOU CAN VOTE");
    }
    else
    {
        printf("YOU CAN NOT VOTE");
    }
    return 0;
}