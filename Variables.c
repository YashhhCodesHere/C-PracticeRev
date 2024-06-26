#include <stdio.h>
int main()
{
    int x = 250;
    x += 5;
    printf("x = %d\n", x);
    
    int a = 9, b = 10;
    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);
    printf("a reminders b = %d\n", a%b);

    float pi = 3.14, g = 9.81;
    printf("A PIG without G(%f) is Pi(%f)\n", g, pi);
    return 0;
}