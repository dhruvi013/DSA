#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

// Recursive Tower of Hanoi function
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    auto start = high_resolution_clock::now();

    towerOfHanoi(n, 'A', 'C', 'B');

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(end - start);

    cout << "Execution time: " << duration.count() << " nanoseconds" << endl;

    return 0;
}


// auto start = high_resolution_clock::now();
// auto stop = high_resolution_clock::now();
// auto duration = duration_cast<nanoseconds>(stop - start);
// cout << duration.count() << "\n";