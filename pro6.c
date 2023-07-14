#include <stdio.h>
#include <conio.h>
#define max 30
void main()
{
    int i, j, n, bt[max], at[max], wt[max], tat[max], temp[max];
    // clrscr();
    printf("enter the process");
    scanf("%d", &n);
    printf("enter the burst time");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }
    printf("enter the arivel time");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &at[i]);
    }
    temp[0] = 0;
    printf("process \t burst time \t arrivel time \t waiting time \t tuen around time\n");
    for (i = 0; i < n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;
        temp[i + 1] = temp[i] + bt[i];
        wt[i] = temp[i] - at[i];
        tat[i] = wt[i] + bt[i];
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, bt[i], at[i], wt[i], tat[i]);
    }
    getch();
}