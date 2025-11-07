#include <iostream>
using namespace std;

struct studentType {
    string studentFname;
    string studentLname;   
    int testScore;
    char grade;
};

void getData(studentType student[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter first name of student " << (i + 1) << ": ";
        cin >> student[i].studentFname;
        cout << "Enter last name of student " << (i + 1) << ": ";
        cin >> student[i].studentLname;
        cout << "Enter test score of student " << (i + 1) << ": ";
        cin >> student[i].testScore;
    }
};

void computeGrade(studentType student[], int n) {
    for (int i = 0; i < n; i++) {
        if (student[i].testScore >= 90)
            student[i].grade = 'A';
        else if (student[i].testScore >= 80)
            student[i].grade = 'B';
        else if (student[i].testScore >= 70)
            student[i].grade = 'C';
        else if (student[i].testScore >= 60)
            student[i].grade = 'D';
        else
            student[i].grade = 'F';
    }
};

int highestScore(studentType student[], int n) {
    int highScore = student[0].testScore;
    for (int i = 1; i < n; i++) {
        if (student[i].testScore > highScore) {
            highScore = student[i].testScore;
        }
    }
    return highScore;
};

void printhighestStudent(studentType student[], int n) {
    int highScore = highestScore(student, n);
    cout << "\nHighest Score: " << highScore << endl;
    for (int i = 0; i < n; i++) {
        if (student[i].testScore == highScore) {
            cout << "Student with highest score: " << student[i].studentLname << ", " << student[i].studentFname << endl;
        }
    }
};

void printData(studentType student[], int n) {
    cout << "\nStudent Data\n";
    for (int i = 0; i < n; i++) {
        cout << "Student Name: " << student[i].studentLname << ", " << student[i].studentFname << " " << student[i].testScore << " " << student[i].grade << endl;
    }
};

int main() {
    studentType students[20];
    getData(students, 20);
    computeGrade(students, 20);
    printhighestStudent(students, 20);
    printData(students, 20);
    return 0;
}