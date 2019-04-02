#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	string line;
	int n;
	
	getline(cin, line);
	n = stoi(line);
	for(int i = 0; i < n; i++){
		getline(cin, line);
//		cout << line << endl;
		istringstream ss(line);
		vector<string> fields;
		string f;
		while(getline(ss, f, ',')){
			fields.push_back(f);
			//cout << f << " ";
		}
		cout << fields[0] << " is " << fields[4];
		cout << " years old and lives in " << fields[2] << ", ";
		cout << fields[1] << "." << endl;
	}

	return 0;
}
