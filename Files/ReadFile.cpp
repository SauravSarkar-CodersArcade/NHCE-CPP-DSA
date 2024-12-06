#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    file.open("C:\\Users\\Saurav\\CLionProjects\\NHCE-CPP\\Files\\nhce.txt",
              ios::in);
    if (file.is_open()){
        string line;
        while (getline(file, line)){
            cout << line << endl;
        }
        file.close();
    }
    return 0;
}
