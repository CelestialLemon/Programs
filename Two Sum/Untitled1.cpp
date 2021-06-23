#include<iostream>
#include<windows.h>
using namespace std;

int findSizeOf(int* arr)
{
	int size = arr.size();
	return size;
}

int main()
{
	int numbers[6] = {0, 1, 2, 3, 4, 5};
	int size = findSizeOf(numbers);
	cout<<"size of numbers is "<<size;
	return 0;
}




/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].*/
