#include<stdio.h>
int main()
{
    printf("Hello\n");
    printf("World\n");
    printf("Hello\tWorld\n");

    // integer
    int num1 = 10;
    num1 = 12;
    
    // float
    float f = 4.6;
    
    // character
    char c = 'C';
  
    printf("%d\n", num1);
    printf("%d\n", num1);
    printf("%.1f\n", f);
    printf("%c", c);
    
    return 0;
}