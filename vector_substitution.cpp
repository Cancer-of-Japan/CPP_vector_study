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
	vector<int> vec1{1, 2, 3, 4, 5};
	vector<int> vec2{9, 8, 7};
	printVector(vec1);
	printVector(vec2);

	vec2 = vec1;
	printVector(vec2);

	vec1[0] = 10;
	cout << "Vec1...";
	printVector(vec1);
	
	cout << "Vec2...";
	printVector(vec2);

 	return 0;
}

