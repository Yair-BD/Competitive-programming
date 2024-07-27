#include <iostream>
#include <map>

using namespace std;
/*
6 0
3 1
2 2
5 3
6 4



2 2
3 1
5 3
6 0
6 4
*/ 

int main() {
    int size;
    cin >> size;
    map<int, int> myMap;

    int i;
    //Get number into myMap hte map will sort by thee input user
    for (i = 0; i < size; i++){
        int num;
        cin >> num;
        myMap[num] = i;
    }

    int result = size;
    int last = -1 ;
    /*
    After the sort the we check by the value if there is a number that small than the previous 
    If there is - break 
    else minus 1 from the size of the map 

    Why we break when we found there is a number small than the previous one ? 
        The value after the sort gives as they in up order its means that those numbers dont move so we 'size --'
        When we find the value is small than the previous its means that number moved 
        Ans the result is Size - number_of_digits_that_dont_move = number_that_move
    */
    for(auto[a, b] : myMap){
        if(b < last) break;
        last = b;
        result --;
    }
    cout << result;
}
