
#include <stdio.h>
int main()
{
    int b, ext;
    long long result = 1;
    printf("Enter");
    scanf("%d", &b);
    printf("ext");
    scanf("%d", &ext);
    while (ext!= 0)
    {
        result *= b;
        --ext;
    }
    printf("%lld", result);
    return 0;
}
