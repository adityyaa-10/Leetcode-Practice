//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    
  string newString = to_string(n);

    // Iterate through the string and replace '0' with '5'
    for (char &c : newString) {
        if (c == '0') {
            c = '5';
        }
    }
     int result = stoi(newString);
    return result;
}