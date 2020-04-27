#include "iostream"
#include "stdio.h"
using namespace std;
const int max = 5;

void ShowStr() 
{
	int str[max] = {234,123,354,123,124};
	int* Ptr;
	Ptr = str;
	for (int i = 0; i <max; i++)
	{
		std::cout << *Ptr << endl;
		Ptr++;
	}

}
