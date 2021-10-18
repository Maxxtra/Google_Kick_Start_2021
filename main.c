#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <limits.h>
#include <time.h>   // for clock_t, clock(), CLOCKS_PER_SEC
#include <unistd.h> // for sleep()

FILE *f, *g;

int main()
{
    f = fopen("ts1_input.txt", "r");
    g = fopen("output", "w");
    int T;
    scanf("%d", &T);
    int case_num;
    for (case_num = 1; case_num <= T; case_num++)
    {
        int N;
        scanf("%d", &N);
        int lenght = 0;
        int house;
        char s[500001];
        int i;
        int unari[500001] = {0}, zerouri[500001];
        int u = 0, z = 0;
        scanf("%s", s);
        for (i = 0; i < N; i++)
        {
            if (s[i] != '1')
            {
                // printf("ok");
                char aux1[500001], aux2[500001];
                strcpy(aux1, s);
                aux1[i + 1] = '\0';
                // printf("%s\n%s\n", aux1, s + i);
                char *a = strrchr(aux1, '1');
                char *b = strchr(s + i, '1');
                // char *c = strrchr(aux1, '1');
                // char *d = strchr(s + i, '1');
                int l = 0;
                // printf("test %d %d\n", i - (abs(a - aux1)), abs(b - s - i));
                // if (strlen(aux1) <= strlen(s + i))
                if (abs(i - (a - aux1)) > abs((b - s - i)))
                    l += abs((b - s - i));
                else if (abs(i - (a - aux1)) < abs((b - s - i)))
                    l += abs(i - (a - aux1));
                else
                    l += abs(i - (a - aux1));
                // else
                // {
                //     if (abs(i - (c - aux1)) > abs((d - s - i)))
                //         l += abs((d - s - i));
                //     else if (abs(i - (c - aux1)) < abs((d - s - i)))
                //         l += abs(i - (c - aux1));
                //     else
                //         l += abs(i - (c - aux1));
                // }
                // printf("%d\n", l);
                // printf("\n");
                lenght += l;
            }
        }
        printf("Case #%d: %d\n", case_num, lenght);
    }
}