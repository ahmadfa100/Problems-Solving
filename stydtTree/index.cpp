#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val =x;
        left = nullptr;
        right=nullptr;
    }
};

void printBFS(TreeNode*root){
    if(root == nullptr)
    return;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode*current = q.front();
        q.pop();
        cout<<current->val<<endl;

        if(current->left!=nullptr)
        q.push(current->left);
        
        if(current->right!=nullptr)
        q.push(current->right);


    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    TreeNode* root = new TreeNode(10);

    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);
    
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(25);

    cout<< "----------"<<endl;
    printBFS(root);
    


}