#include<stdio.h>
int main()
{
    // let define variable
    int i;
    float f;
    char c;

    // scan the values with scan function
    scanf("%d %f %c", &i, &f, &c);

    // print the value with print function
    printf("%d %.2f %c", i, f, c);

    return 0;
}