    #include <iostream>
    #include <algorithm> 
     
    using namespace std;
     
    int main() {
        int t;
        cin >> t;
     
        while (t--) {
            long long x;
            cin >> x;
     
            int minDigit = 9;
     
          
            while (x > 0) {
                int currentDigit = x % 10;
                minDigit = min(minDigit, currentDigit);
                x /= 10;
            }
     
            cout << minDigit << endl;
        }
     
        return 0;
    }