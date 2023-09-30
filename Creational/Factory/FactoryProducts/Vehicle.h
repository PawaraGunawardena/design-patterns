#pragma once

#include <string>

class Vehicle
{
protected:
    std::string chassis;
    std::string engine;
    std::string tyres;
    std::string body;

public:
    const std::string &getChassis() const;
    void setChassis(const std::string &chassis);
    const std::string &getEngine() const;
    void setEngine(const std::string &engine);
    const std::string &getTyres() const;
    void setTyres(const std::string &tyres);
    const std::string &getBody() const;
    void setBody(const std::string &body);
    void showDetails();
    virtual void ride() = 0;
    virtual ~Vehicle() = default;
};
