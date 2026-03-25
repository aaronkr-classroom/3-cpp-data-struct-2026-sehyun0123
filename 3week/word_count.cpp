#include<iostream>
#include<string>
#include<ios>
#include<iomanip> 
#include<vector>
#include<algorithm>

using namespace std;
int main(void) {
	cout << "enter all words, then EOF: ";
	vector <string> words;

	//입력받기
	string word;
	while (cin >> word) {
		words.push_back(word);
	}
	
	// (word : count }출력
	for (int i = 0; i < words.size(); i++)
	{
		cout << words[i] << ": " <<
			count(words.begin(), words.end(), words[i]) << endl;
	}

	// 마지막 결과
	cout << "Words: " << words.size();


	return 0;
}