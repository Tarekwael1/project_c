#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include"STD_TYPES.h"
#include "School_Management_System.h"

// Student structure
struct Student
{
    u32 ID;
    u8 name[100];
    u8 date_of_birth[12];
    u8 address[100];
    u32 phone_number[15];
    u32 computer_science_score;
    u32 Arabic;
    u32 Math;
    f32 rate;
};

// Node structure for the linked list
struct Node
{
    struct Student data;
    struct Node* next;
};

// Queue to hold students using linked list
struct Queue
{
    struct Node* front;
    struct Node* rear;
};

// Global variable for the student queue for making it accessible to all the functions defined in that file.
struct Queue student_queue;

// Function to initialize the student queue
void initStudentQueue()
{
    student_queue.front = NULL;
    student_queue.rear = NULL;
}

void setColor(u32 ForgC)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
    SetConsoleTextAttribute(hStdOut, wColor);
}

void school_panner(void)
{
    u8 jumpControlAtBottom = 0;
    u8 shiftControl = 0;
    u8 panner[] =
        "                                                                                       \n\
                        EE       EE EEEEE  E       EEEEE     EEEEE       EE   EE    EEEEE       \n\
                        EE   E   EE E      E     EE        EE     EE    EE E E EE   E           \n\
                        EE   E   EE EEEEE  E    EE        EE       EE  EE   E   EE  E EEE       \n\
                         EE E E EE  E      E     EE        EE     EE   EE   E   EE  E           \n\
                          EE   EE   EEEEE  EEEEE   EEEEE     EEEEE     EE       EE  EEEEE       \n\
                                                                                                \n\
                                                                                                \n\
                                           EEEEE     EE   EE  EE EEEE                           \n\
                                         EE     EE   EE   EE  EEE                               \n\
                                        EE       EE  EE   EE  EE                                \n\
                                         EE     EE   EE   EE  EE                                \n\
                                           EEEEE      EEEEE   EE                                \n\
                                                                                                \n\
                                                                                                \n\
                                                                                EE              \n\
                         EEEEE             EE                                   EE              \n\
                        EE                 EE                                   EE              \n\
                        EE          EEEEE  EE           EEEEE        EEEEE      EE              \n\
                         EEEEE    EE       EE         EE     EE    EE     EE    EE              \n\
                             EE  EE        EEEEEEEE  EE       EE  EE       EE   EE              \n\
                             EE   EE       EE    EE   EE     EE    EE     EE    EE              \n\
                         EEEEE      EEEEE  EE    EE     EEEEE        EEEEE      EEEEEEEE        \n\
                                                                                                \n\
                                                              Author : Eng. Tarek Abouelezz   \n\
";
    for (jumpControlAtBottom = 0; jumpControlAtBottom < 30; ++jumpControlAtBottom)
    {
        printf("\n");
    }
    setColor(9);
    for(u32 i=0; panner[i]; i++)
    {
        printf("%c", panner[i]);
    }
    printf("\n");
    setColor(7);
    for (shiftControl = 0; shiftControl < 30; shiftControl++)
    {
        Sleep(200);
        printf("\n");
    }
}
// Function to add a new student to the queue
void NEW_STUDENT()
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation error.\n");
        return;
    }
    system("cls");
    setColor(9);
    printf("\n    Insert new student :");
    printf("\n    ====================\n\n");
    setColor(11);

    printf(">> Enter Student ID :");
    setColor(7);
    scanf("%d", &newNode->data.ID);
    setColor(11);
    printf(">> Enter Student Name :");
    setColor(7);
    getchar(); // consume the newline character left in the input buffer
    fgets(newNode->data.name, sizeof(newNode->data.name), stdin);
    newNode->data.name[strcspn(newNode->data.name, "\n")] = '\0'; // remove the newline character
    setColor(11);
    printf(">> Enter Date of Birth (dd/mm/yyyy): ");
    setColor(7);
    scanf("%s", newNode->data.date_of_birth);
    setColor(11);
    printf(">> Enter Student Address :");
    getchar();
    setColor(7);
    fgets(newNode->data.address, sizeof(newNode->data.address), stdin);
    newNode->data.address[strcspn(newNode->data.address, "\n")] = '\0';

    setColor(11);
    printf(">> Enter Student Phone :");
    setColor(7);
    scanf("%s", newNode->data.phone_number);
    setColor(11);
    printf(">> Enter Computer Science Score: ");
    setColor(7);
    scanf("%d", &newNode->data.computer_science_score);
    setColor(11);
    printf(">> Enter Arabic Score: ");
    setColor(7);
    scanf("%d", &newNode->data.Arabic);
    setColor(11);
    printf(">> Enter Math Score: ");
    setColor(7);
    scanf("%d", &newNode->data.Math);
    setColor(11);
    newNode->next = NULL;

    if (student_queue.rear == NULL)
    {
        student_queue.front = newNode;
        student_queue.rear = newNode;
    }
    else
    {
        student_queue.rear->next = newNode;
        student_queue.rear = newNode;
    }

    system("cls");
    setColor(10);
    printf("\n\n  >>> Student Inserted successfully <<< \n");
    setColor(11);
}

