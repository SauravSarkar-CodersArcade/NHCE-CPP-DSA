#include <iostream>
using namespace std;
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data = val;
        left = right = nullptr;
    }
};
bool areIdentical(TreeNode* tree1, TreeNode* tree2){
    // Empty
    if (tree1 == nullptr && tree2 == nullptr){
        return true;
    }
    // One of them is null
    if (tree1 == nullptr || tree2 == nullptr){
        return false;
    }
    // Compare the root node data
    if (tree1->data != tree2->data){ // Root data doesn't match
        return false;
    }
    return (areIdentical(tree1->left, tree2->left) &&
            areIdentical(tree1->right, tree2->right));
}
int main() {
    TreeNode* tree1 = new TreeNode(10);
    tree1->left = new TreeNode(2);
    tree1->right = new TreeNode(3);

    TreeNode* tree2 = new TreeNode(1);
    tree2->left = new TreeNode(2);
    tree2->right = new TreeNode(3);
    if (areIdentical(tree1,tree2)){
        cout << "The trees are identical." << endl;
    }else{
        cout << "The trees are not identical." << endl;
    }
    return 0;
}
