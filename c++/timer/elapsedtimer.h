#ifndef ELAPSEDTIMER_H
#define ELAPSEDTIMER_H

#include <chrono>

class ElapsedTimer
{
public:
    ElapsedTimer();
    void start();

    //return ms
    double elapsed();

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> m_startTP;
};

#endif // ELAPSEDTIMER_H
