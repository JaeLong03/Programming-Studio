#include <iostream>
#include <queue>
using namespace std;
 
class TreeNode {
public:    
    int val;
    TreeNode *left, *right;
    TreeNode(int x){
        val = x;
        left = right = NULL;
    }
};
 
TreeNode* buildTree(int *nums, int size) {
    if (nums == NULL) return NULL;
    
    TreeNode* root = new TreeNode(nums[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (i < size) {
        TreeNode* curr = q.front();
        q.pop();
        if (i < size) {
            curr->left = new TreeNode(nums[i++]);
            q.push(curr->left);
        }
        if (i < size) {          
            curr->right = new TreeNode(nums[i++]);
            q.push(curr->right);
        }
    }
    return root;
}
 
void printInOrderTree(TreeNode* root) {
    if (!root) return;
    printInOrderTree(root->left);
    cout << root->val << " ";
    printInOrderTree(root->right);
}

void printPreOrderTree(TreeNode* root) {
    if (!root) return;
    if(root -> val == 0) cout << ""; 
    else cout << root->val << " ";
    printPreOrderTree(root->left);
    printPreOrderTree(root->right);
}

void printPostOrderTree(TreeNode* root) {
    if (!root) return;
    printPostOrderTree(root->left);
    printPostOrderTree(root->right);
    if(root -> val == 0) cout << "";  
    else cout << root->val << " ";
}
 
int main() {
    int num, choice; 
    cin >> num; 
    cin >> choice; 
    int* arr = new int[num]; 

    for(int i = 0; i < num; i++){ 
        cin >> arr[i]; 
    }

    TreeNode* root = buildTree(arr, num);
    if(choice == 1){
        cout << "preorder traversal: "; 
        printPreOrderTree(root); 
    }
    else if(choice == 2){ 
        cout << "postorder traversal: "; 
        printPostOrderTree(root); 
    }
    cout << endl; 
    return 0;
}