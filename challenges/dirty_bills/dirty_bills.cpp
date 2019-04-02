#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	int n;
	int dirty_count = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		int count = 0;
		string state;
		cin >> count;
		cin >> state;
		if(state == "dirty")
			dirty_count += count;
	}
	
	if(dirty_count)
		cout << "There are " << dirty_count << " dirty bills." << endl;
	else
		cout << "There are no dirty bills." << endl;

	return 0;
}
