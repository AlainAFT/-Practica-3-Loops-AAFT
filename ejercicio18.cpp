#include <iostream>
using namespace std;
int main()
{
   int n,k=0;
   cin>>n;
   while(n>0){
       if(n%3==0){
           n+=4; 
           cout<<n<<" ";
          
       }
       else if(n%4==0){
           n=n/2;
           cout<<n<<" ";
       }
       else{
           n-=1;
           cout<<n<<" ";
           
       }
      
      k++;
   } cout<<""<< k;
    
  
  
    return 0;
}
