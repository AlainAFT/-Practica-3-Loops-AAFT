#include <iostream>
#include <string>
using namespace std;
int main()
{
 string line;
 getline(cin,line);
 string word="";
 for (int i=0;i<line.size();++i){
   if(line[i]==' '){
    if(!word.empty()){
    cout<<"["<<word<<"]"<<endl;
    word="";
    }
    }else{
    word+=line[i];
    }
 
 }
  if (!word.empty()) {
        cout << "[" << word << "]" << endl;
    }
    cout<<line.size()<<endl;
 
    return 0;
}
