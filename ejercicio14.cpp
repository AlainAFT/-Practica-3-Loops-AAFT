#include<iostream>
using namespace std;

int main()
{
   string ask;
   bool poli=0;
   int i=0;
   cin>>ask;
   int e= ask.size() ;
   for(i=0;i<ask.size();i++){
       e--;
       if(ask[i]==ask[e]){
           poli=1;
       }
   } 
   if(poli==1){
       cout<<"polindormo"<<endl;
   }
    return 0;
}
