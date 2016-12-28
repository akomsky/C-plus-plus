#include <iostream>
#include <cmath>
using namespace std;
int main() {

	// this is a 1-D array
	// each element in the array
	// represent the row in which
	// the queen is in.
	
	int q[8], c=0, i;
	q[0]=0; // this means the first col(0) has a queen in row(0)
	
	NC: c++; // next column
		if (c==8) goto print;
	
	q[c]=-1; //starts the row from beg.

	NR: q[c]++; // 
		if (q[c]==8) goto backtrack; //means mistake 
	
	//one inclusive test
	//conflict test:
	for (i=0; i<c; i++)
		if (q[c]==q[i]||(c-i)==abs(q[c]-q[i])) goto NR;
	
	//if no conflict in row
	//queen is already placed from before.
	
	goto NC;

	backtrack: c--;
		if (c==-1) return 0;
	goto NR;

	print: for (i=0; i<8; i++) cout << q[i] << " ";
		cout << endl<< endl;
	goto backtrack;

	return 0;
}
