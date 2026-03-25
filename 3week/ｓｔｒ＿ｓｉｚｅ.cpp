#include<iostream>
#include<string>

using namespace std;

int main(void) 
{
	//프로그램 설명하기
	cout << "Enter all words, then EOF: ";

	//입력받기
	string word;
	string max = "";
	string min = "";

	while (cin >> word) {
		if (min.size() == 0) min = word;
		if (max.size() == 0) max = word;

		//크기 확인
		if (word.size() < min.size())min = word;
		else if (word.size() > max.size()) max = word;
	}

	//결과출력
	cout <<
		"Min word: " << min << endl << "size: " << min.size() << endl <<
		"Max word: " << max << endl << "size: " << max.size() << endl;

	return 0;
}