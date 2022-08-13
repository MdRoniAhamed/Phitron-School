#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (0 < n)
    {
        char str[101];

        scanf("%s", str);
        int len = strlen(str);
        int i = 0;
        while (str[i])
        {
            printf("%c", str[i]);
            i += 2;
        }
        printf("%c\n", str[len - 1]);
        n--;
    }
    return 0;
}
