#include "stdafx.h"
#include "Game.h"



bool Game::Start()
{
	SpriteInitData initData;
	//DDSファイル(画像データ)のファイルパスを指定する。
	initData.m_ddsFilePath[0] = "Assets/image/sample.dds";
	//Sprite表示用のシェーダーのファイルパスを指定する。
	initData.m_fxFilePath = "Assets/shader/sprite.fx";
	//スプライトの幅と高さを指定する。
	initData.m_width = 200;
	initData.m_height = 200;
	//Sprite初期化オブジェクトを使用して、Spriteを初期化する。
	m_sprite.Init(initData);

	return true;
}

void Game::Update()
{
}
void Game::Render(RenderContext& rc)
{
	m_sprite.Draw(rc);
}