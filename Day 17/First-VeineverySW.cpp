#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[8] = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;

    list<int> l;  // Store first -Ve number in window
    vector<int> ans;  // List to store the results
    int i = 0;    // Start of the current window
    int j = 0;    // End of the current window
    int n = 8;    // Size of the array

    while (j < n) {
        if (arr[j] < 0) {
            l.push_back(arr[j]);  // If negative, add to the list
        }

        if (j - i + 1 < k) {
            j++;  // Expand the window until its size becomes k
        } else {
            if (l.empty()) {
                ans.push_back(0);  // If no negatives, add 0 to the list
            } else {
                ans.push_back(l.front());  // Add the first negative to the list
                if (l.front() == arr[i]) {
                    l.pop_front();  // Remove the front element if it's equal to arr[i]
                }
            }
            i++;  // Slide the window by incrementing i
            j++;  // Expand the window by incrementing j
        }
    }

    // Print the elements in the list
    for (auto element : ans) {
        cout << element << " ";
    }

    return 0;
}
