#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> numbers;
	int n;
	
	cin >> n;
	while(n--){
		int number;
		cin >> number;
		numbers.push_back(number);
	}

	sort(numbers.begin(), numbers.end());
	
	for(int number : numbers)
		cout << number << endl;
		
	return 0;
}
