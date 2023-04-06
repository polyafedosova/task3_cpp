#include <iostream>
#include <string>
#include <vector>
#include "treeNode.h"
#include "binaryTree.h"

using namespace std;


int main() {
    BinaryTree<int> intTree;
    intTree.addNode(5);
    intTree.addNode(3);
    intTree.addNode(7);
    intTree.addNode(1);
    intTree.addNode(4);

    vector<int> intResult = intTree.inorder();
    cout << "Int tree inorder traversal: ";
    for (int val : intResult) {
        cout << val << " ";
    }
    cout << endl;

    BinaryTree<string> stringTree;
    stringTree.addNode("banana");
    stringTree.addNode("apple");
    stringTree.addNode("cherry");
    stringTree.addNode("pear");

    vector<string> stringResult = stringTree.inorder();
    cout << "String tree inorder traversal: ";
    for (string val : stringResult) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
