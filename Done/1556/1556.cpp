#include <iostream>
#include <set>
#include <string>
using namespace std;
void generateSubsequence(string& val, set<string>& store);
int main()
{
    string input;
    ios_base::sync_with_stdio(false);
    while(cin >> input)
    {
        set<string> mySet;
        generateSubsequence(input, mySet);
        for(auto& item : mySet)
        {
            cout << item << "\n";
        }
        cout << "\n";
    }
}
void generateSubsequence(string& val, set<string>& store)
{
    const bool exists = store.find(val) != store.end();
    if(val.length() == 0 || exists) return;
    store.insert(val);
    for(int i = 0; i < val.length(); i++)
    {
        string cpy = val;
        cpy.erase(cpy.begin() + i);
        generateSubsequence(cpy, store);
    }
    return;
}