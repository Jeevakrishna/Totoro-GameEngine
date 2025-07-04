#include <DX3D/Graphics/RenderSystem.h>


dx3d::RenderSystem::RenderSystem()
{
	D3D_FEATURE_LEVEL featureLevel{};
	UINT createDeviceflags{};
#ifdef _DEBUG
	createDeviceflags != D3D11_CREATE_DEVICE_DEBUG;
#endif
	auto hr = D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceflags, NULL, 0, D3D11_SDK_VERSION, &m_d3dDevice, &featureLevel, &m_d3dContext);

	if (FAILED(hr))
	{
		throw std::runtime_error("Direct3D11 initialization failed.");
	}
}

dx3d::RenderSystem::~RenderSystem()
{
}
