//calculate the sum of 1 to n using recursion
#include<iostream>
using namespace std;

int totalSum(int n)
{
    if (n<=0)
    {
        return 0;
    }

    return n+totalSum(n-1);


}

int main(){
    int n;
    cout << "enter the value of n:";
    cin >> n;
    cout <<"the total sum of 1 to " << n << " is: " <<totalSum(n)<<endl;

}
 