// Function to delete a student from the queue
void DELETE_STUDENT()
{

    u32 studentID;
    u32 option;
    struct Node* current = student_queue.front;
    struct Node* previous = NULL;
    system("cls");
    setColor(9);
    printf("\n    Delete student :");
    printf("\n    ==============\n\n");
    setColor(11);
    printf("> Enter Student ID to Delete: ");
    scanf("%d", &studentID);

    while (current != NULL)
    {
        if (current->data.ID == studentID)
        {
            printf("\n  > Name : %s\n", current->data.name);
            printf("  > ID   : %d\n", current->data.ID);
            setColor(12);
            printf("\n > Are you sure to delete this student ?\n");
            setColor(11);
            printf("\n > Press 1 to delete, 0 to discard :");
            setColor(7);
            scanf("%d", &option);
            if(option == 1)
            {
                if (current == student_queue.front)
                {
                    student_queue.front = current->next;
                    free(current);
                }
                else if (current == student_queue.rear)
                {
                    student_queue.rear = previous;
                    previous->next = NULL;
                    free(current);
                }
                else
                {
                    previous->next = current->next;
                    free(current);
                }
                setColor(10);
                printf(">>> Student Deleted successfully <<<\n");
                return;
            }
            else
                return;
        }

        previous = current;
        current = current->next;
    }
    setColor(12);
    printf(">>> Student with ID %d not found <<<\n", studentID);
}

// Function to list all students in the queue
void STUDENT_LIST()
{
    struct Node* current = student_queue.front;

    if (current == NULL)
    {
        setColor(12);
        printf("\n>>> No Students Found <<<");
        return;
    }
    system("cls");
    setColor(9);
    printf("\n     > List All Students ");
    printf("\n  ===========================\n");
    setColor(6);
    printf("   =====+======================\n");
    printf("  | ID  |        Name          |\n");
    printf("   =====+======================\n");
    setColor(14);



    while (current != NULL)
    {
        printf("  | %-4d|  %-20s|\n", current->data.ID, current->data.name);
        printf("   -----+----------------------\n");

        current = current->next;
    }
}

// Function to edit student details in the queue
void STUDENT_EDIT()
{
    system("cls");
    u32 chose;
    u32 option;
    u32 x;
    u32 studentID;
    struct Node* current = student_queue.front;
    setColor(9);
    printf("\n    Edit student :");
    printf("\n    ==============\n\n");
    setColor(11);
    printf("> Enter Student ID to Edit: ");
    scanf("%d", &studentID);
    while (current != NULL)
    {
        if (current->data.ID == studentID)
        {
            system("cls");
            setColor(9);
            printf("\n    Edit student :");
            printf("\n    ==============\n\n");
            setColor(7);
            printf("      1 > Update Personal Data.\n");
            printf("      2 > Update Subject Data.\n\n");
            setColor(11);
            printf("> Enter a number of operation that needed :");
            setColor(7);
            scanf("%d", &chose);
            setColor(15);
            switch(chose)
            {
            case 1 :
                printf("\n     1 > Edit Phone.\n");
                printf("     2 > Edit Address.\n");
                setColor(11);
                printf("\n > Enter a number of operation that needed : ");
                setColor(7);
                scanf("%d",&option);
                switch(option)
                {
                case 1 :
                    setColor(6);
                    printf("\nCurrent Phone : %s\n", current->data.phone_number);
                    setColor(11);
                    printf("Enter new Phone: ");
                    setColor(7);
                    scanf("%s", current->data.phone_number);
                    break;
                case 2 :
                    setColor(6);
                    printf("Current Address : %s\n", current->data.address);
                    setColor(11);
                    printf("Enter new Address : ");
                    setColor(7);
                    getchar();
                    fgets(current->data.address, sizeof(current->data.address), stdin);
                    current->data.address[strcspn(current->data.address, "\n")] = '\0';
                    break;
                default:
                    setColor(4);
                    printf("\n    Wrong option, Try again!\n");
                    break;
                }
                break;
            case 2:
                printf("\n     1 > Edit Computer Science Score.\n");
                printf("     2 > Edit Arabic Score.\n");
                printf("     3 > Edit Math Score.\n");
                setColor(11);
                printf("\n > Enter a number of operation that needed : ");
                setColor(7);
                scanf("%d",&x);
                switch(x)
                {
                case 1 :
                    setColor(6);
                    printf("Current Computer Science Score: %d\n", current->data.computer_science_score);
                    setColor(11);
                    printf("Enter Computer Science Score: ");
                    setColor(7);
                    scanf("%d", &current->data.computer_science_score);
                    break;
                case 2 :
                    setColor(6);
                    printf("Current Arabic Score: %d\n", current->data.Arabic);
                    setColor(11);
                    printf("Enter Arabic Score: ");
                    setColor(7);
                    scanf("%d", &current->data.Arabic);
                    break;
                case 3 :
                    setColor(6);
                    printf("Current Math Score: %d\n", current->data.Math);
                    setColor(11);
                    printf("Enter Math Score: ");
                    setColor(7);
                    scanf("%d", &current->data.Math);
                    break;
                default:
                    setColor(4);
                    printf("\n    Wrong option, Try again!\n");
                    break;
                }
                break;
            default:
                setColor(4);
                printf("\n    Wrong option, Try again!\n");
                break;
            }
            setColor(10);
            printf(">>> Student Edited successfully <<<\n");
            return;
        }

        current = current->next;
    }
    setColor(12);
    printf("Student with ID %d not found.\n", studentID);
}

