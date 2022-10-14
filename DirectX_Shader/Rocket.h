#pragma once
#include "FrameWork/Resources/CGameObject.h"

class ParticleEmitter;

class Rocket : public CGameObject3D
{
private:
	D3DXVECTOR3 m_RocketUp;
	D3DXVECTOR3 m_LookAtPoint;
	int m_FrameCount;
	
	CGameObject3D* m_TargetObject;
	ParticleEmitter* m_ParticleEmitter;

	const float m_Near = 0.1f;
	const float m_Far = 5000.0f;
	const float m_Fov = 50.0f;//�x

	const int LIFE_TIME = 240;

	const D3DXVECTOR3  UnitX = D3DXVECTOR3(1.0f, 0.0f, 0.0f);
	const D3DXVECTOR3  UnitY = D3DXVECTOR3(0.0f, 1.0f, 0.0f);
	const D3DXVECTOR3  UnitZ = D3DXVECTOR3(0.0f, 0.0f, 1.0f);

	bool CanTracking();

public:
	void Config()override;
	void Init()override;
	void Uninit()override;
	void Update()override;

	void SetTargetObject(CGameObject3D* target) { m_TargetObject = target; }
	
	void OnCollisionEnter(CGameObject3D* collider)override;
};