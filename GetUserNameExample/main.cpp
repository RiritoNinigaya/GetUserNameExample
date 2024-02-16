#include <Windows.h>
#include <iostream>
using namespace std;


int main() 
{
	char buffer[512];
	long unsigned int bufsize = 100;
	GetUserNameA(buffer, &bufsize);
	cout << buffer << endl;
	return 0;
}