#include "Log.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace Aurora
{
    std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
    std::shared_ptr<spdlog::logger> Log::s_AppLogger;

    void Log::Init()
    {
        spdlog::set_pattern("%^[%T]%-9n: %v%$");
        s_CoreLogger = spdlog::stdout_color_mt("Aurora");
        s_CoreLogger->set_level(spdlog::level::trace);
        s_AppLogger = spdlog::stdout_color_mt("App");
        s_AppLogger->set_level(spdlog::level::trace);
    }
}