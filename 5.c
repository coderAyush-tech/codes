#include <stdio.h>
#include <string.h>

int main()
{

    char str[1000];
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    fgets(str, 1000, stdin);
    str[strcspn(str, "\n")] = '\0';
    for (int i = 0; i < str[i]; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            count++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    printf("alphabet:%d\n", count);
    printf(" numbers:%d\n", count1);
    printf("sc:      %d", count2);
}
