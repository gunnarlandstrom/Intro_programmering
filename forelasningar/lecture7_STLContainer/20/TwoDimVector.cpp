#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

//prints out the matrix
void printOutMatrix (const vector<vector<int>> &twoDimVector);

//prints out sum of each row in order
int printOutSumOfRows(const vector<int>& aMatrixRow);

//Reads in and returns a 2-D vector
const vector<vector<int>>& readIn(vector<vector<int>> &twoDimVector);
int main()
{
    srand(time(0));
    //we want a 5x5 matrix

    //declaring a 2D vector of 5 rows
	vector< vector<int> > twoDimVector(5);

/*
	// Adding 5 columns to each row.
	for (int i = 0; i < ssize(twoDimVector); i++)
		twoDimVector[i]=vector<int>(5,0); 
*/
	for (auto& v : twoDimVector)
        v = vector<int>(5,0);

    //Or you can create a 5x5 matrix this way:
    //vector<vector<int>> matrix(rows, vector<int>(columns, default_value));
    vector<std::vector<int>> matrix(5, std::vector<int>(5,0));
    
    twoDimVector = readIn(twoDimVector);
    printOutMatrix (twoDimVector);
    printOutMatrix (matrix);

    for (const vector<int> &aMatrixRow : twoDimVector)
    {
        cout << printOutSumOfRows(aMatrixRow) <<endl;
    }

    return 0;
}

void printOutMatrix (const vector <vector<int>> &twoDimVector)
{
    cout << "Print the content of the 2D vector" << endl; 
    for (const vector<int> &v : twoDimVector)
    {
	    for (int x : v) 
		    cout << x << '\t';
	    cout << endl;
    }
	

}

int printOutSumOfRows(const vector<int>& aMatrixRow)
{
    int sum =0;
    for (int x : aMatrixRow) 
     sum +=x;
    return sum;
}

const vector<vector<int>>& readIn(vector <vector<int>> &twoDimVector)
{
/*
    for(unsigned int i=0;i <twoDimVector.size();i++)
        for(unsinged int j=0; j <twoDimVector[i].size();j++)
            twoDimVector[i][j]= rand()%20;
*/
    for(auto& v:twoDimVector)
    {
        for(auto& x:v)
            x = rand()%20;
        
    }

    return twoDimVector;
}