#pragma once
#include "../FrameWork/LowLevel/DirectX.h"

//渡されたQuaのVec方向を取得
D3DXVECTOR3 Transform(const D3DXVECTOR3 vec, const D3DXQUATERNION qua);

//渡されたVecを軸にRot回転
D3DXQUATERNION RotateAxis(const D3DXVECTOR3 vec, float rot, const D3DXQUATERNION qua1);

//fromからtoの向きへのQuaを取得
D3DXQUATERNION FromToRotation(D3DXVECTOR3 from, D3DXVECTOR3 to);