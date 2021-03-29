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
	//resize + size
	vec.resize(7);
	cout << "After resize..." << endl;
	printVector(vec);
	cout << "Size of vector after resize..." << endl;
	cout << vec.size() << endl;
	cout << endl;

	//resize - size
	vec.resize(3);
	cout << "After resize..." << endl;
	printVector(vec);
	cout << "Size of vector after resize..." << endl;
	cout << vec.size() << endl;
	cout << endl;
	
	//resize and replacement
	vec.resize(5, 99);
	cout << "After resize..." << endl;
	printVector(vec);
	cout << "Size of vector after resize..." << endl;
	cout << vec.size() << endl;

 	return 0;
}




