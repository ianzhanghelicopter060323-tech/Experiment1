#include <iostream>
#include <string>
using namespace std;

//#define MAXSIZE 100

struct student
{
    long id_num;
    string name;
    int grade1;
    int grade2;
};


/*
**input:ID:longint Name:string Grade1: int Grade2: int
*/
void inpput(struct student stu[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter student " << i + 1 << " (ID Name Grade1 Grade2): ";
        cin >> stu[i].id_num >> stu[i].name >> stu[i].grade1 >> stu[i].grade2;
    }
}

void outpput(struct student stu[], int n)
{
    cout << "\nStudent information:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "ID: " << stu[i].id_num
             << " Name: " << stu[i].name
             << " Grade1: " << stu[i].grade1
             << " Grade2: " << stu[i].grade2 << '\n';
    }
}

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Number of students must be greater than 0.\n";
        return 0;
    }

    student* stu = new student[n];

    inpput(stu, n);
    outpput(stu, n);

    delete[] stu;
    return 0;
}
