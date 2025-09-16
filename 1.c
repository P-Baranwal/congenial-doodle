#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char *line1 = malloc(n * sizeof(char));
    scanf("%s", line1);
    char *line2 = malloc(n * sizeof(char));
    scanf("%s", line2);

    int k;
    scanf(" %d", &k);

    int arr1[26];
    int arr2[26];
    for(int i = 0; i < 26; i++)
    {
        arr1[i] = 0;
        arr2[i] = 0;
    }

    for(int i = 0; i < 26; i++)
    {
        arr1[line1[i] - 97]++;
        arr2[line2[i] - 97]++;
    }

    int count = 0;
    for(int i = 0; i < 26; i++)
    {
        if(arr1[i] != arr2[i])
        {
            count++;
        }
    }

    if(count > k)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    free(line1);
    free(line2);
}