#include <stdio.h>
#include <Windows.h>
#include"STD_TYPES.h"
#include "School_Management_System.h"
int main()
{
    u32 choice;
    u32 studentID;
    u8 name[100];
    // Initialize the student queue
    initStudentQueue();
    school_panner();
    system("cls");

    u8 home[] =
        "     ============================\n\
    |  School Management System  |\n\
     ============================\n\
    ";
    while (1)
    {
        setColor(3);
        printf("\n");
        for(u32 i=0; home[i]; i++)
        {
            printf("%c", home[i]);
        }
        setColor(15);
        printf("\n     1 > Insert Student.\n");
        printf("     2 > Edit Student Details\n");
        printf("     3 > Delete Student\n");
        printf("     4 > Search Student by ID\n");
        printf("     5 > Search Student by Name\n");
        printf("     6 > List All Students\n");
        printf("     7 > Sort Students by Name\n");
        printf("     8 > Rank Students\n");
        printf("     9 > Average Score of Objects\n");
        printf("     0 > Exit\n");
        setColor(11);
        printf("\n > Enter the number of operation : ");
        setColor(7);
        scanf("%d", &choice);
        system("cls");
        switch (choice)
        {
        case 0:
            setColor(14);
            printf("\n     ");
            printf("> Author : Eng.Tarek Abouelezz <");
            Sleep(2000);
            setColor(13);
            printf("\n\n            BYE BYE ^_^\n");
            Sleep(2000);
            setColor(7);

            return 0;

        case 1:
            NEW_STUDENT();
            Sleep(2000);
            system("cls");
            break;

        case 2:
            STUDENT_EDIT();
            Sleep(2000);
            system("cls");
            break;

        case 3:
            DELETE_STUDENT();
            Sleep(2000);
            system("cls");
            break;

        case 4:
            print_student();
            Sleep(5000);
            system("cls");
            break;

        case 5:
            setColor(11);
            printf("Enter Student Name to Search: ");
            setColor(7);
            scanf("%s", name);
            setColor(11);
            SEARCH_STUDENT(&name);
            Sleep(5000);
            system("cls");
            break;
        case 6:
            STUDENT_LIST();
            Sleep(5000);
            system("cls");
            break;

        case 7:
            SORT_STUDENTS_BY_NAME();
            Sleep(7000);
            system("cls");
            break;

        case 8:
            RANK_STUDENT();
            Sleep(7000);
            system("cls");
            break;


        case 9:
            AVERAGE_SCORE();
            Sleep(5000);
            system("cls");
            break;

        default:
            setColor(12);
            printf(">>> Invalid Choice, Please Try Again <<<\n");

            break;
        }
    }

    return 0;
}
