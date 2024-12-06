#include <iostream>
#include <list>
#include <map>
using namespace std;
int main() {
    map<string, list<string>> internFavFood;
    list<string> Upendra {"Kadhai Paneer", "Roti", "Veg Biryani"};
    list<string> Tanushree {"Egg Curry", "Prawns", "Pani Puri"};
    list<string> Amit {"Comodo Dragon", "Octopus", "Chicken Kebab"};

    internFavFood.insert(pair<string, list<string>>("Upendra", Upendra));
    internFavFood.insert(pair<string, list<string>>("Tanushree", Tanushree));
    internFavFood.insert(pair<string, list<string>>("Amit", Amit));
    // Traversal
    for (auto pair : internFavFood){
        // This is for the first element in the pair : name
        cout << "Name: " << pair.first << " <---> Food: ";
        // This is for the second element(list of strings) in the pair
        for (auto food : pair.second)   {
            cout << food << ",";
        }
        cout << endl;
    }
    return 0;
}
