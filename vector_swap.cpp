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
	vector<int> vec1 {1, 2, 3, 4, 5};
	vector<int> vec2 {6, 7, 8, 9, 10} ;
	cout << "Contents of vector" << endl;
	printVector(vec1);
	printVector(vec2);
	vec1.swap(vec2);
	cout << "After swap..." << endl;
	printVector(vec1);
	printVector(vec2);
	cout << endl;

 	return 0;
}




