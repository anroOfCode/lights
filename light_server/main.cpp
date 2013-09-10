#include <iostream>
#include <functional>
#include "LightsCore.h"
#include <unistd.h>

using namespace std;

void PrintDebugString(const string & debugText)
{
    cout << debugText;
}

int main (int argc, char** argv)
{
    LightsCore lc;
    lc.Run();
    std::cin.ignore();
    return 0;
}
