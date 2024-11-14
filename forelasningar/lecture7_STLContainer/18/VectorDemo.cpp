#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

void print(const int& element);
int main()
{
	std::vector<double> doubleVector(7, 1.0);
	std::cout << "Initial contents in doubleVector: " <<std::endl;
	for (unsigned int i = 0; i < doubleVector.size(); i++)
		//cout << doubleVector[i] << " ";
		std::cout << doubleVector.at(i) << " ";
	
	doubleVector.at(0) = 22.4;  
	doubleVector[1]=22.4;

	std::cout <<std::endl<<"After the at function and ordinary indexing doubleVector: " << std::endl;
	
	for( auto& element: doubleVector)
		std::cout << element << " ";
	std::cout << std::endl;

    std::cout << std::endl<<"Printing the vector with output iterator" << std::endl;
	
    std::copy(doubleVector.begin(), doubleVector.end(),std::ostream_iterator<double>(std::cout, " "));
	
	std::cout << std::endl<<"Printing the vector with output iterator and for_each" << std::endl;
	
	std::for_each(doubleVector.begin(), doubleVector.end(),print);
	std::cout << std::endl;


	doubleVector.clear();
	std::cout <<std::endl<< "Size after clear function is: " << doubleVector.size() << std::endl;


	std::cout << "Is empty? " <<std::boolalpha<< (doubleVector.empty() ? true : false) << std::endl;
	
	/*
	// We need to enter ctrl-d to stop reading
	//Reading in values into the vector with input iterator
	std::copy(std::istream_iterator<double>(std::cin), std::istream_iterator<double>(),
          std::back_inserter(doubleVector));	

	*/
	

	return 0;
}

/**
 * @brief 
 * 
 * @param element 
 */
void print(const int& element)
{
	std::cout << element << " ";
}