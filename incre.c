// #include <stdio.h>
// int main()
// {
//     int a = 3, b = 11;
//     a++;
//     b--;
//     printf("a=%d b=%d", a, b);
// }

// #include <stdio.h>
// int main()
// {
//     int a = 3, b;
//     b = a++ + a++ + a++;
//     printf("a=%d,b=%d\n", a, b);
//     a = 3;
//     b = ++a + ++a + ++a;
//     printf("a=%d b=%d", a, b);
// }

// #include <stdio.h>
// int main()
// {
//     int a = 10, b = 20, c;
//     c = a - (-b);
//     printf("%d", c);
// }

// #include <stdio.h>
// int main()
// {
//     int a = 98, b, c;
//     b = a % 10;
//     c = a / 10;
//     printf("a=%d", b + c);
// }

// #include <stdio.h>
// int main()
// {

// }

// #include <stdio.h>
// int main()
// {
//     int a = 25, b, c, rev;
//     b = a % 10;
//     c = a / 10;
//     rev = b * 10 + c;
//     printf("a=%d", rev);
// }

#include <stdio.h>
int main()
{
    int n = 57;
    n % 10 >= 5 && printf("%d", ((n / 10) + 1) * 10) || printf("%d", n / 10 * 10);
}