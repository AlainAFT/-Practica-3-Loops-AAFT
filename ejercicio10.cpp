#include<iostream>
using namespace std;

int main()
{
int x;
int z;
int menor;
int capsula=1;
cin>>x;
cin>>z;
// cual es el menor 
if(x<z){
 menor=x;
} else {
menor=z;
}
int i=menor;
// mcd
for(i;i>=1;i--){
if(x%i==0 and z%i==0){
capsula*=i;
break;
 
} 
}
cout << capsula << endl;//este es el mcd




    return 0;
}