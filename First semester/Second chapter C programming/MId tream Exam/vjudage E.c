#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    char str[n];
    scanf("%s", &str);
    int count = 0, arr[256] = {0};
    for (i = 0; i < n; i++)
    {
        str[i] = (toupper(str[i]));
        if (arr[str[i]] == 0)
        {
            arr[str[i]]++;
            count++;
        }
    }
    if (count == 26)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
