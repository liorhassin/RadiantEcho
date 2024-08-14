#pragma once

#ifdef RE_PLATFORM_WINDOWS

extern RadiantEcho::Application* RadiantEcho::CreateApplication();

int main(int argc, char** argv) {

	//TODO - remove after choosing where log is being initialized
	RadiantEcho::Log::Init();
	RE_CORE_WARN("Initialized Core Log!");
	int a = 5;
	RE_INFO("Hello! Var={0}", a);

	auto app = RadiantEcho::CreateApplication();
	app->Run();
	delete app;
}
#endif