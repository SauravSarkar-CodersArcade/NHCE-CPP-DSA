#include <iostream>
using namespace std;
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};
void inOrderTraversal(TreeNode* root){ // LDR
    if (root != nullptr){
        inOrderTraversal(root->left);
        cout << root->val << " ";
        inOrderTraversal(root->right);
    }
}
TreeNode* mirrorTree(TreeNode*  root){
    if (root == nullptr){
        return root;
    }
    // Initial Subtrees from the root
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
    // Recursively swap the subtrees till the leaf nodes
    if (root->left){
        mirrorTree(root->left);
    }
    if (root->right){
        mirrorTree(root->right);
    }
    return root;
}
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->left->right->left = new TreeNode(9);
    root->right->right->left = new TreeNode(15);
    cout << "In Order Traversal - BFS - Original Tree: ";
    inOrderTraversal(root);
    cout << endl;
    root = mirrorTree(root);
    cout << "In Order Traversal - BFS - Mirror Tree: ";
    inOrderTraversal(root);
    return 0;
}
