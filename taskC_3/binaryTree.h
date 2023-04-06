#pragma once
#include "treeNode.h"
#include <vector>

using namespace std;

template<typename T>
class BinaryTree {
private:
    TreeNode<T>* root;

public:
    BinaryTree() : root(nullptr) {}

    void addNode(T v, TreeNode<T>* node);

    void inorder(TreeNode<T>* node, vector<T>& result);

    void addNode(T v);

    vector<T> inorder();
};

template<typename T>
void BinaryTree<T>::addNode(T v, TreeNode<T>* node) {
    if (v < node->val) {
        if (node->left != nullptr) {
            addNode(v, node->left);
        }
        else {
            node->left = new TreeNode<T>(v);
        }
    }
    else {
        if (node->right != nullptr) {
            addNode(v, node->right);
        }
        else {
            node->right = new TreeNode<T>(v);
        }
    }
}


template<typename T>
void  BinaryTree<T>::inorder(TreeNode<T>* node, vector<T>& result) {
    if (node != nullptr) {
        inorder(node->left, result);
        result.push_back(node->val);
        inorder(node->right, result);
    }
}

template<typename T>
void  BinaryTree<T>::addNode(T v) {
    if (root == nullptr) {
        root = new TreeNode<T>(v);
    }
    else {
        addNode(v, root);
    }
}

template<typename T>
vector<T> BinaryTree<T>::inorder() {
    vector<T> result;
    inorder(root, result);
    return result;
}
