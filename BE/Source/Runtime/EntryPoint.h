#pragma once

#ifdef BE_PLATFORM_WINDOWS

//Extern will be found in SandboxApp.cpp
extern BE::Application* BE::CreateApplication();

int main(int argc, char** argv)
{
	auto app = BE::CreateApplication();
	app->Run();
	delete app;

}

#endif
