#pragma once

#include "BasicRender.h"

class MM_API VulkanRender : public BasicRender<VulkanRender>
{
public:
	VulkanRender();

	virtual ~VulkanRender();

	void BeginFrame();

	void Draw(const Camera* cam, const MeshComponent* mesh);

	void EndFrame();

	bool IsRunning() const;

};
