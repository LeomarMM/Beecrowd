#include <iostream>
#include <iomanip>
#include <memory>
using namespace std;

class BinaryTree
{
    private:
    typedef struct node 
    {
        int key;
        shared_ptr<struct node> left;
        shared_ptr<struct node> right;
    } node;
    shared_ptr<node> root;

    void insert(shared_ptr<node> &root, int value)
    {
        if(root == nullptr) 
        {
            root = make_shared<node>();
            root->key = value;
            return;
        }
        if(value < root->key) insert(root->left, value);
        else insert(root->right, value);
    }

    void infixPrint(shared_ptr<node> &root) 
    {
        if (root == NULL) return;
        infixPrint(root->left);
        cout << " " << root->key;
        infixPrint(root->right);
    }

    void prefixPrint(shared_ptr<node> &root) 
    {
        if (root == NULL) return;
        cout << " " << root->key;
        prefixPrint(root->left);
        prefixPrint(root->right);
    }

    void postfixPrint(shared_ptr<node> &root) 
    {
        if (root == NULL) return;
        postfixPrint(root->left);
        postfixPrint(root->right);
        cout << " " << root->key;
    }

    public:
    
    void insert(int value)
    {
        insert(this->root, value);
    }
    void infixPrint()
    {
        cout << "In..:";
        infixPrint(root);
        cout << "\n";
    }
    void prefixPrint()
    {
        cout << "Pre.:";
        prefixPrint(root);
        cout << "\n";
    }
    void postfixPrint()
    {
        cout << "Post:";
        postfixPrint(root);
        cout << "\n";
    }
};

int main()
{
    int N, C;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> C;
    for(int i = 0; i<C; i++)
    {
        BinaryTree tree;
        cin >> N;
        for(int j = 0; j<N; j++)
        {
            int V;
            cin >> V;
            tree.insert(V);
        }
        cout << "Case " << i+1 << ":\n";
        tree.prefixPrint();
        tree.infixPrint();
        tree.postfixPrint();
        cout << "\n";
    }
    return 0;
}