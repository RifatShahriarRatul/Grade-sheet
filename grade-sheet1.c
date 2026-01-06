#include<stdio.h>
int main()
{
    int num, i, m,n,o,p, total_mark;
    printf("The number of students under consideration: ");
    scanf("%d", &num);
    int mark[num];
    for(i=0; i<num; i++)
    {
        printf("For student no. %d\n", i+1);
        printf("Enter your marks in Attendance: ");
        scanf("%d", &m);
        printf("Enter your marks in Term Test: ");
        scanf("%d", &n);
        printf("Enter your marks in Assignment: ");
        scanf("%d", &o);
        printf("Enter your marks in Final: ");
        scanf("%d", &p);
        if(m<=10 && n<=20 && o<=10 && p<=60)
        {
            total_mark = m+n+o+p;
            mark[i] = total_mark;
        }else{
            printf("Your input is inaccurate\n");
        }
    }
    printf("----------------------------\n");
    printf("Serial no.    Mark     Grade\n");
    printf("----------------------------\n");
    for(i=0; i<num; i++)
    {
             if(mark[i]>79) printf("    %d.         %d        A+", i+1, mark[i]);
        else if(mark[i]>74) printf("    %d.         %d        A", i+1, mark[i]);
        else if(mark[i]>69) printf("    %d.         %d        A-", i+1, mark[i]);
        else if(mark[i]>64) printf("    %d.         %d        B+", i+1, mark[i]);
        else if(mark[i]>59) printf("    %d.         %d        B", i+1, mark[i]);
        else if(mark[i]>54) printf("    %d.         %d        B-", i+1, mark[i]);
        else if(mark[i]>49) printf("    %d.         %d        C+", i+1, mark[i]);
        else if(mark[i]>44) printf("    %d.         %d        C", i+1, mark[i]);
        else if(mark[i]>39) printf("    %d.         %d        D", i+1, mark[i]);
        else printf("    %d.         %d        F", i+1, mark[i]);
        printf("\n");
    }
    printf("----------------------------\n");
}
