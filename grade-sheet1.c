#include<stdio.h>
int main()
{
    int num, i, m,n,o,p, total_mark;
    printf("The number of students under consideration: ");
    scanf("%d", &num);
    for(i=0; i<num; i++)
    {
        printf("Enter your marks in Attendance: ");
        scanf("%d", &m);
        printf("Enter your marks in Term Test: ");
        scanf("%d", &n);
        printf("Enter your marks in Assignment: ");
        scanf("%d", &o);
        printf("Enter your marks in Fianl: ");
        scanf("%d", &p);
        if(m<=10 && n<=20 && o<=10 && p<=60)
        {
            total_mark = m+n+o+p;
            printf("----------------------------\n");
            printf("Serial no.    Mark     Grade\n");
            printf("----------------------------\n");
            if(total_mark>79) printf("    %d.         %d        A+", i+1, total_mark);
        else if(total_mark>74) printf("    %d.         %d        A", i+1, total_mark);
        else if(total_mark>69) printf("    %d.         %d        A-", i+1, total_mark);
        else if(total_mark>64) printf("    %d.         %d        B+", i+1, total_mark);
        else if(total_mark>59) printf("    %d.         %d        B", i+1, total_mark);
        else if(total_mark>54) printf("    %d.         %d        B-", i+1, total_mark);
        else if(total_mark>49) printf("    %d.         %d        C+", i+1, total_mark);
        else if(total_mark>44) printf("    %d.         %d        C", i+1, total_mark);
        else if(total_mark>39) printf("    %d.         %d        D", i+1, total_mark);
        else printf("    %d.         %d        F", i+1, total_mark);
        printf("\n");
            printf("----------------------------\n");
        }else{
            printf("Your input is accurate");
        }
    }
}
