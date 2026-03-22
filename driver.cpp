#include <iostream>
#include <string>
#include "ArrayQueue.hpp"

int main(int argc, char **argv) {
  ArrayQueue<int> q(5);
  try {
    q.front();
  } catch (std::string &e) {
    std::cout << e << '\n';
  }

  try {
    q.back();
  } catch (std::string &e) {
    std::cout << e << '\n';
  }

  try {
    q.dequeue();
  } catch (std::string &e) {
    std::cout << e << '\n';
  }

  q.enqueue(1);
  std::cout << "length: " << q.getLength() << '\n';
  std::cout << "front: " << q.front() << '\n';
  std::cout << "back: " << q.back() << '\n';
  q.dequeue();

  for (int i = 0; i < 5; ++i)
    q.enqueue(i);
  std::cout << "is full: " << q.isFull() << '\n';
  std::cout << "front: " << q.front() << '\n';
  std::cout << "back: " << q.back() << '\n';

  std::cout << "test" << '\n';
  
  try {
    q.enqueue(5);
  } catch (std::string &e) {
    std::cout << e << '\n';
  }

  q.dequeue();
  q.dequeue();
  q.enqueue(1);
  q.enqueue(2);
  std::cout << "front: " << q.front() << '\n';
  std::cout << "back: " << q.back() << '\n';
  std::cout << "length: " << q.getLength() << '\n';

  ArrayQueue<int> q1(10);
  q1.enqueue(1);
  q1 = q;
  std::cout << "front: " << q1.front() << '\n';
  std::cout << "length: " << q1.getLength() << '\n';

  q1.clear();

  std::cout << "is empty: " << q1.isEmpty() << '\n';
  try {
    q1.front();
  } catch (std::string &e) {
    std::cout << e << '\n';
  }

  ArrayQueue<std::string> sq(3);
  sq.enqueue("ab");
  sq.enqueue("cd");
  sq.enqueue("ef");
  
  std::cout << "front: " << sq.front() << '\n';
  std::cout << "back: " << sq.back() << '\n';

  return 0;
}


  
