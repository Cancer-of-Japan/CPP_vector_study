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
	vector<int> vec1;
	vector<int> vec2 {1, 2, 3, 4, 5};
	
	cout << "Display 1 if NULL, 0 if not NULL" << endl;
	cout << vec1.empty() << endl;
	cout << vec2.empty() << endl;

 	return 0;
}

