#include <iostream>
using namespace std;
int main() {
	
	// 0=Blank space, 1= Queen
	int b[8][8]={0};
	int r, c=0, i, n=1;
	b[0][0] = 1;
	//next column label
	NC: c++; //move over 1 column
	    if(c==8) goto print;
	r = -1; //guarantee start at 0
	// next row label
	NR: r++; //next row
	    if(r==8) goto backtrack;
		// row test:
		for(i=0; i<c; i++)
			if(b[r][i]==1)
				goto NR;
		//up-left diagonal test:
		for(i=1; (r-i)>=0 && (c-i)>=0;i++)
			if(b[r-i][c-i]==1)
				goto NR;
		//down-left diagonaltest:
		for(i=1; (r+i)<8&&(c-i)>=0;i++)
			if(b[r+i][c-i]==1)
				goto NR;
		b[r][c]=1;//if pass all those test, make the space 1(a queen) 
		goto NC; //move to next column
	backtrack: c--; //move back a column
		if(c==-1)return 0; //this means found all solutions
	r=0;
	while(b[r][c]!=1) //try to find te queen so can undo it
		r++;
	b[r][c]=0;//make that incorrect queen a blank space
	goto NR;	 
	print:  for(int i=0; i<8; i++) {
			for(int j=0; j<8; j++) cout << b[i][j];
			cout << endl;
		}
		cout << endl << endl;
		goto backtrack;
	
	return 0;
}
