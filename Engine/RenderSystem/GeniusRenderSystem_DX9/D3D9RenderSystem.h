
/*
Author : Xieliujian
Data : 2016.9.11
Description : ��Ⱦϵͳ��D3D9ʵ��
*/

#ifndef _D3D9RenderSystem_h_
#define _D3D9RenderSystem_h_

#include "RenderSystem.h"

class D3D9RenderSystem : public RenderSystem
{
public:
	D3D9RenderSystem();
	~D3D9RenderSystem();

	// ֡��Ⱦ��ʼ
	virtual void BeginFrame();

	// ֡��Ⱦ����
	virtual void EndFrame();

	// ��Ⱦ
	virtual void Render();
};

#endif