void print_student()
{
    struct Node* current = student_queue.front;
    u32 studentID;
    system("cls");
    setColor(9);
    printf("\n    Print student :");
    printf("\n    ===============\n\n");
    setColor(11);
    printf("> Enter Student ID to print: ");
    scanf("%d", &studentID);


    while (current != NULL)
    {
        if ((current->data.ID) == studentID)
        {

            system("cls");
            setColor(9);
            printf("\n   ========== Student Data  ==========\n");
            setColor(15);
            printf("    - Name             : %s\n", current->data.name);
            printf("    - ID               : %d\n", current->data.ID);
            printf("    - B.D              : %s\n", current->data.date_of_birth);
            setColor(9);
            printf("   ========== Personal Data ==========\n");
            setColor(15);
            printf("    - Phone            : %s\n", current->data.phone_number);
            printf("    - Address          : %s\n", current->data.address);
            setColor(9);
            printf("   ==========  Score Data   ==========\n");
            setColor(15);
            printf("    - computer science : %d\n",  current->data.computer_science_score);
            printf("    - Math             : %d\n",  current->data.Math);
            printf("    - Arabic           : %d\n",  current->data.Arabic);
            setColor(9);
            printf("   ===================================\n");
            setColor(7);
            return;
        }


        current = current->next;

    }
    setColor(12);
    printf(">>> This ID < %d > not found <<< \n", studentID);

}

// Function to calculate the average score of all students
void AVERAGE_SCORE()
{
    struct Node* current = student_queue.front;
    u32 totalStudents = 0;
    u32 totalScore_Computr = 0;
    u32 totalScore_Math = 0;
    u32 totalScore_Arabic=0;
    f32 rate=0;

    while (current != NULL)
    {
        totalStudents++;
        totalScore_Computr += current->data.computer_science_score;
        totalScore_Math += current->data.Math;
        totalScore_Arabic += current->data.Arabic;
        current = current->next;
    }

    if (totalStudents == 0)
    {
        setColor(12);
        printf("\n > No Students Found \n");
        return 0;
    }
    rate= ((f32)((totalScore_Computr+totalScore_Arabic+totalScore_Math)/(300.00*totalStudents))*100);
    setColor(9);
    printf("\n   > List All Average Subject ");
    printf("\n  ===========================\n");
    setColor(6);
    printf("   =====================+======================+======================+======================\n");
    printf("  |  Computer Science   |       Arabic         |         Math         |     Success Rate     |\n");
    printf("   =====================+======================+======================+======================\n");
    setColor(14);
    printf("  | %-20.2f|  %-20.2f|  %-20.2f|  %.2f%%\t\t     |\n",((f32)totalScore_Computr/totalStudents),
           ((f32)totalScore_Arabic/totalStudents),
           ((f32)totalScore_Math/totalStudents),
           rate);
    printf("  ----------------------+----------------------+----------------------+----------------------\n");

}

