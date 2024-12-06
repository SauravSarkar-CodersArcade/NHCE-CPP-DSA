#include <iostream>
using namespace std;
class Printer {
public:
    string _name;
    int _availablePaper;
    Printer(string name, int paper){
        _name = name;
        _availablePaper = paper;
    }
    void PrintDoc(string txtDoc){
        // Each page can print 10 characters
        // 40 characters : 40 / 10 = 4 pages
        int requiredPaper = txtDoc.length() / 10;
        if (requiredPaper > _availablePaper){
            // throw 404; // Integer
            throw "Out of paper. Add more paper.";
        }
        cout << "Printing...!!! " << txtDoc << endl;
        _availablePaper -= requiredPaper;
    }
};
int main() {
    Printer myPrinter("HP-Desk-jet-8020i", 10);
    try {
        myPrinter.PrintDoc("Abhay is a Software Developer.");
        myPrinter.PrintDoc("Ayush is a Software Developer.");
        myPrinter.PrintDoc("Harsh is a Software Developer.");
        myPrinter.PrintDoc("Monika is a Software Developer.");
    }catch (int errorCode){
        cout << errorCode << " : Out Of Paper." << endl;
    } catch (const char* textException ) {
        cout << textException << endl;
    } catch (...) {
        cout << "Something Unexpected Happened...!!!" << endl;
    }
    cout << myPrinter._availablePaper << endl;
    return 0;
}
