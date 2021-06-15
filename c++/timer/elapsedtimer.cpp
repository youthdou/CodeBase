#include "elapsedtimer.h"

ElapsedTimer::ElapsedTimer()
{

}

void ElapsedTimer::start()
{
    m_startTP = std::chrono::high_resolution_clock::now();
}

double ElapsedTimer::elapsed()
{
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - m_startTP;
    return diff.count();
}
