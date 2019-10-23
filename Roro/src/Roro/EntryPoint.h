#pragma once

#ifdef RO_PLATFORM_WINDOWS


extern Roro::Application* Roro::CreateApplication();
int main(int argc, char** argv)
{
	auto app = Roro::CreateApplication();
	app->Run();
	delete app;
}
#endif // RO_PLATFORM_WINDOWS
