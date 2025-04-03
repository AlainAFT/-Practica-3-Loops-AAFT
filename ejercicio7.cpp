#include<iostream>
using namespace std;

int main()
{
    int x; 
    int sign = 1;
    double result=0;
    cin>>x;
    for(int i=1;i<=x;++i){
   result+=(1.0/i)*sign;
   sign=-sign;
    }
    cout << result << endl;
    return 0;
}