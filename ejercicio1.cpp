#include <iostream>
using namespace std;
int main()
{
 string line;
 getline(cin,line);
 for (int i=0;i<line.size();++i){
 if(line[i]==' '){
     cout<<i<<" ";
 }
 }
  cout<<line.size()<<" ";
 
    return 0;
}
