#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 2: Input list of numbers
    vector<int> numbers;
    int n, input;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> input;
        numbers.push_back(input);
    }

    // Step 3: Initialize counters for odd and even
    int odd_count = 0, even_count = 0;

    // Step 4: For each number in the list
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 2 == 0) {
            // Increment even counter
            even_count++;
        } else {
            // Increment odd counter
            odd_count++;
        }
    }

    // Step 5: Output counts
    cout << "Even numbers: " << even_count << endl;
    cout << "Odd numbers: " << odd_count << endl;

    return 0;
}
