#pragma once

#ifdef RE_PLATFORM_WINDOWS

extern RadiantEcho::Application* RadiantEcho::CreateApplication();

int main(int argc, char** argv) {
	auto app = RadiantEcho::CreateApplication();
	app->Run();
	delete app;
}
#endif