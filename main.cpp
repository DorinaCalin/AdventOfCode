#include <fstream>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");

unsigned long long s,x=1;

int main()
{
    while(f>>x)
        s=s+(x/3-2);
    g<<s;
    return 0;
}
