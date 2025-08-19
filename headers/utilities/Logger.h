#pragma once

#include <string>

class Logger
{
public:
    static void LogMessage(const std::string& message);
    static void LogError(const std::string& message);
};