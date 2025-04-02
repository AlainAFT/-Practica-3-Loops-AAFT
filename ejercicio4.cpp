#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x;
 cout<<"ingrese un numero para hacer su factorial"<<endl;
 cin>>x;
 cout<<":";
 while(x>14){
     cout<<"el numero tiene que ser menor que 14, intentelo de nuevo"<<endl;
     cin>>x;
 } 
 while(x<0){
     cout<<"no puede ser negativo, intentelo de nuevo"<<endl;
     cin>>x;
 }
 
 int result=1;
 for(int i=1;i<=x;++i){
     result *=i;
    
 
 } cout<<result;
    return 0;
}
