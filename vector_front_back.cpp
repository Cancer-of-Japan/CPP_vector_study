#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> T){
	for(int i = 0; i < T.size(); i++){
		cout << T[i] << " "; 
	}
	cout << endl;
}

int main(){
	vector<int> vec {1, 2, 3, 4, 5};
	cout << "Contents of vector" << endl;
	printVector(vec);
	cout << "Display front element" << endl;
	cout << vec.front() << endl;
	cout << "Display back element" << endl;
	cout << vec.back() << endl << endl;
	
	vec.back() = 50;
	cout << "Display back element after being modified..." << endl;
	cout << vec.back() << endl;

 	return 0;
}
