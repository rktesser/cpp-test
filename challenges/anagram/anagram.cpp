#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int count = 0;
	cin >> count;

	if(count <= 0) return -1;
	
	for(int i = 0; i < count; i++){
		string word1, word2;
		cin >> word1;
		cin >> word2;
		if(word1.length() == word2.length()){
			string sorted1 = word1;
			string sorted2 = word2;
			sort(sorted1.begin(), sorted1.end());
			sort(sorted2.begin(), sorted2.end());
			if(sorted1 == sorted2){
				cout << word1 << " is an anagram of " << word2 << endl;
				continue;
			}
		}
				
		cout << word1 << " is not an anagram of " << word2 << endl;
	
	}
	return 0;
}
