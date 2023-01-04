#include <iostream>
#include <map>
#include <string>

#define m3 map<string, string>
#define m2 map<string, m3*>
#define m1 map<string, m2*>

using namespace std;

m3 ave = {{"carnivoro", "aguia"}, {"onivoro", "pomba"}};
m3 mamifero = {{"herbivoro", "vaca"}, {"onivoro", "homem"}};
m3 inseto = {{"hematofago", "pulga"}, {"herbivoro", "lagarta"}};
m3 anelideo = {{"hematofago", "sanguessuga"}, {"onivoro", "minhoca"}};

m2 vertebrado = {{"ave", &ave}, {"mamifero", &mamifero}};
m2 invertebrado = {{"inseto", &inseto}, {"anelideo", &anelideo}};

m1 animal = {{"vertebrado", &vertebrado}, {"invertebrado", &invertebrado}};

int main() 
{
    string a, b, c;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c;
    cout << (*(*animal[a])[b])[c] << "\n";
    return 0;
}