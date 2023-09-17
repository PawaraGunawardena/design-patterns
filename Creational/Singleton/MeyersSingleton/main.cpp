#include <iostream>
#include "Settings.h"
#include <thread>

int Settings::counter = 0;

void firstScreen()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Settings& settings = Settings::getSettings(1920, 1080);
    settings.viewSettings();
}

void secondScreen()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Settings& settings = Settings::getSettings(1920, 1080);
    settings.viewSettings();
}

int main()
{
    std::thread t1(firstScreen);
    std::thread t2(secondScreen);
    t1.join();
    t2.join();

    return 0;
}
