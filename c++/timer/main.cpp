#include <iostream>
#include <thread>

#include "elapsedtimer.h"

using namespace std;


void test_elapsedtimer()
{
    ElapsedTimer t;
    t.start();
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "run: " << t.elapsed() << " s";
}

int main()
{
    cout << "Hello World!" << endl;
    test_elapsedtimer();
    return 0;
}
