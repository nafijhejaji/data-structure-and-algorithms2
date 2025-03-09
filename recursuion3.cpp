//calculate the factorial of a number using recursion

#include<iostream>
using namespace std;

int fact(int n)
{
    if (n<=0)
    {
        return 1;
    }

    return n*fact(n-1);
    
}

int main(){

    int n;
    cout <<"enter the value of n to calculate the factorial: ";
    cin >> n;
    cout <<"the factorial of "<<n<< " is :"<< fact(n)<<endl;

}
 