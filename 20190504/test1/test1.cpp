﻿// test1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "pch.h"
#include <iostream>
using namespace std;


char in[1005][1005];
int judge[1005][1005] = {};
int main()
{
	int h, w;
	cin >> h >> w;

	int ans = 0;
	bool loop = true;
	for (int i = 0; i < h; i++) {

		for (int j = 0; j < w; j++) {
			cin >> in[i][j];
		}
	}
	while (true) {



		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (in[i][j] == '#') {
					judge[i][j] = 1;
					if (i != 0)judge[i - 1][j] = 1;
					if (j != 0)judge[i][j - 1]=1;
					if (i != h - 1)judge[i + 1][j] = 1;
					if (j != w - 1)judge[i][j + 1] = 1;
				}

			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (judge[i][j] == 1) {
					in[i][j] = '#';
				}
			}
		}
		ans += 1;
		loop = false;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (in[i][j] == '.') {
					loop = true;
				}
			}
		}

		if (loop == false)break;
	}


	cout << ans << endl;

	return 0;
}


// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
