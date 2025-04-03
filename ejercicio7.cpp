#include<iostream>
using namespace std;

int main()
{
cout << "verifiquemos si tienes un palindromo" << endl;
    string ask;
    int i ;
    getline(cin,ask);
    cout << ask[5]<< endl;
    for(i=0;i<ask.size();i++){
     if(ask[i]==' '){
         ask.erase(i,1);
       --i;  
     }
    } cout << ask << endl;
     cout << ask.size()<< endl;
     
     bool palin=true;
     for(int e=0;e<ask.size()/2;++e){
     int cont = ask.size() - 1 - e;
     if(ask[e]!=ask[cont]){
       palin=false;
       break;
     } 
     }
     if(palin==true){
     cout<<"palindromo"<<endl;
     } 
     if (palin==false){
     cout << "no palindromo" << endl;
     }
     
    return 0;
}