#include <iostream>

int main(int argc, char** argv)
{
	int n;
	std::cin >> n;
	long fib[n];
	fib[0] = 0;
	fib[1] = 1;
	for(int i = 2; i <=n ; i++)
		fib[i] = fib[i-1] + fib[i-2];
	std::cout << fib[n] << std::endl;
	return 0;
}
