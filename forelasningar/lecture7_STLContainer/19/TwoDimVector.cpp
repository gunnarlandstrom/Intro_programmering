#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	// We want to create a 5x5 matrix

	//declaring a 2D vector 
	vector< vector<int> > matrix(5); //This create the rows

	// Adding a vector for each row above
	/*
	//matrix.size() and matrix[i].size() will give warnings here
    //we can use ssize(matrix) and ssize(matrix[i]) instead.
	// ssize() means signed size, size() give unsginged size
	//se below
	for (unsigned int i = 0; i < matrix.size(); i++)  
	{
		matrix[i]=vector<int>(5);
		cout << matrix[i].size() <<endl;
	}
	*/
	for (auto& v : matrix)
	{
		v = vector<int>(5);
		cout << v.size() << " ";
	}
	cout << endl;
	//vector< vector<int> > matrix(5,vector<int>(5)); //5*5 Matrix


	// Add column to all rows, it will be 5x5 matrix
	for (int i = 0; i < ssize(matrix); i++) 
	{
		for(int j=0; j <ssize(matrix[i]); j++)
			matrix[i][j]= rand() % 20; 
	}
     
	
  
	cout << "Print the content of the 2D vector with for-loops" << endl;

	for (int i = 0; i < ssize(matrix); i++)
	{
		for (int j = 0; j < ssize(matrix[i]); j++)
		{
			cout << matrix[i][j] << '\t';
		}
	cout << endl;
	}
	

	cout << "Print the content of the 2D vector using range-based loops:" << endl; 
	for (const auto& v : matrix)
	{
		for (const auto& x : v) 
			cout << x << '\t';

	cout << endl;
	}

	return 0;
}