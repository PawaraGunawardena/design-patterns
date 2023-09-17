#pragma once

class Settings
{
private:
    static int counter;

    int width;
    int height;
    int index;

protected:
    Settings(int width, int height);

public:
    int getWidth() const;
    int getHeight() const;
    int getIndex() const;
    void viewSettings();

    Settings(Settings&) = delete;
    Settings(Settings&&) = delete;
    void operator=(const Settings&) = delete;

    static Settings& getSettings(int width = 1920, int height = 1080);
};
