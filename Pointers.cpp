//   my first pointer
#include <iostream>
using namespace std;
int main (){
	int firstvalue, secondvalue;
	int *mypointer;
	
	mypointer= &firstvalue;
	*mypointer= 10;
	mypointer= &secondvalue;
	*mypointer= 20;
	cout<< "firstvalueis " << firstvalue<< endl;
	cout<< "secondvalueis " << secondvalue<< endl;
	return 0;
};
