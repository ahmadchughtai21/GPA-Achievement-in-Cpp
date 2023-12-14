#include <iostream>
using namespace std;

int main()
{
    float gpa;

    cout << "Enter your GPA: ";
    cin >> gpa;

    if (gpa >= 3.95)
    {
        cout << "Congratulations!";
    }
    else
    {
        cout << "Work Hard!";
    }

    return 0;
}