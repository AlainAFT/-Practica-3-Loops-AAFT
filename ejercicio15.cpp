#include<iostream>
using namespace std;

int main()
{
    // variables que usaremos
int x;
cin>>x;
int most=x;
string t;
int resid=x%2 ;
int cocie=x/2;
// casos especiales
if(x==1){
   t="01" ;
    
}
if(x==0){
   t="00";
} 
// sacar el binario al reves
while(x>=2){
 cocie=x/2;
 resid=x%2;
 x=cocie;
 cout<<resid;
 t +=to_string(resid);
 if(cocie==1){
     cout<<x<<endl;
     t+=to_string(cocie);
 }
} 
// poner el binario en su correcta posicion
cout<<t.size()<<endl;
char save;

int conttotalsize=t.size()-1;
for(int i=0;i<conttotalsize;i++){
save=t[i];
t[i]=t[conttotalsize];
t[conttotalsize]=save;
--conttotalsize;


} cout<<"el binario de "<<most<<" es ";
cout<<t<<endl;
    return 0;
}
