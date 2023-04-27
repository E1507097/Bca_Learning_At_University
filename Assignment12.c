//Input marks of 10 students in an array and then find the student with maximum marks

#include<stdio.h>
  #define MAX_STUDENTS10

int main() {
  
    int marks[MAX_STUDENTS];
    int max_marks = 0;
    int max_index = 0;

    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &marks[i]);

        if (marks[i] > max_marks) {
            max_marks = marks[i];
            max_index = i;
        }
    }
    
    printf("The student with maximum marks is student %d with %d marks.\n",
           max_index+1, max_marks);
  return 0;
}
