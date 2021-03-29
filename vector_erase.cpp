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
	vec.erase(vec.begin() + 1);
	cout << "After erase..." << endl;
	printVector(vec);
	cout << endl;
	
	vector<int> vec1 {6, 7, 8, 9, 10};
	cout << "Contents of vector" << endl;
	printVector(vec1);
	vec1.erase(vec1.begin() + 1, vec1.end() - 1);
	cout << "After erase..." << endl;
	printVector(vec1);

 	return 0;
}


