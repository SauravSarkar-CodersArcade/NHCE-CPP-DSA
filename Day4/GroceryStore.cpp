#include <iostream>
#include <iomanip>
using namespace std;
struct Grocery {
    int item_code;
    char brand_name[25];
    char item_name[25];
    int quantity;
    float price;
};
void message(Grocery g[], int n){
    for (int i = 0; i < n; ++i) {
        if (g[i].quantity * g[i].price > 1000){
            cout << g[i].item_name << " costs more than 1000.\n";
        }
    }
}
void voucher(Grocery g[], int n){
    float bill = 0;
    for (int i = 0; i < n; ++i) {
        bill += g[i].quantity * g[i].price;
    }
    cout << fixed << setprecision(2) << bill << "\n";
    if (bill > 10000){
        cout << "You won a voucher of Rs. 200\n";
    } else{
        cout << "No voucher code.\n";
    }

}
int main() {
    int n;
    cin >> n;
    Grocery g[n];
    for (int i = 0; i < n; ++i) {
        cin >> g[i].item_code >> g[i].brand_name >> g[i].item_name
        >> g[i].quantity >> g[i].price;
    }
    message(g,n);
    voucher(g,n);
    return 0;
}
