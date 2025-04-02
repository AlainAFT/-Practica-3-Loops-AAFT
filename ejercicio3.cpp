#include <iostream>
#include <string>
using namespace std;
int main()
{
 int response;
 int contador=0;
 bool haypastel= true;
cout<<"hay torta?"<<endl;
 while (haypastel==true and contador<10 ){
 contador++;
  cin>>response;

 
 if(response==1 ){
     cout<<"Om-nom-nom :P"<<endl;
     
 }else if(response==0){
     cout<<"no hay torta"<<endl;
     haypastel=false;
     break;
     
 } else if(response==10){
     
 } else 
 cout<<"su numero debe estar entre 1 y 0"<<endl;

 }
 
    return 0;
}
