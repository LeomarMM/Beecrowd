#include <iostream>
#include <string>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    string input;
    while(cin >> input)
    {
        int counter{};
        for(int j = 0; j < input.length(); j++)
        {
            if(input[j] == '(') counter++;
            else if(input[j] == ')') counter--;
            else continue;
            if(counter < 0) break;
        }
        if(counter == 0) cout << "correct\n";
        else cout << "incorrect\n";
    }
    return 0;
}