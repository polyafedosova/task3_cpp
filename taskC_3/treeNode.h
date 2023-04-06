#pragma once

using namespace std;

template<typename T>
class TreeNode
{
public:
    T val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(T v) : val(v), left(nullptr), right(nullptr) {}
};
