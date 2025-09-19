


#include <iostream>
using namespace std;


/* STEPS */
// 1. read in the inputs
// 2. check the condition
	// if w is larger than 2 and is even
// 3. print out the corresponding outputs

int main(int argc, char **argv)
{
	
	// 1. read in inputs
	int w; // the variable we need to read
	cin >> w ; // read in our given input
	
	// 2. check conditions
	if(w>2 && (w%2 == 0)){cout << "YES";} // 3. print corresponding outputs
	else{cout<<"NO";} 
	
	
	return 0;
}

