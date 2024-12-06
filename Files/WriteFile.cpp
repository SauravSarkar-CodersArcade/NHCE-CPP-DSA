#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    file.open("C:\\Users\\Saurav\\CLionProjects\\NHCE-CPP\\Files\\nhce.txt",
              ios::out);
    if (file.is_open()){
        file << "Hello.\n";
        file << "Line 1.\n";
        file.close();
    }
    file.open("C:\\Users\\Saurav\\CLionProjects\\NHCE-CPP\\Files\\nhce.txt",
              ios::app);
    if (file.is_open()){
        file << "Hi.\n";
        file << "Line 4.\n";
        file.close();
    }
    system("pause>0");
    return 0;
}