// Function to sort students by their names
void SORT_STUDENTS_BY_NAME()
{
    struct Node* current = student_queue.front;
    u32 studentCount = 0;

    // Count the number of students in the queue
    while (current != NULL)
    {
        studentCount++;
        current = current->next;
    }

    // Create an array of pointers to store student nodes
    struct Node* studentArray[studentCount];
    current = student_queue.front;

    // Fill the array with student nodes
    for (u32 i = 0; i < studentCount; i++)
    {
        studentArray[i] = current;
        current = current->next;
    }

    // Perform a simple bubble sort to sort students by names
    for (u32 i = 0; i < studentCount - 1; i++)
    {
        for (u32 j = 0; j < studentCount - i - 1; j++)
        {
            if (strcmp(studentArray[j]->data.name, studentArray[j + 1]->data.name) > 0)
            {
                struct Node* temp = studentArray[j];
                studentArray[j] = studentArray[j + 1];
                studentArray[j + 1] = temp;
            }
        }
    }

    setColor(9);
    printf("\n   > List All Student Sorted by name ");
    printf("\n  =====================================\n");
    setColor(6);
    printf("    =====+=====================+======================+======================+======================\n");
    printf("   |  ID |        Name         |       Arabic         |         Math         |   Computer Science   |\n");
    printf("    =====+=====================+======================+======================+======================\n");
    setColor(14);
    for (u32 i = 0; i < studentCount; i++)
    {
        printf("   | %-4d| %-20s|  %-20d|  %-20d|  %-20d|\n", studentArray[i]->data.ID,
               studentArray[i]->data.name,
               studentArray[i]->data.Arabic,
               studentArray[i]->data.Math,
               studentArray[i]->data.computer_science_score);
        printf("   -----+----------------------+----------------------+----------------------+----------------------\n");

    }
}

// Function to search for a student by student Name
void SEARCH_STUDENT(const u8 *Name)
{
    if (student_queue.front == NULL)
    {
        printf("Student queue is empty.\n");
        return;
    }

    struct Node* current = student_queue.front;
    while (current != NULL)
    {
        if (current->data.name == NULL)
        {
            printf("Invalid data in student queue.\n");
            return;
        }

        if (strcmp(current->data.name, Name) == 0)
        {
            system("cls");
            setColor(9);
            printf("\n     > Student Search ");
            printf("\n  ===========================\n");
            setColor(6);
            printf("   =====+======================\n");
            printf("  | ID  |        Name          |\n");
            printf("   =====+======================\n");
            setColor(14);
            printf("  | %-4d|  %-20s|\n",current->data.ID, current->data.name);
            printf("   -----+----------------------\n");
            return;
        }
        current = current->next;
    }
    printf(">>> Student with Name %s not found <<<\n",Name);

}
// Function to rank students based on their scores
void RANK_STUDENT()
{
    struct Node* current = student_queue.front;
    u32 studentCount = 0;

    // Count the number of students in the queue
    while (current != NULL)
    {
        studentCount++;
        current = current->next;
    }

    // Create an array of pointers to store student nodes
    struct Node* studentArray[studentCount];
    current = student_queue.front;



    // Fill the array with student nodes
    for (u32 i = 0; i < studentCount; i++)
    {
        current->data.rate=(f32)(((current->data.computer_science_score)+(current->data.Arabic)+(current->data.Math))*100/300.00);
        studentArray[i] = current;
        current = current->next;
    }



    // Perform a simple bubble sort to rank students based on scores
    for (u32 i = 0; i < studentCount - 1; i++)
    {
        for (u32 j = 0; j < studentCount - i - 1; j++)
        {
            if (studentArray[j]->data.rate < studentArray[j + 1]->data.rate)
            {
                struct Node* temp = studentArray[j];
                studentArray[j] = studentArray[j + 1];
                studentArray[j + 1] = temp;
            }
        }
    }


    setColor(9);
    printf("\n   > Rank All Students  ");
    printf("\n  ========================\n");
    setColor(6);
    printf("     =====+=====+===========+===========+===========+===========+===========\n");
    printf("    |  R  | ID  |   Name    |    C.S    |   Arabic  |   Math    |   Rate    |\n");
    printf("     =====+=====+===========+===========+===========+===========+===========\n");
    setColor(14);

    // Print the ranked students
    for (u32 i = 0; i < studentCount; i++)
    {
        printf("    | %-4d| %-4d| %-10s| %-10d| %-10d| %-10d| %0.2f%%     |\n", i + 1, studentArray[i]->data.ID, studentArray[i]->data.name, studentArray[i]->data.computer_science_score,studentArray[i]->data.Arabic
               ,studentArray[i]->data.Math,studentArray[i]->data.rate);
        printf("     -----+-----+-----------+-----------+-----------+-----------+-----------\n");
    }
}




