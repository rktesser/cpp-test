#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <list>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{
	string line;
	int n_queries;

	getline(cin, line);
	istringstream ss(line);
	ss >> n_queries;
	vector<string> classroom;

	for(int i = 0; i < n_queries; i++){
		int query_type, n_times;
		getline(cin, line);
		istringstream query(line);
		query >> query_type;
		query >> n_times;
		
		if(query_type == 1){
			for(int j = 0; j < n_times; j++){
				string student;
				getline(cin, student);
				classroom.push_back(student);
				sort(classroom.begin(),classroom.end());
			}
		}else if(query_type == 2){
			for(int j = 0; j < n_times; j++){
				int key;
				getline(cin, line);
				istringstream key_ss(line);
				key_ss >> key;

				if(key <= classroom.size()){
					cout << classroom[key - 1] << endl;
				}
			}
		}

	}
}
