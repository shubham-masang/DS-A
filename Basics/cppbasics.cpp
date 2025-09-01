#include <bits/stdc++.h>
using namespace std;

// Function to calculate total marks
int total(int arr[], int n) {
    int tot = 0;
    for (int i = 0; i < n; i++) {
        tot += arr[i];
    }
    return tot;
}

// Function to calculate average marks
int average(int arr[], int n) {
    int tot = total(arr, n);
    return tot / n;
}

// Function to calculate percentage using pass by reference
void percentage(int arr[], int n, int &percent) {
    int tot = total(arr, n);
    percent = (tot * 100) / (n * 100); // Since each subject is out of 100
}

int main() {
    string name;
    int age;
    int n = 5;
    int marks[n];

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter marks in 5 subjects: ";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    cout << "\nHello " << name << ", You are " << age << " yrs old.\n";
    cout << "Here is your result:\n";

    int tot = total(marks, n);
    int avg = average(marks, n);
    cout << "Total Marks: " << tot << "\n";
    cout << "Average Marks: " << avg << "\n";

    // Grade calculation using if-else
    char grade;
    if (avg >= 90) grade = 'A';
    else if (avg >= 75) grade = 'B';
    else grade = 'C';

    // Printing grade using switch
    switch (grade) {
        case 'A': cout << "You have scored A grade.\n"; break;
        case 'B': cout << "You have scored B grade.\n"; break;
        case 'C': cout << "You have scored C grade.\n"; break;
        default: cout << "Invalid grade.\n"; break;
    }

    int percent = 0;
    percentage(marks, n, percent);
    cout << "Percentage: " << percent << "%\n";

    return 0;
}
