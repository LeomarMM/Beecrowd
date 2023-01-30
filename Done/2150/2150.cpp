#include <iostream>
#include <string>
using namespace std;
int findAndCountVowels(string& vowels, string& sentence);
int countAndEliminateVowel(char vowel, string& sentence);
int main()
{
    string vowels;
    ios_base::sync_with_stdio(false);
    while(getline(cin, vowels))
    {
        string sentence;
        getline(cin, sentence);
        if(cin.eof()) return 0;
        cout << findAndCountVowels(vowels, sentence) << "\n";
    }
}
int findAndCountVowels(string& vowels, string& sentence)
{
    int count{};
    for(int i = 0; i < vowels.length(); i++)
        count += countAndEliminateVowel(vowels[i], sentence);
    return count;
}
int countAndEliminateVowel(char vowel, string& sentence)
{
    int count{}, i{};
    while(i < sentence.length())
    {
        if(sentence[i] == vowel)
        {
            sentence.erase(sentence.begin() + i);
            count++;
            continue;
        }
        i++;
    }
    return count;
}