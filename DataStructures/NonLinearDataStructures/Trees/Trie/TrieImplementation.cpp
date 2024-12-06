#include <iostream>
#include <vector>
using namespace std;
class TrieNode {
public:
    TrieNode* children[26]; // Alphabets A-Z also a-z
    bool wordEnd;
    TrieNode(){
        wordEnd = false;
        for (int i = 0; i < 26; ++i) {
            children[i] = nullptr;
        }
    }
};
void insert_word(TrieNode* root, string& word){
    // aryan
    TrieNode* current = root;
    for (auto c : word){
        if (current->children[c-'a'] == nullptr){
            // Node is not present in the Trie, so we create
            TrieNode* newNode = new TrieNode();
            current->children[c-'a'] = newNode;
        }
        current = current->children[c-'a'];
        current->wordEnd = true;
    }
}
bool search_word(TrieNode* root, string& word){
    TrieNode* current = root;
    for (auto c : word){
        if (current->children[c-'a'] == nullptr){
            // Node is not present in the Trie, so return false
            return false;
        }
        current = current->children[c-'a'];
    }
    return current->wordEnd;
}
int main() {
    TrieNode* root = new TrieNode();
    vector<string> input_words =
            {"vatsal", "abhay", "tanushree", "balbheem", "sudarshan"};
    for (int i = 0; i < input_words.size(); ++i) {
        insert_word(root, input_words[i]);
    }
    vector<string> search_words =
            {"vatsal", "samar","abhay", "tanushree", "balbheem", "sudarshan",
             "saurav", "milan", "tanmay"};
    for (int i = 0; i < search_words.size(); ++i) {
        if (search_word(root,search_words[i])){
            cout << search_words[i] << " Present in Trie." << endl;
        } else{
            cout << search_words[i] << " Not Present in Trie." << endl;
        }
    }
    return 0;
}
