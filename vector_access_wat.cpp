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
	cout << "Vec1...";
	printVector(vec1);
	
	vec1.at(1) = 10;
	cout << "Vec1...";
	printVector(vec1);

	cout << "Vec1 at(1)..." << vec1.at(1) << endl;
	cout << "Vec1 at(10)..." << vec1.at(10) << endl;
	

 	return 0;
}

