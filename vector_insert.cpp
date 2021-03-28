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
	vector<int> vec {1, 2, 3};
	vector<int> vec1 {1, 2, 3};
	vector<int> vec2 {4, 5, 6};
	vector<int> vec3 {7, 8, 9};
	vector<int> vec4 {10, 11, 12};
	
	//insert 99 to 2nd of vec	
	cout << "Vec..." << endl;
	printVector(vec);
	
	vec.insert(vec.begin() + 1, 99);

	cout << "Vec after modified..." << endl;
	printVector(vec);
	cout << endl;

	//insert prosisure for vec1 and vec2
	cout << "Vec1..." << endl;
	printVector(vec1);
	cout << "Vec2..." << endl;
	printVector(vec2);
	
	vec1.insert(vec1.begin() + 1, vec2.begin(), vec2.end());
	
	cout << "Vec1 after insert..." << endl;
	printVector(vec1);
	
	//insert prosisure for vec3 and vec4
	cout << "Vec3..." << endl;
	printVector(vec3);
	cout << "Vec4..." << endl;
	printVector(vec4);
	
	vec3.insert(vec3.end(), vec4.begin(), vec4.end());
	cout << "Vec3 after insert..." << endl;
	printVector(vec3);
	
	
 	return 0;
}

