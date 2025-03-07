#include<iostream>
using namespace std;

void disp1toN(int n)
{

    if (n<=0)
        return;
    disp1toN(n-1);
    cout << n<<endl;

}

int sum(int n)
{

    if(n<=0)
        return 0;
    return n+sum(n-1);

}

int fact(int n)
{

    if(n==0)
        return 1;
    return n*fact(n-1);

}

int Fibo(int n)
{
    if (n<=2)
    {
        return n;
    }
    return Fibo(n-1)+ Fibo(n-2);

}

int DigitSum(int n)
{

    if(n==0)
        return 0;
    return n%10+DigitSum(n/10);

}
int Digitcount(int n)
{

    if(n==0)
        return 0;
    return 1+Digitcount(n/10);

}

bool power(int n)
{
    if(n==1)
        return true;
    if(n==0)
        return false;
    if(n%4==0)
    {
        power(n/4);
    }
    else
        return false;


}

int main ()
{

    int c;

    while(1)
    {
        cout<<endl;
        cout<<"Enter your choice : "<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"1. print (1 to n)"<<endl;
        cout<<"2. sum(1 to n)"<<endl;
        cout<<"3. Factorial"<<endl;
        cout<<"4. Nth Fibonacci"<<endl;
        cout<<"5. Sum of digits of a number "<<endl;
        cout<<"6. count tne digits of a number "<<endl;
        cout<<"7. number is a power "<<endl;

        cin >> c;
        if(c==0)
        {
            break;
        }
        if(c==1)
        {
            int n;
            cout << "Enter a number :";
            cin>> n;
            disp1toN(n);
        }
        else if(c==2)
        {
            int n;
            cout << "Enter a number :";
            cin>> n;
            cout<< "Sum: "<<sum(n)<<endl;
        }
        else if(c==3)
        {
            int n;
            cout << "Enter a number :";
            cin>> n;
            cout<< "Fact: "<<fact(n)<<endl;
        }
        else if(c==4)
        {
            int n;
            cout << "Enter a number :";
            cin>> n;
            cout<< "Fibo: "<<Fibo(n)<<endl;
        }
        else if(c==5)
        {
            int n;
            cout << "Enter a number :";
            cin>> n;
            cout<< "Sum: "<<DigitSum(n)<<endl;
        }
        else if(c==6)
        {
            int n;
            cout << "Enter a number :";
            cin>> n;
            cout<< "digits: "<<Digitcount(n)<<endl;
        }
        else if(c==7)
        {
            int n;
            cout << "Enter a number :";
            cin>> n;
            bool r=power(n);
            if(r==0)
                cout<< "power: false "<<endl;
            else
                cout<< "power: true "<<endl;
        }
    }

}
