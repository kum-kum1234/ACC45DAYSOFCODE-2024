

#include <iostream>
#include <vector>

using namespace std;

// Function to compute total working hours in a week
int compute_weekly_hours(int X, int Y) {
    return 4 * X + Y;
}

int main() {
    int T;
    cin >> T;

    vector<int> results;
    for (int i = 0; i < T; ++i) {
        int X, Y;
        cin >> X >> Y;
        int total_hours = compute_weekly_hours(X, Y);
        results.push_back(total_hours);
    }

    // Print the results for each test case
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
