#pragma once
#include "../LowLevel/DirectX.h"
#include <string>
#include "../Resources/DevelopStruct.h"
#include "../Manager/ManagerShader.h"
#include "../Resources/DevelopEnum.h"

class CShader;
class CRenderInfo
{
protected:
	
	CShader* m_Shader;
	int m_RenderQueue;

	D3DXCOLOR m_Color = D3DXCOLOR(1.0f,1.0f,1.0f,1.0f);

public:
	int GetRenderQueue() { return m_RenderQueue; }
	void SetColor(D3DXCOLOR color) { m_Color = color; }
};

