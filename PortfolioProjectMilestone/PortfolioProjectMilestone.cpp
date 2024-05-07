// Lexee Gabiola, CSC450-1, 9/3/23, Portfolio Project Part 1

#include <iostream>
#include <thread>
using namespace std;

// Thread 1
void thread1() {
    cout << "Thread 1" << endl;
    for (int i = 0; i < 21; i++) { // Count up to 20
        cout << i << endl;
    }
}

// Thread 2
void thread2() {
    cout << "Thread 2" << endl;
    for (int i = 20; i > -1; i--) { // Count down to 0
        cout << i << endl;
    }
}

int main()
{
    cout << "Concurrency of Two Threads" << endl;
    thread t(&thread1);
    t.join();
    thread t2(&thread2);
    t2.join();
}