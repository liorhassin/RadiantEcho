#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace RadiantEcho {
	class RADIANT_ECHO_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define RE_CORE_TRACE(...) ::RadiantEcho::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define RE_CORE_INFO(...)  ::RadiantEcho::Log::GetCoreLogger()->info(__VA_ARGS__)
#define RE_CORE_WARN(...)  ::RadiantEcho::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define RE_CORE_ERROR(...) ::RadiantEcho::Log::GetCoreLogger()->error(__VA_ARGS__)
#define RE_CORE_FATAL(...) ::RadiantEcho::Log::GetCoreLogger()->fatal(__VA_ARGS__)


// Client log macros
#define RE_TRACE(...)      ::RadiantEcho::Log::GetClientLogger()->trace(__VA_ARGS__)
#define RE_INFO(...)       ::RadiantEcho::Log::GetClientLogger()->info(__VA_ARGS__)
#define RE_WARN(...)       ::RadiantEcho::Log::GetClientLogger()->warn(__VA_ARGS__)
#define RE_ERROR(...)      ::RadiantEcho::Log::GetClientLogger()->error(__VA_ARGS__)
#define RE_FATAL(...)      ::RadiantEcho::Log::GetClientLogger()->fatal(__VA_ARGS__)