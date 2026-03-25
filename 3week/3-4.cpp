#include<iostream>
#include<string>
#include<ios>
#include<iomanip> 
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

	cout << "문장을 입력: (종료하려면 Ctrl+z)" << endl;

	vector<string> sen;
	string word;
	while (cin >> word) {
		sen.push_back(word);
	}


	
	typedef vector<string>::size_type vec_size;
	vec_size size = sen.size();

	int i = 0;
	while (i < sen.size()) {
		cout << sen[i] << " : " << sen[i].size() << endl;
		i++;
		
	}
	return 0;




}