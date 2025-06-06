#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENTS 100
// Structure to represent a student record
typedef struct {
    int rollNo;
    char name[50];
    float a1, a2, a3; // Assignment marks
    float t1, t2, t3; // Test marks
    float total;      // Total marks
} Student;

// Functions for Student Record Management
void calculateTotalMarks(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        students[i].total = students[i].a1 + students[i].a2 + students[i].a3 +
                            students[i].t1 + students[i].t2 + students[i].t3;
    }
}

float findClassAverage(Student students[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += students[i].total;
    }
    return size > 0 ? sum / size : 0;
}

Student findHighestMarks(Student students[], int size) {
    if (size == 0) {
        Student emptyStudent = {0, "None", 0, 0, 0, 0, 0, 0, 0};
        return emptyStudent;
    }

    Student highest = students[0];
    for (int i = 1; i < size; i++) {
        if (students[i].total > highest.total) {
            highest = students[i];
        }
    }
    return highest;
}

// Function to display a student's record
void displayStudentRecord(Student student) {
    printf("Roll No: %d, Name: %s, Total Marks: %.2f\n", student.rollNo, student.name, student.total);
}

// Main function
int main() {
    Student students[MAX_STUDENTS];
    int numStudents;

    // Taking input for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    if (numStudents > MAX_STUDENTS) {
        printf("Error: Number of students exceeds maximum limit of %d.\n", MAX_STUDENTS);
        return 1;
    }

    // Taking input for each student's data
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Using " %[^\n]" to allow spaces in the name
        printf("Enter Assignment Marks (a1, a2, a3): ");
        scanf("%f %f %f", &students[i].a1, &students[i].a2, &students[i].a3);
        printf("Enter Test Marks (t1, t2, t3): ");
        scanf("%f %f %f", &students[i].t1, &students[i].t2, &students[i].t3);
    }

    // Calculate total marks for each student
    calculateTotalMarks(students, numStudents);

    // Display each student's record
    printf("\nStudent Records:\n");
    for (int i = 0; i < numStudents; i++) {
        displayStudentRecord(students[i]);
    }

    // Find class average
    printf("\nClass Average: %.2f\n", findClassAverage(students, numStudents));

    // Find student with highest marks
    Student topStudent = findHighestMarks(students, numStudents);
    printf("\nStudent with Highest Marks:\n");
    displayStudentRecord(topStudent);

    return 0;
}
