#include<iostream>
using namespace std;

int main()
{
// ingreso de las variables
    string x ;
    getline(cin,x);
    int cont=0;
    int i=0;
    bool nohayf=false;
    bool hay1f=false;
    bool hay2f=false;
    //las parte f
    for(i=0;i<=x.size();++i){ 
     if(x[i]=='f'){
      ++cont;
      if(cont==2){
      break;
      }
     }
       
    }
    // result
    if(cont==1){
    cout << "-1" << endl;
    }
    if(cont==2){
    cout << i<< endl;
    }
    if(cont==0){
    cout<<"-2"<<endl;
    }
     
     
    
    return 0;
}