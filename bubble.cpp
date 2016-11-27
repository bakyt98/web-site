#include <iostream>
using namespace std;
int main(){
int a;
int tmp;
cin>>a;
int b[a];
for (int i=0; i<a; i++)
cin>>b[i];
for (int j=0; j<a; j++){
for (int i=0; i<a-1; i++){
if (b[i]>b[i+1]){
 tmp=b[i]; 
b[i]=b[i+1];
b[i+1]=tmp;}
}
}
for (int i=0; i<a; i++){
cout<<b[i];
cout<<" ";
}
return 0;

}