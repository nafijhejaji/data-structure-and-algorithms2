#include<iostream>
#include<string>
using namespace std;

//defining a structure
struct carInfo{
    string brand;
    string model;
    int year;
    // defining a function to take input of the brand

void setBrand(string _brand)
{
    brand = _brand;
}

void setModel(string _model)
{
    model = _model;
}

void setYear(int _year)
{
    year = _year;
}

void printName()
{
    cout << "Car brand : "<<brand<<endl;
    
}

void printModel()
{
    cout << "Car model : "<< model<<endl;
}

void printYear()
{
    cout << "Manufacturing year : "<<year<<endl;
}

};

int main()
{
    carInfo car1;

    car1.setBrand("Tesla");
    car1.setModel("Model S");
    car1.setYear(2022);

    car1.printName();
    car1.printModel();
    car1.printYear();

    return 0;
}

//and its totally correct and working fine.




