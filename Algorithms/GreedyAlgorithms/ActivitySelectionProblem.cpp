#include <iostream>
#include <vector>
using namespace std;
struct Activity {
    int start, finish;
};
bool activityCompare(Activity s1, Activity s2){
    return (s1.finish < s2.finish);
}
void printMaxActivities(vector<Activity>& activities){
    // Sort according to the finish time of the activities
    sort(activities.begin(), activities.end(), activityCompare);
    // First activity is always selected
    int lastSelected = 0; // Zero Index
    // Print the first activity
    cout << "(" << activities[lastSelected].start << ", " << activities[lastSelected].finish << ")";
    for (int i = 0; i < activities.size(); ++i) {
        if (activities[i].start >= activities[lastSelected].finish){
            cout << "(" << activities[i].start << ", " << activities[i].finish << ")";
            lastSelected = i;
        }
    }
    cout << endl;
}
int main() {
    vector<Activity> activities =
            {{5,7},
             {8,9},
             {1,4},
             {0,6},
             {5,9},
             {3,5}};
    printMaxActivities(activities);
    return 0;
}
