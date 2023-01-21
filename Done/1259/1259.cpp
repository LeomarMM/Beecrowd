#include <cstdio>
#include <functional>
#include <set>

using namespace std;
int main()
{
    int entries;
    multiset<int, greater<int>> oddSet;
    multiset<int> evenSet;
    scanf("%d", &entries);
    for(int i = 0; i < entries; i++)
    {
        int read;
        scanf("%d", &read);
        if(read % 2) oddSet.insert(read);
        else evenSet.insert(read);
    }
    for(auto setItem : evenSet) printf("%d\n", setItem);
    for(auto setItem : oddSet) printf("%d\n", setItem);
    return 0;
}