#include<vector>
#include<thread>
#include<atomic>
using namespace std;
class Solution {
public:
    bool func(int n, int start, vector<int>& derived) {
        int first = start;
        for (int i = 0; i < n - 1; i++) {
            if (derived[i] == 1) {
                start = 1 - start; // Toggle start between 0 and 1
            }
        }
        return (first ^ start) == derived[n - 1];
    }
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
        atomic<bool> result(false);

        // Lambda function to call func and update the result atomically
        auto threadFunc = [&](int startValue) {
            if (func(n, startValue, derived)) {
                result = true;
            }
        };

        // Create threads for both start values
        thread t1(threadFunc, 1);
        thread t2(threadFunc, 0);

        // Join threads to ensure they complete
        t1.join();
        t2.join();

        return result;
    }

};