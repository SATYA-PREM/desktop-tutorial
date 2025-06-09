//{ Driver Code Starts
#include <iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int lcs(string &s1, string &s2) {
        // code here
        int a=0;
        int len1 = s1.length();
        int len2 = s2.length();
        for (int i = 0; i < len1; i++) {
            for(int j=0;j<len2;j++){
                if(s1[i]==s2[j]){
                    a++;
                }
            }
        }return a;
    
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2; // Take both the strings as input
        Solution ob;
        cout << ob.lcs(s1, s2) << endl; // Call the lcs function
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends