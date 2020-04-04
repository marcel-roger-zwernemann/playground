#include <iostream>
#include <vector>
#include <string>

#include "components/Component.h"

using namespace std;

/**
 * Entry Point of Application
 */
int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};       

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;    

    printComponent();
}