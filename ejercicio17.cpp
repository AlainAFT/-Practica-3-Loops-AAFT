#include <iostream>
using namespace std;
int main()
{
   int n=1;
  
   int pr=2;
   int c=0;
   while(c<n){
       int dv=0;
       for(int i=1;i<=pr;++i){
           if(pr%i==0){
               dv++;
           }
           
       }
       if(dv==2){
           cout<<pr<<" ";
           c++;
       }
       pr++;
   }
  
   
  
  
    return 0;
}
