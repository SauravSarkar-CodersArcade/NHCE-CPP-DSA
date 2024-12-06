#include <iostream>
using namespace std;
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
TreeNode* sortedArrayToBST(int arr[], int start, int end){
    if (start > end){
        return nullptr;
    }
    int mid = (start + end) / 2;
    TreeNode* root = new TreeNode(arr[mid]);
    root->left = sortedArrayToBST(arr,start,mid-1);
    root->right = sortedArrayToBST(arr,mid+1,end);

    return root;
}

void inOrderTraversal(TreeNode* root){ // LDR
    if (root != nullptr){
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof (arr)/ sizeof (arr[0]);
    TreeNode* root = sortedArrayToBST(arr,0,n-1);
    cout << "In-Order: ";
    inOrderTraversal(root);
    return 0;
}
