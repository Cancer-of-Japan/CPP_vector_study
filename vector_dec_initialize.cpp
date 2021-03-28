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
	vector<int> vec1 {1, 2, 3, 4, 5};
	printVector(vec1);
	vector<int> vec2 = {1, 2, 3, 4, 5};
	printVector(vec2);
	
	//set 100 of 0s
	vector<int> vec3(100);
	printVector(vec3);

	//set 100 of 1s
	vector<int> vec4(100, 1);
	printVector(vec4);
	
	//copy all of items from vec1
	vector<int> vec5(vec1);
	printVector(vec5);

	//copy vec1[1] to vec[2]
	vector<int> vec6(vec1.begin()+ 1, vec1.begin() + 3);
	printVector(vec6);
	
 	return 0;
}
