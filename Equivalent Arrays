#include <iostream>
using namespace std;
void right_shift(int a[], int size) {
	int temp = a[size-1];
	for(int i=size-1;i>0;i--)
		a[i]=a[i-1]; 
	a[0]=temp;
}
bool equivalent(int a[],int b[],int size){ 
	bool isSame=true;
	for(int i=0;i<size;i++) 
		if(a[i]!=b[i]) isSame=false;
	 return isSame;
}
int main(){
	int a[5]={1,2,3,4,5}; 
	int b[5]={2,3,4,5,1}; 
	bool isSame=false;
	for (int i=0; i<5; i++) {
		if (equivalent(a,b,5))
			isSame = true;
		    right_shift(a,5);
	}
	if(isSame) 
		cout << "a and b are equivalent." << endl;
	else cout << "a and b are not equivalent." << endl;
	return 0;
}
	
