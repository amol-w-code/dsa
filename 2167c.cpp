#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Use long long to prevent overflow with large numbers
        vector<long long> numbers(n);
        
        bool hasEven = false;
        bool hasOdd = false;

        // Read input and check for evens and odds
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
            
            if (numbers[i] % 2 == 0) {
                hasEven = true;
            } else {
                hasOdd = true;
            }
        }

        // Logic: If the array has BOTH even and odd numbers, we sort it.
        // (This usually implies the problem allows swapping elements of different parity)
        if (hasEven && hasOdd) {
            sort(numbers.begin(), numbers.end());
        }

        // Print the result using a range-based loop
        for (long long num : numbers) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}