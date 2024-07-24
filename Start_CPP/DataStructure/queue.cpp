#include <iostream>
#include <queue>

using namespace std;

int main() {
  // Create a queue to store tasks
  queue<string> taskQueue;

  // Add tasks to the queue
  taskQueue.push("Write code");
  taskQueue.push("Review design");
  taskQueue.push("Attend meeting");
  taskQueue.push("Send email");

  // Process tasks until the queue is empty
  while (!taskQueue.empty()) {
    // Get the next task from the queue
    string currentTask = taskQueue.front();

    // Remove firs element from queue
    taskQueue.pop();

    // Process the task
    cout << "Processing task: " << currentTask << endl;
  }

  cout << "All tasks completed!" << endl;

  return 0;
}
