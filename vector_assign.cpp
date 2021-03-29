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
	vector<int> vec1 {1, 2};
	vector<int> vec2 {6, 7};
	vector<int> vec3 {8, 9, 10, 11, 12};

	//add 5 9s
	cout << "Contents of vector" << endl;
	printVector(vec1);
	vec1.assign(9, 5);
	cout << "After assign..." << endl;
	printVector(vec1);
	cout << endl;

	//fill with list
	cout << "Contents of vector" << endl;
	printVector(vec2);
	vec2.assign({9, 8, 7, 6, 5});
	cout << "After assign..." << endl;
	printVector(vec2);
	cout << endl;

	//fill with partial of other v	ectors
	cout << "Contents of vector" << endl;
	printVector(vec3);
	vec3.assign(vec2.begin() + 1, vec2.end() - 1);
	cout << "After assign..." << endl;
	printVector(vec3);
	cout << endl;

 	return 0;
}
