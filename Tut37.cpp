#include <iostream>
#include <map>
#include <string>

using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Yash"] = 99;
    marksMap["ram"] = 55;
    marksMap["shyam"] = 8;

    marksMap.insert({{"ramu", 550},{"rahul", 20}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is "<<marksMap.empty()<<endl;
    return 0;
}