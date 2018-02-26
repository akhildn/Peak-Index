// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int i = 0;
	int left = 0;
	int right;
	int a[32];

	ifstream file("peak.txt");
	int nl = 0;

	if (file.is_open()) {
		while (!file.eof())
		{
			file >> a[nl];
			++nl;
		}
	}

	right = nl;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid - 1] < a[mid] && a[mid + 1] < a[mid])
		{
			cout << "output: index is:" << mid << "\t value is:" << a[mid];
			break;
		}
			
		else if (a[mid - 1]<a[mid] && a[mid]<a[mid + 1])
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	int z;

	cout << "\n\n press y to quit";
	cin >> z;

	return 0;
}

