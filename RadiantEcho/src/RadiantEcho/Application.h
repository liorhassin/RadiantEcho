#pragma once

#include "Core.h"

namespace RadiantEcho {

	class RADIANT_ECHO_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//To be defined in CLIENT.
	Application* CreateApplication();
}
