#include "Timer.h"

Timer::Timer(float targetTime)
    : targetTime(targetTime)
{
}

void Timer::Tick(float delatTime)
{
    // 경과 시간 업데이트
    elapsedTime += delatTime;
}

void Timer::Reset()
{
    elapsedTime = 0.0f;
}

bool Timer::IsTimeOut() const
{
    return elapsedTime >= targetTime;
}

void Timer::SetTargetTime(float newtargetTime)
{
    targetTime = newtargetTime;
}
