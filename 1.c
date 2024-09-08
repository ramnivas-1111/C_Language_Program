/*
#include <stdio.h>
int main()
{

    int a = 10, b = 20, c;
    c = a;
    a = b;
    b = c;
    printf("a=%d,b=%d", a, b);
}


#include <stdio.h>
int main()
{

    int A = 10, B = 20;
    A = A + B;
    B = A - B;
    A = A - B;

    printf("a=%d,b=%d", A, B);
}

#include <stdio.h>
int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    a = n % 10;
    n = n / 10;
    c = n / 10;

    printf("%d", a + c);
 }

// #include <stdio.h>
// int main()
// {
//     int second,hour,minute;
//     printf("Enter the no");
//     scanf("%d", &second);
//     hour = second/3600;
//     minute=second%3600/60;
//     second=minute%60;
//     printf("hour=%d,minute=%d,second=%d", hour,minute,second);
}

#include <stdio.h>
int main()
{
    int Fahrenheit = 100, celsius;
    celsius = (Fahrenheit - 32) * (5.0 / 9.0);
    printf("%d", celsius);
}

#include <stdio.h>
int main()
{
    char lc, uc;
    scanf("%c", &lc);
    uc = lc - 32;
    printf("%c", uc);
}

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number");
    scanf("%d%d%d", a, b, c);
    (a > b && a > c) && printf("%d", a);
    (b > c && b > c) && printf("%d", b);
    printf("%d", c);
}