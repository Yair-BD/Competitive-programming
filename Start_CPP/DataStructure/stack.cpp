#include <iostream>
#include <stack>

using namespace std;

int main() {
  // Create a stack of integers
  stack<int> myStack;

  // Push numbers onto the stack
  myStack.push(10);
  myStack.push(20);
  myStack.push(30);

  // Check the size of the stack
  cout << "Stack size: " << myStack.size() << endl;

  // Check the top element of the stack
  cout << "Top element: " << myStack.top() << endl;

  // Pop the top element from the stack
  int poppedValue = myStack.top();
  myStack.pop();
  cout << "Popped value: " << poppedValue << endl;

  // Check the stack size after popping
  cout << "Stack size after popping: " << myStack.size() << endl;

  return 0;
}