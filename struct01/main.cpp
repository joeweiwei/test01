#include <iostream>

struct Employee_data
{   int number;
    char name[3];
    int money;
    int hours;
    int income;
}Employee;
using namespace std;

int* person;

int main()
{   cout << "Nember of Employee= ";
    int n;
    cin >> n;
    person = new int[n];
    cout << endl;
    for( int i=0; i<n; ++i )
       { cout << "Employee's Number= ";
         cin >> Employee.number;
         cout << "Employee's Name  = ";
         cin >> Employee.name;
         cout << "Employee's Money = ";
         cin >> Employee.money;
         cout << "Employee's Hours = ";
         cin >> Employee.hours;
         Employee.income = Employee.money*Employee.hours;
         cout << "Employee's Income= " << Employee.income << endl;
         cout << endl;
       }
    delete [] person;
    return 0;
}
