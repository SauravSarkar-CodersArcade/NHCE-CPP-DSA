#include <iostream>
// #include <map> // Ascending Order // Alphabetical Order
#include <unordered_map>
using namespace std;
int main() {
    unordered_map<string, string> stateLanguages;
    stateLanguages.insert(pair<string, string>("Karnataka", "Kannada"));
    stateLanguages.insert(pair<string, string>("Assam", "Assamese"));
    stateLanguages.insert(pair<string, string>("West Bengal", "Bengali"));
    stateLanguages.insert(pair<string, string>("Kerala", "Malayalam"));
    stateLanguages.insert(pair<string, string>("Andhra Pradesh", "Telugu"));
    stateLanguages.insert(pair<string, string>("Goa", "Konkani"));
    stateLanguages.insert(pair<string, string>("Maharashtra", "Marathi"));
    // Insert a new data <key , value>
    stateLanguages["Odisha"] = "Oriya";
    // Clear all data
    // stateLanguages.clear();
    // Erase a particular data:
    stateLanguages.erase("Kerala");
    // Traversal
    for (auto data : stateLanguages){
        cout << "State: " << data.first << " <-> Language: " << data.second << endl;
    }
    return 0;
}
