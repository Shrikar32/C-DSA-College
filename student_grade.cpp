#include <iostream>
using namespace std;

int main() {
    cout << "Program to print student's grades\n";

    int marks_chem, marks_math, marks_physics, marks_EGL, marks_python;

    // Taking input
    cout << "Enter your Chemistry marks: ";
    cin >> marks_chem;
    cout << "Enter your Maths marks: ";
    cin >> marks_math;
    cout << "Enter your Physics marks: ";
    cin >> marks_physics;
    cout << "Enter your EGL marks: ";
    cin >> marks_EGL;
    cout << "Enter your Python marks: ";
    cin >> marks_python;

    // Calculating total marks
    int sum_marks = marks_chem + marks_math + marks_physics + marks_EGL + marks_python;

    // Grade logic
    if (sum_marks >= 451) {
        cout << "Grade is O\n";
    }
    else if (sum_marks >= 381) {
        cout << "Grade is A\n";
    }
    else if (sum_marks >= 301) {
        cout << "Grade is B\n";
    }
    else if (sum_marks >= 251) {
        cout << "Grade is C\n";
    }
    else if (sum_marks >= 201) {
        cout << "Grade is D\n";
    }
    else {
        cout << "Grade is F\n";
    }

    return 0;
}
//