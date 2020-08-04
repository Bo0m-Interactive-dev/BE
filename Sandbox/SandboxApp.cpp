#include "../BE/Source/CoreMinimal.h"

class Sandbox : public BE::Application
{

public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

int main()
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;

}