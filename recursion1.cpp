#include<iostream>
using namespace std;
//print 1 to n;

void print(int n)
{
   if (n<=0)
   {
         return;
   }
    print (n-1);
        cout << n <<endl;   
}

int main(){
    int n;
    cout << "enter the value of n:";
    cin >> n;
    print(n);

}
 