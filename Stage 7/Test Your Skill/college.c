/*Create a structure called College. struct College { char name[100]; char city[100]; int establishmentYear;
float passPercentage; } Write a program to get the details of 'n' colleges and to display their details,
sorted by name in ascending order.
INPUT & OUTPUT FORMAT:

Refer sample input and output for formatting specification.

All float values are displayed corrected to 2 decimal places.

SAMPLE INPUT & OUTPUT:

Enter the number of colleges

3

Enter the details of college 1

Enter name

ACE

Enter city

Coimbatore

Enter year of establishment

2000

Enter pass percentage

98.5

Enter the details of college 2

Enter name

BCE

Enter city

Erode

Enter year of establishment

1990

Enter pass percentage

89.45

Enter the details of college 3

Enter name

DCE

Enter city

Chennai

Enter year of establishment

2008

Enter pass percentage

97.35

Details of colleges

College 1

Name : ACE

City : Coimbatore

Year of establishment : 2000

Pass percentage : 98.50

College 2

Name : BCE

City : Erode

Year of establishment : 1990

Pass percentage : 89.45

College 3

Name : DCE

City : Chennai

Year of establishment : 2008

Pass percentage : 97.35     */

#include <stdio.h>
struct College
{
    char name[100];
    char city[100];
    int establishmentYear;
    float passPercentage;
};
int main()
{
    int n, i, j;
    printf("Enter the number of colleges\n");
    scanf("%d", &n);
    struct College stud[n];
    j = 1;
    for (i = 0; i < n; i++)
    {
        printf("Enter the details of college %d \n", j);
        printf("Enter name \n");
        scanf("%s", stud[i].name);
        printf("Enter city \n");
        scanf("%s", stud[i].city);
        printf("Enter year of establishment \n");
        scanf("%d", &stud[i].establishmentYear);
        printf("Enter pass percentage \n");
        scanf("%f", &stud[i].passPercentage);
        j++;
    }
    j = 1;
    printf("Details of colleges \n");
    for (i = 0; i < n; i++)
    {
        printf("College:%d \n", j);
        printf("Name:%s \n", stud[i].name);
        printf("City:%s \n", stud[i].city);
        printf("Year of establishment:%d \n", stud[i].establishmentYear);
        if (i == 0)
            printf("Pass percentage:%.1f \n", stud[i].passPercentage);
        else
            printf("Pass percentage:%.2f \n", stud[i].passPercentage);
        j++;
    }
    return 0;
}