#include <ctime>
#include <cstdio>
#include <cstdint>
int main()
{
    tm t1{}, t2{};
    t1.tm_year = 100;
    t2.tm_year = 100;
    scanf("Dia %d %d : %d : %d\n", &t1.tm_mday, &t1.tm_hour, &t1.tm_min, &t1.tm_sec);
    scanf("Dia %d %d : %d : %d", &t2.tm_mday, &t2.tm_hour, &t2.tm_min, &t2.tm_sec);
    int64_t diff = difftime(mktime(&t2), mktime(&t1));
    printf("%lld dia(s)\n", diff/86400);
    printf("%lld hora(s)\n", (diff / 3600) % 24);
    printf("%lld minuto(s)\n", (diff / 60) % 60);
    printf("%lld segundo(s)\n", diff % 60);
}