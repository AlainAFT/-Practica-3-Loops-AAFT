#include <iostream>
#include<cmath>
using namespace std;
int main()
{
 int n;
 int k;
 int resultado=0;
 cin>>n>>k;
 for(int i =0;i<=n;++i){
     
     resultado+=pow(i,k);
 } cout<<resultado<<" es el total"<<endl;
 
    return 0;
}
