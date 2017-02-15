#include <iostream>
using namespace std;
bool ok(int q[], int c);

int main() {
	int q[3], c=0, i;
	int solCounter=0;
	cout << "All stable marriages: "<< endl;
	q[0] = 0;
	
	nextCol: c++;
		if (c==3) goto print;
	q[c] = -1;
	
	nextRow: q[c]++;
		if (q[c]==3) goto backtrack;
		for (i=0; i<c; i++) 
			if(!ok(q,c))goto nextRow;
		goto nextCol;
	
	backtrack: c--;
		if (c==-1) return 0;
		goto nextRow;

	print: solCounter++;
		cout << "Solution numer " << solCounter << ":"<< endl;
		for (int i=0; i<3; i++) cout << q[i] << " ";
		cout << endl;
		goto backtrack;
}
bool ok(int q[], int c) {
	static int mp[3][3] = {{0,2,1},{0,2,1},{1,2,0}};
	static int wp[3][3] = {{2,1,0},{0,1,2},{2,0,1}};
	int new_man = c;
	int new_woman = q[c];
	for (int i=0; i<c; i++) {
		if (q[c]==q[i]) return false;
		
		int current_man = i;
		int current_woman = q[i];
		if ( (mp[current_man][new_woman] < mp[current_man][current_woman]
		    &&
		    wp[new_woman][current_man]< wp[new_woman][new_man])
		    ||
		     (mp[new_man][current_woman] < mp[new_man][new_woman] 
		    && 
		    wp[current_woman][new_man] < wp[current_woman][current_man]))  return false;
	}
	return true;
}
	
