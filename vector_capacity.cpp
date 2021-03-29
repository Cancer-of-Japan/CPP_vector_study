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
	vector<int> vec(100, 0);

	cout << "Contents of vector" << endl;
	printVector(vec);
	cout << "Size of vector..." << endl;
	cout << vec.size() << endl;
	cout << "Capacity of vector..." << endl;
	cout << vec.capacity() << endl;
	cout << endl;	
	//size shows number of elements currently stored, 
	//capacity shows number of elements stored in memory.
	vec.push_back(0);
	cout << "Size of vector..." << endl;
	cout << vec.size() << endl;
	cout << "Capacity of vector..." << endl;
	cout << vec.capacity() << endl;

 	return 0;
}
