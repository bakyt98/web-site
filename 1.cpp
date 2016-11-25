
 
#include<iostream>
using namespace std;

int linearSearch(int array[], int size,int searchKey){
  
	for(int i=0; i<size;i++){
		if(searchKey==array[i]){
        return i;
		}
	}
	return -1;

}

int main(){
	int const max=5;
	
	int a[]={9,10,14,26,36};
	int getSearchNumber ; 
	cout<<"Enter a Number here"<<endl;
	cin>>getSearchNumber;

	int result = linearSearch(a,max,getSearchNumber);
	if(result>=0){
		 cout<<"The number "<<a[result]<<" was found"  <<endl;

	}else{
		cout<<"Nothing Found"<<endl;
	}
	
return 0;
}