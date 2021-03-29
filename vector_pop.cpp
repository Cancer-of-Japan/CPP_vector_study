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
	vec.pop_back();
	cout << "After pop back..." << endl;
	printVector(vec);

 	return 0;
}

