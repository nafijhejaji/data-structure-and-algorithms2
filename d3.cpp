//constructor and destructor

#include <iostream>
#include <string>

using namespace std;

struct student
{
    string name;
    int rollNumber;
    float marks;

    student(string _name, int _rollNumber, float _marks)
    {
        name = _name;
        rollNumber = _rollNumber;
        marks = _marks;
    }



    void insertName(string _name)
    {
        name = _name;
    }

    void insertRollNumber(int _rollNumber)
    {
        rollNumber = _rollNumber;
    }

    void insertMarks(float _marks)
    {
        marks = _marks;
    }

    void printNAME()
    {
        cout << "Name : " <<name<<endl;
    }

    void printRollNumber()
    {
        cout << "Roll Number : " <<rollNumber<<endl;
    }

    void printMarks()
    {
        cout <<"marks : "<<marks<<endl;
    }

    ~student()
    {
        cout<<"here is the destructor"<<endl;
    }

};

int main()
    {

        string name;
        int rollNumber;
        float marks;

       
        cout<<"insert name : " <<endl;
        getline(cin,name);

        cout<<"insert roll number : " <<endl;
        cin>>rollNumber;

        cout<<"insert marks : "<<endl;
        cin>>marks;
        student s1(name,rollNumber,marks);

        s1.printNAME();
        s1.printRollNumber();
        s1.printMarks();

        return 0;
    }