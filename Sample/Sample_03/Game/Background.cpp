#include "stdafx.h"
#include "Background.h"

bool Background::Start()
{
	ModelInitData initData;
	initData.m_tkmFilePath = "Assets/modelData/bg/bg.tkm";
	// シェーダーファイルのファイルパスを指定する。
	initData.m_fxFilePath = "Assets/shader/model.fx";
	// 頂点シェーダーのエントリーポイント
	initData.m_vsEntryPointFunc = "VSMain";
	m_model.Init(initData);

	// 静的物理オブジェクトを作成。
	m_physicsStaticObject.CreateFromModel(m_model, m_model.GetWorldMatrix());

	return true;
}
void Background::Update()
{

}
void Background::Render(RenderContext& rc)
{
	m_model.Draw(rc);
}