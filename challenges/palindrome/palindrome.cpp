#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int n;
	string word;
	
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> word;
		int wl = word.length();
		int j;
		for(j = 0; j < wl && word[j] == word[wl - j - 1]; j++);
		if(j == wl)
			cout << word << " is palindrome" << endl;
		else
			cout << word << " is not palindrome" << endl;
	}

	return 0;
}
