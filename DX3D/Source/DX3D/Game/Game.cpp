#include <DX3D/Game/Game.h>
#include <DX3D/Window/Window.h>
#include <DX3D/Graphics/GraphicsEngine.h>
#include <DX3D/Core/Logger.h>


dx3d::Game::Game():
	Base({*std::make_unique<Logger>(Logger::LogLevel::Info).release()}),
	m_loggerPtr(&m_logger)
{
	
	m_graphicsEngine = std::make_unique<GraphicEngine>();
	m_display = std::make_unique<Window>();
	


	m_loggerPtr->log(Logger::LogLevel::Info, "Game initialized");
	
}

dx3d::Game::~Game()
{
	m_loggerPtr->log(Logger::LogLevel::Info, "Game deallocation started.");
}
