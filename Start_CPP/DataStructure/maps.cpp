#include <iostream>
#include <map>

using namespace std;

int main() {
    // Declaring a map of strings to integers
    map<string, int> myMap;

    // Inserting elements
    myMap["banana"] = 3;
    myMap["apple"] = 5;
    myMap.insert(pair<string, int>("orange", 2));

    // Accessing elements
    cout << "Value of apple: " << myMap["apple"] << endl;

    // Iterating over the map
    cout << "Map contents:" << endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }

    // Finding an element
    string searchKey = "banana";
    if (myMap.find(searchKey) != myMap.end()) {
        cout << searchKey << " found in map" << endl;
    } else {
        cout << searchKey << " not found in map" << endl;
    }

    // Erasing an element
    myMap.erase("apple");
    cout << "Map after erasing apple:" << endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}
