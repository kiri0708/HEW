/*==================================

	[SceneGame.cpp]
	Author : 出合翔太

===================================*/

#include "SceneGame.h"
#include "SceneManager.h"
#include "Controller.h"
#include "Character.h"
#include "XFile.h"
#include "Model.h"
#include "main.h"

//	ゲームの初期化処理
void SceneGame::Init()
{

}

//	ゲームの終了処理
void SceneGame::Uninit()
{
	
}

//	ゲームの更新処理
void SceneGame::Update()
{
	if (KeyBoard::IsTrigger(DIK_W))
	{
		SceneManager::ChangeSceneState();
	}
}

//	ゲームの描画処理
void SceneGame::Draw()
{

}
