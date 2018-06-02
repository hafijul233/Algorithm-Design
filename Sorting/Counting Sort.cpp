#include <iostream>
#include <string>

#define RANGE 255

using namespace std;

// The main function that sort the given string arr[] in
// alphabatical order

string arr;
int count[RANGE + 1];

void CountSort(string *arr){
	// The output character array that will have sorted arr
	string output;

	for(int i = 0; arr[i]; ++i)
		++count[arr.at(i)];

	// Change count[i] so that count[i] now contains actual
	// position of this character in output array
	for (int i = 1; i <= RANGE; ++i)
		count[i] += count[i-1];

	// Build the output character array
	for (int i = 0; arr[i]; ++i)
	{
		output.at(count[arr.at(i)]-1) = arr.at(i);
		--count[arr.at(i)];
	}

	// Copy the output array to arr, so that arr now
	// contains sorted characters
	for (int i = 0; arr[i]; ++i)
		arr.at(i) = output.at(i);
}

// Driver program to test above function
int main(){

	string arr = "geeksforgeeks";
  string sorted;

	sorted = CountSort(arr);

	cout << "Sorted character array is : " << arr);
	return 0;
}
