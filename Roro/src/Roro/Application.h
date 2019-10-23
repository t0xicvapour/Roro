#pragma once
#include "Core.h"
namespace Roro {
	class RORO_API Application
	{
	public:
		Application()
		{

		}
		virtual ~Application()
		{

		}
		void Run();
	};

	//to be defined in the client solution
	Application* CreateApplication();
}
