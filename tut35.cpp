#include <iostream>
#include <vector>

using namespace std;
template <class T>
void Display(vector<T> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";
    }
    cout << endl;
}
int main()
{
    // Ways to create avector
    vector<int> vec1;     // zero length vector
    vector<char> vec2(4); // 4- element charector vector vector
    // vec2.push_back('5');
    // Display(vec2);
    // vector<char> vec3(vec2);     // 4- element charector vector from vec2
    // Display(vec3);
    vector<int> vec4(5, 53); // 6- element vector of 3s
    Display(vec4);
    cout << vec4.size();

    int element, size = 5;
    // cout<<"Enter the size of vector: ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add this vector ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();

    // Display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,5, 450);
    // Display(vec1);

    return 0;
}