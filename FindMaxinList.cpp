#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 2: Input list of numbers
    vector<int> numbers;
    int n, temp;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        numbers.push_back(temp);
    }

    // Step 3: Initialize max as the first number in the list
    int max = numbers[0];

    // Step 4: For each number in the list, compare with max
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Step 5: Output max
    cout << "The maximum number is: " << max << endl;

    return 0;
}