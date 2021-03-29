#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> vec){
	for(int i = 0; i < vec.size(); i++){
		cout << vec[i] << " "; 
	}
	cout << endl;
}

int main(){
	vector<int> vec {1, 2, 3, 4, 5};
	cout << "Contents of vector" << endl;
	printVector(vec);
	vec.clear();
	cout << "After clear..." << endl;
	printVector(vec);
	cout << endl;

 	return 0;
}



