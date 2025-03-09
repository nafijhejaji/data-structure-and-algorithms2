#include<iostream>
using namespace std;

int fibo(int n)
{

    if (n<=2)
    {
        return n;
    }

    return fibo(n-1) + fibo(n-2);

}

int main(){

    int n;
    cout<< "enter the number: ";
    cin>>n;
    cout<<"the fibonacci value of "<<n<<" is : "<<fibo(n)<<endl;  
}
 