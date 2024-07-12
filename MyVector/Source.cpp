#include<iostream>
#include<vector>
#include<algorithm>

#include "MyVector.h"


using namespace std;


int main()
{
    vector<int> v;
    MyVector<int> vs;


    //size & capacity
    /*
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    cout << "\nMy Implementation:\n\n";

    cout << vs.size() << endl;
    cout << vs.capacity() << endl;
    */

    //reserve
    /*
    v.reserve(10);
    cout << v.capacity() << endl;

     cout << "\nMy Implementation:\n\n";

    vs.reserve(10);
    cout << vs.capacity() << endl;
    */

    //resize1
    /*
    v.resize(20);
    cout << v.size() << endl;
    cout << v.capacity() << endl;

     cout << "\nMy Implementation:\n\n";

    vs.resize(20);
    cout << vs.size() << endl;
    cout << vs.capacity() << endl;
    */

    //resize2
    /*
    v.resize(5, 5);
    cout << "Size: " <<  v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    for_each(begin(v),end(v), [](int a) {cout << a << endl; });

    cout << "\nMy Implementation:\n\n";

    vs.resize(5, 5);
    cout << "Size: " << vs.size() << endl;
    cout << "Capacity: " << vs.capacity() << endl;

    for (int i = 0; i < vs.size(); i++)
    {
        cout << vs[i] << endl;
    }
    */

    //empty
    /*
   cout << v.size() << endl;
    cout << v.empty() << endl;

    cout << "\nMy Implementation:\n\n";

    cout << vs.size() << endl;
    cout << vs.empty() << endl;
    */

    //shrink_to_fit
    /*
    v.resize(50);
    v.reserve(100);

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl << endl;

    v.shrink_to_fit();

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;


    cout << "\nMy Implementation:\n\n";

    vs.resize(50);
    vs.reserve(100);

    cout << "Size: " << vs.size() << endl;
    cout << "Capacity: " << vs.capacity() << endl << endl;

    vs.shrink_to_fit();

    cout << "Size: " << vs.size() << endl;
    cout << "Capacity: " << vs.capacity() << endl;
    */

    //push_back
    /*
    v.push_back(799);
    v.push_back(462);
    v.push_back(432);
    v.push_back(785);
    v.push_back(567);

    for_each(begin(v), end(v), [](int a) {cout << a << endl; });

    cout << "\nMy Implementation:\n\n";

    vs.push_back(799);
    vs.push_back(462);
    vs.push_back(432);
    vs.push_back(785);
    vs.push_back(567);

    for (int i = 0; i < vs.size(); i++)
    {
        cout << vs[i] << endl;
    }
    */

    //pop_back
    /*
    cout << "My Implementation:\n\n";

    vs.push_back(799);
    vs.push_back(462);
    vs.push_back(432);
    vs.push_back(785);
    vs.push_back(567);


    for (int i = 0; i < vs.size(); i++)
    {
        cout << vs[i] << endl;
    }

    cout << "\n";

    vs.pop_back();

    for (int i = 0; i < vs.size(); i++)
    {
        cout << vs[i] << endl;
    }
    */

    //clear
    /*
    cout << "My Implementation:\n\n";

    vs.push_back(799);
    vs.push_back(462);
    vs.push_back(432);
    vs.push_back(785);
    vs.push_back(567);


    for (int i = 0; i < vs.size(); i++)
    {
        cout << vs[i] << endl;
    }

    cout << "\n";

    vs.clear();

    for (int i = 0; i < vs.size(); i++)
    {
        cout << vs[i] << endl;
    }
    */

    //insert1
    /*
    v.push_back(799);
    v.push_back(462);
    v.push_back(432);
    v.push_back(785);
    v.push_back(567);

    for_each(begin(v), end(v), [](int a) {cout << a << endl; });

    cout << "\n";

    auto it = v.begin();

    v.insert(it + 2, 10);

    for_each(begin(v), end(v), [](int a) {cout << a << endl; });
    */

    //at
    /*
    vs.push_back(799);
    vs.push_back(462);
    vs.push_back(432);
    vs.push_back(785);
    vs.push_back(567);

    cout << vs.at(0) << endl;
    cout << vs.at(3) << endl;
    cout << vs.at(5) << endl;
    */

    //Back & front & data
    /*
    vs.push_back(799);
    vs.push_back(462);
    vs.push_back(432);
    vs.push_back(785);
    vs.push_back(567);

    cout << vs.front() << endl;
    cout << vs.back() << endl;
    cout << vs.data() << endl;
    */
    return 0;
}