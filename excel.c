#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libxls/xls.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int roll_no;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int num_students;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    if (num_students <= 0 || num_students > MAX_STUDENTS) {
        printf("Invalid number of students. Please enter a value between 1 and %d.\n", MAX_STUDENTS);
        return 1;
    }

    for (int i = 0; i < num_students; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);
    }

    // Save the data to an Excel file
    xlsWorkBook* pWorkbook = xlsWorkbook();
    xlsWorkSheet* pWorksheet = xlsWorksheet(pWorkbook, "Student Data");

    // Write headers
    xlsWriteStr(pWorksheet, 0, 0, "Name");
    xlsWriteStr(pWorksheet, 0, 1, "Roll Number");

    // Write student data
    for (int i = 0; i < num_students; i++) {
        xlsWriteStr(pWorksheet, i + 1, 0, students[i].name);
        xlsWriteNumber(pWorksheet, i + 1, 1, students[i].roll_no);
    }

    // Save the workbook to a file
    const char* filename = "student_data.xls";
    if (xlsEOF == xlsSave(pWorkbook, filename)) {
        printf("Error saving the Excel file.\n");
    } else {
        printf("Data saved to %s successfully.\n", filename);
    }

    // Cleanup
    xlsDeleteSheet(pWorksheet);
    xlsDeleteWorkBook(pWorkbook);
    return 0;
}

