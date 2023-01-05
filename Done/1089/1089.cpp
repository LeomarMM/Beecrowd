#include <vector>
#include <cstdio>
#include <cstdint>
using namespace std;
int16_t peaks(vector<int16_t> &input);
int main() {
    
    while(true) 
    {
        int16_t N;
        scanf("%hd", &N);
        if(N == 0) break;
        vector<int16_t> H;
        for(int16_t i = 0; i < N; i++) 
        {
            int16_t sH;
            scanf("%hd", &sH);
            H.push_back(sH);
        }
        printf("%d\n", peaks(H));
    }
    return 0;
}
int16_t peaks(vector<int16_t> &input)
{
    int16_t totalPeaks{};
    for(int16_t i = 0; i < input.size(); i++)
    {
        int16_t pAddr (i == 0 ? (input.size()-1):(i-1)), cAddr = i, nAddr = (i == input.size()-1 ? 0:(i+1));
        int16_t pVal = input[pAddr], cVal = input[cAddr], nVal = input[nAddr];
        totalPeaks += ((cVal > pVal && cVal > nVal) || (cVal < pVal && cVal < nVal));
    }
    return totalPeaks;
}