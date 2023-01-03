#include <iostream>
 
using namespace std;
 
int main() 
{
    int a, b, c, d, mins, hours;
    ios_base::sync_with_stdio(false);
    cin >> a >> b >> c >> d;
    mins = d-b;
    hours = c-a;
    if(mins < 0) 
    {
        hours -= 1;
        mins += 60;
    }
    if(hours < 0 || (hours == 0 && mins == 0)) hours += 24;
    cout << "O JOGO DUROU " << hours << " HORA(S) E " << mins << " MINUTO(S)\n";
    return 0;
}