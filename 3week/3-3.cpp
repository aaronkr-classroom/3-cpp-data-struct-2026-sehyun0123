#include<iostream>
#include<string>
#include<ios>
#include<iomanip> 
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	
	cout << "문장을 입력: " << endl;

	vector<string> sen;
	string word;
	while (cin >> word) {
		sen.push_back(word);
	}

	typedef vector<string>::size_type vec_size;
	vec_size size = sen.size();

	cout << size << endl;

	return 0;




}