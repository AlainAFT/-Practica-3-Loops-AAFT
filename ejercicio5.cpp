#include <iostream>
#include <string>
using namespace std;
int main()
{
   int n;
   int k;
   cin>>n>>k;
   int spaces=n-1;
   int daycont=0;
   int day=1;
   for (int i=0;i<spaces;++i){
       cout<<"   ";
       ++daycont;
   }
   for( day; day<=k;++day){
       if(day<10){
           cout<<" "<<day;
       }else {
       cout<< day;}
       daycont++;
       if(day<k){
           cout<<" ";
       }
       if(daycont%7==0){
           cout<< endl;
       }
      
   }
   
 
    return 0;
}
