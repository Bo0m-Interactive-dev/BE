#pragma once
#include"Core.h"

namespace BE {
	class ENGINE_API Application
	{

	public:
		Application();


		virtual ~Application();

		void Run();
	};

	//To be definet in CLIENT
	Application* CreateApplication();
}