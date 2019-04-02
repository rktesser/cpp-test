#include <iostream>
#include <string>
#include <iomanip>

int main(int argc, char** argv)
{
	int n;
	std::cin >> n;

	if(n <= 0){
		std::cout << "Error." << std::endl;
		return -1;
	}
	for(int i = n; i > 0 ; i--){
		for(int j = 0; j < i - 1; j++)
			std::cout << " ";
		for(int j = i - 1; j < n; j++)
			std::cout << "#";
		std::cout << std::endl;
	}

	return 0;
}
