/* STL queue and priority queue examples */

/* Priority Queue: 
A data structure whose basic operations are:

    inserting new elements, and
    removing the largest or smallest element. 
	
	Example Uses:
    Simulations (events are ordered by the time at which they should be executed)
    Job scheduling in computer systems (higher priority jobs should be executed first)
    Constraint systems (higher priority constraints should be satisfied before lower priority constraints) 

*/
#include <iostream>
#include <fstream>
#include <queue>
#include <functional>     // std::greater
using namespace std;

void functionA();
void functionB();
void functionC();
void functionD();
int main()
{
	cout << "calling functionA..."<<endl;
	functionA();
	cout << "calling functionB..."<<endl;
	functionB();
	cout << "calling functionC..."<<endl;
	functionC();
	cout << "calling functionD..."<<endl;
	functionD();

	return 0;
}

/* simple queue example */
void functionA()
{
	queue <int> q;                  //q is a queue of integers

	q.push(2);                      //put 2, 5, 3, 2 into the queue
	q.push(5);
	q.push(3);
	q.push(1);
	cout << "q contains " << q.size() << " elements." << endl;

	while (!q.empty()) {
		cout << q.front() << endl;    //print out the first element in the queue
		q.pop();                      //remove the first element of the queue
	}
}

/* simple priority queue example */
void functionB()
{
	priority_queue <int> pq;      //pq is a priority queue of integers

	pq.push(2);                   //put 2, 5, 3, 1 into the priority queue
	pq.push(5);
	pq.push(3);
	pq.push(1);
	cout << "pq contains " << pq.size() << " elements."<<endl;

	while (!pq.empty()) {
		cout << pq.top() << endl;   //print out the highest priority element
		pq.pop();                   //remove the highest priority element
	}
}

/* example of priority queue 
where lower integers have higher priority */
void functionC()
{
	priority_queue <int, vector<int>, greater<int> > pq;  
	/* 
	pq is a priority queue of integers that uses
	a vector of integers for storage 
	and uses the greater then operator ">"
	to determine priority. 
	This means that if a > b,  a has *lower* priority than b. 
	That also means a lower value will get a *Higher* priority. 
	Observe that if you use the default less instead of greater, 
	you will get the opposit order.
	*/

	pq.push(2);                      //put 2, 5, 3, 2 into the queue
	pq.push(5);
	pq.push(3);
	pq.push(1);
	cout << "pq contains " << pq.size() << " elements." << endl;

	
	while (!pq.empty()) {
		cout << pq.top() << endl;      //print out the highest priority element in the queue
		pq.pop();                      //remove the highest priority element
	}
}






