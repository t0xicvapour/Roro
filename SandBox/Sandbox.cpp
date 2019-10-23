#include<Roro.h>


class Sandbox : public Roro::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Roro::Application* Roro::CreateApplication()
{
	return new Sandbox();
}