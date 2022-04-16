#include <iostream>
#include <list>

using namespace std;

void Display(list<int> &lst)
{
    list<int>::iterator itr;
    for (itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // List of 0 length
    list1.push_back(2);
    list1.push_back(8);
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(10);
    Display(list1);

    // Removing elements from the list
    //   list1.pop_back();
    //   list1.pop_front();
    // list1.remove(5);
    //   Display(list1);

    // sorting the list
    // list1.sort();
    // Display(list1);
    list1.reverse();
    Display(list1);

    list<int> list2(4); // Empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 12;
    iter++;
    *iter = 6;
    iter++;
    *iter = 23;
    iter++;
    *iter = 15;
    iter++;
    Display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout << "list 1 after merging ";
    Display(list1);
    //   list1.push_back();
    //   list<int> :: iterator iter;
    //   iter = list1.begin();
    //   cout<< *iter<<" ";
    //   iter++;
    //   cout<< *iter<<" ";
    //   iter++;
    //   cout<< *iter<<" ";
    //   iter++;
    //   cout<< *iter<<" ";
    //   iter++;
    //   cout<< *iter<<" ";

    return 0;
}