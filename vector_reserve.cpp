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
	vector<int> vec1;

	for(int i = 0; i < 100; i++){
		vec1.push_back(i);
	}
	cout << "When nothing special is done...";
	printVector(vec1);
	cout << endl;

	vector<int> vec2;
	vec2.reserve(1000);
	for(int i = 0; i < 100; i++){
		vec2.push_back(i);
	}
	cout << "When reserved...";
	printVector(vec2);
	cout << endl;
	

 	return 0;
}




