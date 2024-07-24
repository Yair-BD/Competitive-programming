#include <iostream>
#include <stack>

using namespace std;

int main() {
  // Create a stack of integers
  stack<int> numberStack;

  // Prompt the user to enter the number of numbers to push
  int numNumbers;
  cout << "Enter the number of numbers to push: ";
  cin >> numNumbers;

  // Validate input (optional)
  while (numNumbers <= 0) {
    cout << "Invalid input. Enter a positive number: ";
    cin >> numNumbers;
  }

  // Get numbers from the user and push them onto the stack
  for (int i = 0; i < numNumbers; i++) {
    int num;
    cout << "Enter number " << i + 1 << ": ";
    cin >> num;
    numberStack.push(num);
  }

  // Display the stack contents (top to bottom)
  while (!numberStack.empty()) {
    int topValue = numberStack.top();
    cout << topValue << " ";
    numberStack.pop();
  }

  return 0;
}
