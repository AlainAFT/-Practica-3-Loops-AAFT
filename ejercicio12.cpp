#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n;
  int conta=0;
  double U0=1.0;
  double V1=0;
  cout<<"U0="<<U0<<endl;
  for(n=0;n<10;++n){
     U0=U0/(n+1.0);
     V1+=U0;
      ++conta;
     cout<<"U"<<conta<<"="<<U0<<" V"<<conta<<"="<<V1<<endl;
  }
    return 0;
}
