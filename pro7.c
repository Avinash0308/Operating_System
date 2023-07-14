#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, qt, count = 0, temp, sq = 0, bt[10], wt[10], tat[10], rem_bt[10];
    // clrscr();
    printf("Enter the process");
    scanf("%d", &n);
    printf("Enter the burst time");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
        rem_bt[i] = bt[i];
    }
    printf("Enter the quantam time");
    scanf("%d", &qt);
    while (1)
    {
        for (i = 0, count = 0; i < n; i++)
        {
            temp = qt;
            if (rem_bt[i] == 0)
            {
                count++;
                continue;
            }
            if (rem_bt[i] > qt)
                rem_bt[i] = rem_bt[i] - qt;
            else if (rem_bt[i] >= 0)
            {
                temp = rem_bt[i];
                rem_bt[i] = 0;
            }
            sq = sq + temp;
            tat[i] = sq;
        }
        if (n == count)
            break;
    }
    printf("process \t burst time \t turn around time \twaiting time\n");
    for (i = 0; i < n; i++)
    {
        wt[i] = tat[i] - bt[i];
        printf("%d\t\t%d\t\t%d\t\t\t%d\n", i + 1, bt[i], tat[i], wt[i]);
    }
    getch();
}