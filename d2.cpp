#include<iostream>
#include<string>

using namespace std;

struct person
{
    string name;
    int date,month,year;

    void setName(string _name)
    {
        name = _name;
    }

    void setDOB(int _date, int _month, int _year)
    {
        date = _date;
        month = _month;
        year = _year;
    }

    void printName()
    {
        cout << "Name : " << name << endl;
    }

    void printDOB()
    {
        cout << "Date of Birth : " << date << "/" << month << "/" << year << endl;
    }

};


int main()
{

    string name;
    int date, month,year;

    cout << "Enter your name : " << endl;
    getline(cin,name);
    cout << "Enter your date of birth : " <<endl;
    cin>>date>>month>>year;
    

    person p1;
    p1.setName(name);
    p1.setDOB(date,month,year);

    p1.printName();
    p1.printDOB();

}