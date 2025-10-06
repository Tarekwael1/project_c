#ifndef SCHOOL_MANAGEMENT_SYSTEM_H
#define SCHOOL_MANAGEMENT_SYSTEM_H

void setColor(u32 ForgC);

void school_panner(void);
// Function to initialize the student queue
void initStudentQueue();

// Function to add a new student to the queue
void NEW_STUDENT();

// Function to delete a student from the queue
void DELETE_STUDENT();

// Function to list all students in the queue
void STUDENT_LIST();

// Function to edit student details in the queue
void STUDENT_EDIT();

// Function to rank students based on their scores
void RANK_STUDENT();

// Function to search for a student by student Name
void SEARCH_STUDENT(const u8 *Name);

// Function to calculate the average score of all students
void AVERAGE_SCORE();

// Function to sort students by their names
void SORT_STUDENTS_BY_NAME();
void print_student();

#endif
