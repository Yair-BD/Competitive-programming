#include <iostream>
#include <queue>

using namespace std;

int main() {
  // Create a queue to store user input
  queue<string> userInputQueue;

  // Prompt the user to enter strings
  cout << "Enter strings (type 'done' to finish):" << endl;
  string input;
  while (getline(cin, input) && input != "done") {
    // Add the input string to the queue
    userInputQueue.push(input);
  }

  // Process the queued strings (optional)
  cout << "Queued strings:" << endl;
  while (!userInputQueue.empty()) {
    string currentString = userInputQueue.front();
    userInputQueue.pop();
    cout << currentString << endl;
  }

  return 0;
}