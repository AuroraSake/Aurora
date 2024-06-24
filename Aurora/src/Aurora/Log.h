#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"



namespace Aurora
{
    class AURORA_API Log
    {
    public:
        static void Init();

        static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        static std::shared_ptr<spdlog::logger>& GetAppLogger() { return s_AppLogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_AppLogger;
    };
}

#define  AU_COER_TRACE(...) ::Aurora::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define  AU_COER_INFO(...)  ::Aurora::Log::GetCoreLogger()->info(__VA_ARGS__)
#define  AU_COER_WARN(...)  ::Aurora::Log::GetCoreLogger()->warn(__VA_ARGS__)    
#define  AU_COER_ERROR(...) ::Aurora::Log::GetCoreLogger()->error(__VA_ARGS__)
#define  AU_COER_FATAL(...) ::Aurora::Log::GetCoreLogger()->critical(__VA_ARGS__)


#define  AU_APP_TRACE(...)  ::Aurora::Log::GetAppLogger()->trace(__VA_ARGS__)
#define  AU_APP_INFO(...)   ::Aurora::Log::GetAppLogger()->info(__VA_ARGS__)
#define  AU_APP_WARN(...)   ::Aurora::Log::GetAppLogger()->warn(__VA_ARGS__)    
#define  AU_APP_ERROR(...)  ::Aurora::Log::GetAppLogger()->error(__VA_ARGS__)
#define  AU_APP_FATAL(...)  ::Aurora::Log::GetAppLogger()->critical(__VA_ARGS__)
