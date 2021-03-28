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
	vector<int> vec;
	
	vec.push_back(1);
	vec.push_back(2);

	vec.emplace_back(3);
	vec.emplace_back(4);
	
	cout << "Display vector..." ;
	printVector(vec);
	
 	return 0;
}

