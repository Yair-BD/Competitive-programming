
#include <iostream>
#include <queue>

using namespace std;

int main() {
    // While loop: Print numbers from 1 to 10
    int i = 1;
    while (i <= 10) {
    cout << i << " ";
    i++;
    }

    // For loop: Iterate over an array
    int numbers[] = {10, 20, 30, 40, 50};
    for (int number : numbers) {
    cout << number << " ";
    }

    // do-while loop: Roll a dice until a 6 is rolled
    int roll;
    do {
    roll = rand() % 6 + 1; // Generate random number from 1 to 6
    cout << "Rolled: " << roll << endl;
    } while (roll != 6);
}