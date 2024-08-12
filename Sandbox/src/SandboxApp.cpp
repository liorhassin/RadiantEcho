#include <RadiantEcho.h>

class Sandbox : public RadiantEcho::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

RadiantEcho::Application* RadiantEcho::CreateApplication() {
	return new Sandbox();
}