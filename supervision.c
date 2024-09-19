// Develop a Program to generate mark sheets for a student. Enter the marks of 5 students in
// Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes:
// roll_no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each
// student.

#include <stdio.h>
#include <string.h>

struct Marksheet
{
    int student;
    int rollno;
    char name[50];
    int chem;
    int Maths;
    int Physi;
};

int main()
{

    struct Marksheet arr[50];

    int n;
    printf("Enter Total Students : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter student Number : ");
        scanf("%d", &arr[i].student);
        printf("Roll no => ");
        scanf("%d", &arr[i].rollno);
        printf("Name => ");
        scanf("%s", arr[i].name);
        printf("Chem => ");
        scanf("%d", &arr[i].chem);
        printf("Maths => ");
        scanf("%d", &arr[i].Maths);
        printf("Physi => ");
        scanf("%d", &arr[i].Physi);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i].chem >= 100 || arr[i].Maths >= 100 || arr[i].Physi>= 100)
        {
            printf("invalid");
            break;
        }
        printf("\n");
        // printf("%d",Nim[i].student);
        printf("%s", arr[i].name);
        printf(" (%d)\n", arr[i].rollno);
        printf("Chem => %d\n", arr[i].chem);
        printf("Maths => %d\n", arr[i].Maths);
        printf("Physi => %d\n", arr[i].Physi);
        printf("Total => %d\n", arr[i].chem + arr[i].Maths+ arr[i].Physi);
        float perc = (arr[i].chem + arr[i].Maths + arr[i].Physi) / 3;
        printf("percentage => %2f\n", perc);
    }

return 0;
}