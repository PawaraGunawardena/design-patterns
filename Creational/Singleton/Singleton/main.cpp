#include <iostream>
#include "Settings.h"

Settings* Settings::instance = nullptr;
int Settings::counter = 0;

int main()
{
    Settings* settings1 = Settings::getSettings(1920, 1080);
    settings1->viewSettings();

    Settings* settings2 = Settings::getSettings(1920, 1080);
    settings2->viewSettings();

    return 0;
}
