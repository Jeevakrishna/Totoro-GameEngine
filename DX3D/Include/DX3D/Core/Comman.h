#include <DX3D/Core/Core.h>


namespace dx3d
{
	struct BaseDesc
	{
		Logger& logger;
	};

	struct WindowDesc
	{
		BaseDesc base;

	};

	struct GraphicsEngineDesc
	{
		BaseDesc base;

	};
	struct RenderSystemDesc
	{
		BaseDesc base;

	};
}