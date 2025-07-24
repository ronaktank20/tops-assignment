#include <iostream>
#include <string>
using namespace std;

class Lecture {
    string name,subject,course;
    int lectures;

public:
    Lecture() {
        name = subject = course = "";
        lectures = 0;
    }

    void getDetails() {
        cout << "Lecturer Name: ";
        getline(cin, name);
        cout << "Subject Name : ";
        getline(cin, subject);
        cout << "Course Name  : ";
        getline(cin, course);
        cout << "No. of Lectures: ";
        cin >> lectures;
        cin.ignore();
    }

    void showDetails() {
        cout << "\n" << name << " teaches " << subject << " for " 
             << course << " (" << lectures << " lectures)";
    }
};

int main() {
    Lecture lec[5];
    cout << "Lecture Management System\n";

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for Lecturer " << i + 1 << ":\n";
        lec[i].getDetails();
    }

    cout << "\n--- Lecture Details ---";
    for (int i = 0; i < 5; i++) {
        lec[i].showDetails();
    }

    return 0;
}

