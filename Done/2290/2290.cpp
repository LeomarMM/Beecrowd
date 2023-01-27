#include <cstdio>
#include <cstdint>
#include <unordered_set>
#include <utility>

using namespace std;
pair<int64_t, int64_t> sortAnswer(unordered_set<int64_t> &answer);
int main()
{
    while(true)
    {
        uint32_t N;
        int sout;
        sout = scanf("%d", &N);
        if(!N || sout == EOF) break;
        unordered_set<int64_t> nums;
        for(uint32_t i{}; i<N; i++)
        {
            int64_t A;
            scanf("%lld", &A);
            auto pos = nums.find(A);
            if(pos != nums.end()) nums.erase(pos);
            else nums.insert(A);
        }
        auto result = sortAnswer(nums);
        printf("%lld %lld\n", result.first, result.second);
    }
    return 0;
}
pair<int64_t, int64_t> sortAnswer(unordered_set<int64_t> &answer)
{
    int64_t A, B;
    auto first_it = answer.begin();
    auto second_it = next(first_it);
    if(*first_it > *second_it)
    {
        A = *second_it;
        B = *first_it;
    }
    else
    {
        A = *first_it;
        B = *second_it;
    }
    pair<int64_t, int64_t> result{A, B};
    return result;
}