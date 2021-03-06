#include <iostream>
#include <cmath>
bool ok(int q[], int &c);
void print(int q[], int &count);
using namespace std;

int main(){
	int q[8];
	int c = 0;
	q[0] = 0;
	static int count = 0;
	   
	while(c >= 0){
	   c++;
	   if(c == 8){
	   	print(q, count);
	   	c--;
	   }
	   else{
		q[c] = -1;
	   }
	    while(c >= 0){
	        bool f = false;
	        q[c]++;
		    if(q[c]== 8) {
		        c--;
		        f = true;
		    }
		    if(!f){
	        if(ok(q, c)) break;
	    	}
	    }	
	   }
	   return 0;
	 }
	


void print(int q[], int &count){
    count++;
		cout << endl;
		cout << "Solution #: " << count << endl;
		cout << " " << q[1] + 1<< q[4] + 1<< endl;
		cout << q[0] + 1<< q[2] + 1<< q[5] + 1<< q[7] + 1<< endl;
		cout << " " << q[3] + 1<< q[6] + 1;
}

bool ok(int q[], int &c){
	static int adj[8][5] = {          
   {-1},                 
   {0, -1},              
   {0, 1, -1},           
   {0, 2, -1},             
   {1, 2, -1},           
   {1, 2, 3, 4, -1},     
   {2, 3, 5, -1},        
   {4, 5, 6, -1},         
};

for(int i = 0; i < c; i++) if(q[i] == q[c]) return false;

	for(int a = 0; adj[c][a] != -1; a++)
		if(abs(q[c] - q[adj[c][a]]) == 1) return false;

return true;
}

