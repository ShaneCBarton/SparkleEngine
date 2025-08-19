#include "utilities/Logger.h"
#include <iostream>

void Logger::LogMessage(const std::string& message)
{
    std::printf("\033[32mLOG | %s \033[0m\n", message.c_str());
}

void Logger::LogError(const std::string& errorMessage)
{
    std::printf("\033[31mERROR LOG | %s \033[0m\n", errorMessage.c_str());
}