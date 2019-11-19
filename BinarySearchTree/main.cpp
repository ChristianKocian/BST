// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"
#include <vector>

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
   
    string s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "tree";
    bst.deleteItem(s);
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;
    
    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "is";
    bst.deleteItem(s);
    print(bst.inOrderTraversal());
    cout << "inorder traversal is " << endl;
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;

    cout << "erase tree " << endl;
    cout << "number of nodes in tree before erase is " << bst.countNodes() << endl;
    bst.makeEmpty();
    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after erase is " << bst.countNodes() << endl;
    cout << endl;

    cout << "inserting ... " << s << endl;
    cout << "number of nodes in tree before insert is " << bst.countNodes() << endl;
    s = "bubba gump";
    bst.insertItem(s);
    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after insert is " << bst.countNodes() << endl;
    cout << endl;
    
    s = "forrest gump";
    bst.insertItem(s);
    s = "penny the ho";
    bst.insertItem(s);

    cout << "find item " << s << endl;
    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    bool result = bst.isItemInTree(s);
    if (result == true) {
       cout << "item found " << endl;
    } else {
       cout << "item not found " << endl;
    }

    s = "forrest gump";
    cout << "find item " << s << endl;
    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    result = bst.isItemInTree(s);
    if (result == true) {
       cout << "item found " << endl;
    } else {
       cout << "item not found " << endl;
    }

    s = "forget";
    cout << "find item " << s << endl;
    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    result = bst.isItemInTree(s);
    if (result == true) {
       cout << "item found " << endl;
    } else {
       cout << "item not found " << endl;
    }
}

