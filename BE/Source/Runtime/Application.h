#pragma once

namespace BE
{

	class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	//To be Defined in Client
	Application* CreateApplication();


}