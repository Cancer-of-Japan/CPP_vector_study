#include <iostream>
#include <vector>

using namespace std;

void print2dVector(vector<vector<int>> T){
	for(int i = 0; i < T.size(); i++){
		for(int j = 0; j < T[i].size(); j++){
			cout << T[i][j] << " "; 
		}
		cout << endl;
	}
	cout << endl;
}

int main(){
	vector<vector<int>> vec {
		{1, 2, 3}, 
		{4, 5, 6}
	};

	cout << "Vec..." << endl;;
	print2dVector(vec);
	

 	return 0;
}
