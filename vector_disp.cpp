#include <iostream>
#include <vector>
#include <sstream>

using namespace std;


void output_singleline(const vector<T>& v){
	constexpr wchar_t sep[] = L", ";
	wstringstream wss;
	for (const auto& i : v){
		wss << i << data(sep);
	}
	if(const auto& s = wss.str(); !empty(s)){
		wcout << s.substr(0, s.length() - size(sep) + 1);
	}
	wcout << endl;
}

template <typename T>
void output_singleline(const vector <T>& v);

int main(){
	vector<int> v1 = {0, 1, 2, 3, 4};
	vector<int> v2(next(begin(v1), 1), prev(end(v1), 2));

	wcout << L"v1: ";
	output_singleline(v1);
	wcout << L"v2: ";
	output_singleline(v2);

	return 0;
}

