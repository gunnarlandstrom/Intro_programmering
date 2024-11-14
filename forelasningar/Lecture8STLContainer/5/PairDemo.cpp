#include <iostream>
#include <utility> //for pair<>
#include <vector>
#include <algorithm> //for sort()


using namespace std;
bool compare (const pair <string, int>& a, const pair <string,int>& b);
void print (const pair <string,int>& MyPair );

int main()
{
    pair< string,int > MyPair;
    MyPair.first="Nayeb";
    MyPair.second =1;

    cout << MyPair.first << " associated with :" << MyPair.second <<endl;
    
    vector< pair<string, int> > VectorOfPair;

    
    VectorOfPair.push_back(MyPair);
    
    MyPair.first="Maleki";
    MyPair.second =2;


    VectorOfPair.push_back(MyPair);


    for (const auto& element :VectorOfPair)
        cout << element.first << ":" <<element.second <<endl;
    
    sort(VectorOfPair.begin(),VectorOfPair.end(),compare);

    for (const auto& element :VectorOfPair)
    cout << element.first << ":" <<element.second <<endl;
    
    cout << "for_each:"<<endl;
    for_each(VectorOfPair.begin(),VectorOfPair.end(),print);

    return 0;
}

bool compare (const pair <string, int>& a, const pair <string,int>& b)
{
    return a.second > b.second;
}

void print (const pair <string,int>& MyPair )
{
    cout << MyPair.first << " : " << MyPair.second <<endl;
}
