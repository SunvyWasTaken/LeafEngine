#pragma once

#include "BasicRender.h"

class Camera;
class ShaderOGL;

class MM_API OpenGLRender : public BasicRender<OpenGLRender>
{
public:
	OpenGLRender(const std::string& _name, const FVec2 _size);

	virtual ~OpenGLRender();

	void BeginFrame();

	void Draw(const Camera* cam, const Mesh* mesh, const FVec3& Position);

	void EndFrame();

	bool IsRunning();

	void CloseWindow();

private:

	void CursorPosCallback(double xPos, double yPos);

	void LoadShader();

private:

	std::unique_ptr<ShaderOGL> shaderProgram;
	std::unique_ptr<ShaderOGL> lightProgram;
};
