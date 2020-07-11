#include "lib.h"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_sinks.h>
#include <iostream>

int main()
{
//    auto logger = spdlog::stdout_logger_mt("console");
//    logger->info("version {} was started", version());

    std::cout << "build " << version() << std::endl;
    std::cout << "Hello, World!" << std::endl;

    return 0;
}
