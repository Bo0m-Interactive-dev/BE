#include "../../BE/Source/CoreMinimal.h"


class Example : public BE::Application
{
public:
	Example()
	{


	}

	~Example()
	{


	}

};
//Extern for BE EntryPoint
BE::Application* BE::CreateApplication()
{
	return new Example();
}