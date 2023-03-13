#include "DxLib.h"
#include "game.h"
#include "Vec2.h"
#include "NameCollision.h"
namespace
{
	const char* const name  = "player0   ";
	const char* const name1 = "ここのは  ";
	const char* const name2 = "すがちゃ  ";
	const char* const name3 = "けん      ";
	const char* const name4 = "ひなのん  ";
	const char* const name5 = "じょーかー";
	const char* const name6 = "もみじ    ";
	const char* const name7 = "ゆー      ";
	const char* const name8 = "りっち    ";
	const char* const name9 = "ある　    ";
}

namespace String
{
	constexpr int kVerticalSpace = 70;//文字空間

	constexpr int kVerticalSpace2 = 50;//文字空間
}

namespace Team
{
	constexpr int k300 = 300;

	//チームA
	constexpr int kALeft = Game::kScreenWidth / 2 - 300;
	constexpr int kATop = Game::kScreenHeight / 2 - 150;

	constexpr int kANameLeft = kALeft - 30;
	//1番目
	constexpr int kANameBoxLeft   = kANameLeft;
	constexpr int kANameBoxTop    = k300 - 10;
	constexpr int kANameBoxRight  = kANameBoxLeft + 200;
	constexpr int kANameBoxBottom = kANameBoxTop  + 50;
	//2番目
	constexpr int kANameBox2Left = kANameBoxLeft;
	constexpr int kANameBox2Top = kANameBoxBottom + 20;
	constexpr int kANameBox2Right = kANameBox2Left + 200;
	constexpr int kANameBox2Bottom = kANameBox2Top + 50;
	//3番目
	constexpr int kANameBox3Left = kANameBox2Left;
	constexpr int kANameBox3Top = kANameBox2Bottom + 20;
	constexpr int kANameBox3Right = kANameBox3Left + 200;
	constexpr int kANameBox3Bottom = kANameBox3Top + 50;
	//4番目
	constexpr int kANameBox4Left = kANameBox3Left;
	constexpr int kANameBox4Top = kANameBox3Bottom + 20;
	constexpr int kANameBox4Right = kANameBox4Left + 200;
	constexpr int kANameBox4Bottom = kANameBox4Top + 50;
	//5番目
	constexpr int kANameBox5Left = kANameBox4Left;
	constexpr int kANameBox5Top = kANameBox4Bottom + 20;
	constexpr int kANameBox5Right = kANameBox5Left + 200;
	constexpr int kANameBox5Bottom = kANameBox5Top + 50;

	//チームB
	constexpr int kBLeft = Game::kScreenWidth / 2 + 150;
	constexpr int kBTop = Game::kScreenHeight / 2 - 150;

	constexpr int kBNameLeft = kBLeft - 30;

	constexpr int kBNameBoxLeft = kBNameLeft;
	constexpr int kBNameBoxTop = k300 - 10;
	constexpr int kBNameBoxRight = kBNameBoxLeft + 200;
	constexpr int kBNameBoxBottom = kBNameBoxTop + 50;
	//2番目
	constexpr int kBNameBox2Left = kBNameBoxLeft;
	constexpr int kBNameBox2Top = kBNameBoxBottom + 20;
	constexpr int kBNameBox2Right = kBNameBox2Left + 200;
	constexpr int kBNameBox2Bottom = kBNameBox2Top + 50;
	//3番目
	constexpr int kBNameBox3Left = kBNameBox2Left;
	constexpr int kBNameBox3Top = kBNameBox2Bottom + 20;
	constexpr int kBNameBox3Right = kBNameBox3Left + 200;
	constexpr int kBNameBox3Bottom = kBNameBox3Top + 50;
	//4番目
	constexpr int kBNameBox4Left = kBNameBox3Left;
	constexpr int kBNameBox4Top = kBNameBox3Bottom + 20;
	constexpr int kBNameBox4Right = kBNameBox4Left + 200;
	constexpr int kBNameBox4Bottom = kBNameBox4Top + 50;
	//5番目
	constexpr int kBNameBox5Left = kBNameBox4Left;
	constexpr int kBNameBox5Top = kBNameBox4Bottom + 20;
	constexpr int kBNameBox5Right = kBNameBox5Left + 200;
	constexpr int kBNameBox5Bottom = kBNameBox5Top + 50;
}

//名前変更用枠
namespace Name
{
	constexpr int k1Left = 0;
	constexpr int k1Top = String::kVerticalSpace2 * 2 - 10;
	constexpr int k1Right = k1Left + 200;
	constexpr int k1Bottom = k1Top + 32 + 10;

	constexpr int k2Left = 0;
	constexpr int k2Top = k1Top + String::kVerticalSpace2;
	constexpr int k2Right = k2Left + 200;
	constexpr int k2Bottom = k2Top + 32 + 10;

	constexpr int k3Left = 0;
	constexpr int k3Top = k2Top + String::kVerticalSpace2;
	constexpr int k3Right = k3Left + 200;
	constexpr int k3Bottom = k3Top + 32 + 10;

	constexpr int k4Left = 0;
	constexpr int k4Top = k3Top + String::kVerticalSpace2;
	constexpr int k4Right = k4Left + 200;
	constexpr int k4Bottom = k4Top + 32 + 10;

	constexpr int k5Left = 0;
	constexpr int k5Top = k4Top + String::kVerticalSpace2;
	constexpr int k5Right = k5Left + 200;
	constexpr int k5Bottom = k5Top + 32 + 10;

	constexpr int k6Left = 0;
	constexpr int k6Top = k5Top + String::kVerticalSpace2;
	constexpr int k6Right = k6Left + 200;
	constexpr int k6Bottom = k6Top + 32 + 10;

	constexpr int k7Left = 0;
	constexpr int k7Top = k6Top + String::kVerticalSpace2;
	constexpr int k7Right = k7Left + 200;
	constexpr int k7Bottom = k7Top + 32 + 10;

	constexpr int k8Left = 0;
	constexpr int k8Top = k7Top + String::kVerticalSpace2;
	constexpr int k8Right = k8Left + 200;
	constexpr int k8Bottom = k8Top + 32 + 10;

	constexpr int k9Left = 0;
	constexpr int k9Top = k8Top + String::kVerticalSpace2;
	constexpr int k9Right = k9Left + 200;
	constexpr int k9Bottom = k9Top + 32 + 10;

	constexpr int k10Left = 0;
	constexpr int k10Top = k9Top + String::kVerticalSpace2;
	constexpr int k10Right = k10Left + 200;
	constexpr int k10Bottom = k10Top + 32 + 10;
}

namespace checkMark
{
	int k1Left = Name::k1Right + 10;
	int k1Top = Name::k1Top;
	int k1Right = k1Left + 45;
	int k1Bottom = k1Top + String::kVerticalSpace2 - 8;

	int k2Left = Name::k2Right + 10;
	int k2Top = Name::k2Top;
	int k2Right = k2Left + 45;
	int k2Bottom = k2Top + String::kVerticalSpace2 - 8;

	int k3Left = Name::k3Right + 10;
	int k3Top = Name::k3Top;
	int k3Right = k3Left + 45;
	int k3Bottom = k3Top + String::kVerticalSpace2 - 8;

	int k4Left = Name::k4Right + 10;
	int k4Top = Name::k4Top;
	int k4Right = k4Left + 45;
	int k4Bottom = k4Top + String::kVerticalSpace2 - 8;

	int k5Left = Name::k5Right + 10;
	int k5Top = Name::k5Top;
	int k5Right = k5Left + 45;
	int k5Bottom = k5Top + String::kVerticalSpace2 - 8;

	int k6Left = Name::k6Right + 10;
	int k6Top = Name::k6Top;
	int k6Right = k6Left + 45;
	int k6Bottom = k6Top + String::kVerticalSpace2 - 8;

	int k7Left = Name::k7Right + 10;
	int k7Top = Name::k7Top;
	int k7Right = k7Left + 45;
	int k7Bottom = k7Top + String::kVerticalSpace2 - 8;

	int k8Left = Name::k8Right + 10;
	int k8Top = Name::k8Top;
	int k8Right = k8Left + 45;
	int k8Bottom = k8Top + String::kVerticalSpace2 - 8;

	int k9Left = Name::k9Right + 10;
	int k9Top = Name::k9Top;
	int k9Right = k9Left + 45;
	int k9Bottom = k9Top + String::kVerticalSpace2 - 8;

	int k10Left = Name::k10Right + 10;
	int k10Top = Name::k10Top;
	int k10Right = k10Left + 45;
	int k10Bottom = k10Top + String::kVerticalSpace2 - 8;
}

namespace Color
{
	constexpr int Red  = 0xff0000;
	constexpr int Blue = 0x0000ff;
}

char Name0[31];
char Name1[31];
char Name2[31];
char Name3[31];
char Name4[31];
char Name5[31];
char Name6[31];
char Name7[31];
char Name8[31];
char Name9[31];

int array2[10]{};
bool one = false;
bool retry = false;
int frameCount = 0;
int count = 0;


void team();//チーム分け
void same();//重複チェック

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// windowモード設定
	ChangeWindowMode(Game::kWindowMode);
	// ウインドウ名設定
	SetMainWindowText(Game::kTitleText);
	// 画面サイズの設定
	SetGraphMode(Game::kScreenWidth, Game::kScreenHeight, Game::kColorDepth);

	SetWindowSizeChangeEnableFlag(true);//ウィンドウモードの拡大縮小（サイズ変更）が可能になります
	SetAlwaysRunFlag(true);//dxlib.exeにフォーカス合わせなくても更新処理を続けてくれる関数です

	SetFontSize(32);

	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}

#if true		
	DrawString(Game::kScreenWidth / 2, 0, "playerの名前を入力してください", GetColor(255, 255, 255));
	// 名前の入力
	SetFontSize(26);

	KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name0, false);
	DrawString(0, String::kVerticalSpace * 2, Name0, GetColor(255, 255, 255));

	KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name1, false);
	DrawString(0, String::kVerticalSpace * 3, Name1, GetColor(255, 255, 255));

	KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name2, false);
	DrawString(0, String::kVerticalSpace * 4, Name2, GetColor(255, 255, 255));

	KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name3, false);
	DrawString(0, String::kVerticalSpace * 5, Name3, GetColor(255, 255, 255));

	KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name4, false);
	DrawString(0, String::kVerticalSpace * 6, Name4, GetColor(255, 255, 255));

	KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name5, false);
	DrawString(0, String::kVerticalSpace * 7, Name5, GetColor(255, 255, 255));

	KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name6, false);
	DrawString(0, String::kVerticalSpace * 8, Name6, GetColor(255, 255, 255));

	KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name7, false);
	DrawString(0, String::kVerticalSpace * 9, Name7, GetColor(255, 255, 255));

	KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name8, false);
	DrawString(0, String::kVerticalSpace * 10, Name8, GetColor(255, 255, 255));

	KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name9, false);
	DrawString(0, String::kVerticalSpace * 11, Name9, GetColor(255, 255, 255));
#endif

	// ダブルバッファモード
	SetDrawScreen(DX_SCREEN_BACK);

	bool nameCheck = true;

	int color[9]{};

	color[0] = 0xffffff;

	int rand1 = 0, rand2 = 0, rand3 = 0, rand4 = 0, rand5 = 0;

	bool isCheck1 = false;
	bool isCheck2 = false;
	bool isCheck3 = false;
	bool isCheck4 = false;
	bool isCheck5 = false;
	bool isCheck6 = false;
	bool isCheck7 = false;
	bool isCheck8 = false;
	bool isCheck9 = false;
	bool isCheck10 = false;

	NameCollision* Name = new NameCollision;

	// 画面の初期化
	ClearDrawScreen();

	while (ProcessMessage() == 0)
	{
		LONGLONG  time = GetNowHiPerformanceCount();

		// 画面のクリア
		ClearDrawScreen();


		if (nameCheck)
		{
			// 名前入力指示文字列の描画
			DrawString(Game::kScreenWidth / 2, 0, "playerの名前を入力してください", GetColor(255, 255, 255));
#if true	
			// 名前の入力
			SetFontSize(26);
			if (Name->SetBoxCheck() == 1)
			{
				KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name0, false);
				DrawString(0, String::kVerticalSpace * 2, Name0, GetColor(255, 255, 255));
			}
			if (Name->SetBoxCheck() == 2)
			{
				KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name1, false);
				DrawString(0, String::kVerticalSpace * 3, Name1, GetColor(255, 255, 255));
			}
			if (Name->SetBoxCheck() == 3)
			{
				KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name2, false);
				DrawString(0, String::kVerticalSpace * 4, Name2, GetColor(255, 255, 255));
			}
			if (Name->SetBoxCheck() == 4)
			{
				KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name3, false);
				DrawString(0, String::kVerticalSpace * 5, Name3, GetColor(255, 255, 255));
			}
			if (Name->SetBoxCheck() == 5)
			{
				KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name4, false);
				DrawString(0, String::kVerticalSpace * 6, Name4, GetColor(255, 255, 255));
			}
			if (Name->SetBoxCheck() == 6)
			{
				KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name5, false);
				DrawString(0, String::kVerticalSpace * 7, Name5, GetColor(255, 255, 255));
			}
			if (Name->SetBoxCheck() == 7)
			{
				KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name6, false);
				DrawString(0, String::kVerticalSpace * 8, Name6, GetColor(255, 255, 255));
			}
			if (Name->SetBoxCheck() == 8)
			{
				KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name7, false);
				DrawString(0, String::kVerticalSpace * 9, Name7, GetColor(255, 255, 255));
			}
			if (Name->SetBoxCheck() == 9)
			{
				KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name8, false);
				DrawString(0, String::kVerticalSpace * 10, Name8, GetColor(255, 255, 255));
			}
			if (Name->SetBoxCheck() == 10)
			{
				KeyInputString(Game::kScreenWidth / 2, String::kVerticalSpace, 30, Name9, false);
				DrawString(0, String::kVerticalSpace * 11, Name9, GetColor(255, 255, 255));
			}
			SetFontSize(32);

			nameCheck = false;
#endif
		}


#if true	
		//更新処理
		if (CheckHitKey(KEY_INPUT_R))//Rを入力したら
		{
			rand1 = GetRand(10), rand2 = GetRand(10);
			rand3 = GetRand(10), rand4 = GetRand(10);
			rand5 = GetRand(10);

			retry = true;//もう一度更新処理
			one = false;
		}
		else
		{
			rand1 = 0, rand2 = 0;
			rand3 = 0, rand4 = 0;
			rand5 = 0;

			retry = false;//更新しない
		}

		if (retry)//被っていたら
		{
			while (!one)//被っていたら
			{
				for (int i = 0; i <= 9; i++)//10人分繰り返し
				{
					array2[i] = GetRand(9);//ランダムな数字を代入
				}
				
				same();//重複確認
			}
		}

		team();//チーム割り当て

		//当たり判定アップデート
		Name->Update();

		if (Name->SetBoxCheck() > 0)//名前を入力
		{
			nameCheck = true;//名前を再入力
		}


#endif

#if true
		//判定を渡す（大きさ）
		Name->GetName1Left(Name::k1Left);
		Name->GetName1Top(Name::k1Top);
		Name->GetName1Right(Name::k1Right);
		Name->GetName1Bottom(Name::k1Bottom);

		Name->GetName2Left(Name::k2Left);
		Name->GetName2Top(Name::k2Top);
		Name->GetName2Right(Name::k2Right);
		Name->GetName2Bottom(Name::k2Bottom);

		Name->GetName3Left(Name::k3Left);
		Name->GetName3Top(Name::k3Top);
		Name->GetName3Right(Name::k3Right);
		Name->GetName3Bottom(Name::k3Bottom);

		Name->GetName4Left(Name::k4Left);
		Name->GetName4Top(Name::k4Top);
		Name->GetName4Right(Name::k4Right);
		Name->GetName4Bottom(Name::k4Bottom);

		Name->GetName5Left(Name::k5Left);
		Name->GetName5Top(Name::k5Top);
		Name->GetName5Right(Name::k5Right);
		Name->GetName5Bottom(Name::k5Bottom);

		Name->GetName6Left(Name::k6Left);
		Name->GetName6Top(Name::k6Top);
		Name->GetName6Right(Name::k6Right);
		Name->GetName6Bottom(Name::k6Bottom);

		Name->GetName7Left(Name::k7Left);
		Name->GetName7Top(Name::k7Top);
		Name->GetName7Right(Name::k7Right);
		Name->GetName7Bottom(Name::k7Bottom);

		Name->GetName8Left(Name::k8Left);
		Name->GetName8Top(Name::k8Top);
		Name->GetName8Right(Name::k8Right);
		Name->GetName8Bottom(Name::k8Bottom);

		Name->GetName9Left(Name::k9Left);
		Name->GetName9Top(Name::k9Top);
		Name->GetName9Right(Name::k9Right);
		Name->GetName9Bottom(Name::k9Bottom);

		Name->GetName10Left(Name::k10Left);
		Name->GetName10Top(Name::k10Top);
		Name->GetName10Right(Name::k10Right);
		Name->GetName10Bottom(Name::k10Bottom);
#endif

#if true
		//判定を渡す（大きさ）
		Name->GetBalance1Left(checkMark::k1Left);
		Name->GetBalance1Top(checkMark::k1Top);
		Name->GetBalance1Right(checkMark::k1Right);
		Name->GetBalance1Bottom(checkMark::k1Bottom);

		Name->GetBalance2Left(checkMark::k2Left);
		Name->GetBalance2Top(checkMark::k2Top);
		Name->GetBalance2Right(checkMark::k2Right);
		Name->GetBalance2Bottom(checkMark::k2Bottom);

		Name->GetBalance3Left(checkMark::k3Left);
		Name->GetBalance3Top(checkMark::k3Top);
		Name->GetBalance3Right(checkMark::k3Right);
		Name->GetBalance3Bottom(checkMark::k3Bottom);

		Name->GetBalance4Left(checkMark::k4Left);
		Name->GetBalance4Top(checkMark::k4Top);
		Name->GetBalance4Right(checkMark::k4Right);
		Name->GetBalance4Bottom(checkMark::k4Bottom);

		Name->GetBalance5Left(checkMark::k5Left);
		Name->GetBalance5Top(checkMark::k5Top);
		Name->GetBalance5Right(checkMark::k5Right);
		Name->GetBalance5Bottom(checkMark::k5Bottom);

		Name->GetBalance6Left(checkMark::k6Left);
		Name->GetBalance6Top(checkMark::k6Top);
		Name->GetBalance6Right(checkMark::k6Right);
		Name->GetBalance6Bottom(checkMark::k6Bottom);

		Name->GetBalance7Left(checkMark::k7Left);
		Name->GetBalance7Top(checkMark::k7Top);
		Name->GetBalance7Right(checkMark::k7Right);
		Name->GetBalance7Bottom(checkMark::k7Bottom);

		Name->GetBalance8Left(checkMark::k8Left);
		Name->GetBalance8Top(checkMark::k8Top);
		Name->GetBalance8Right(checkMark::k8Right);
		Name->GetBalance8Bottom(checkMark::k8Bottom);

		Name->GetBalance9Left(checkMark::k9Left);
		Name->GetBalance9Top(checkMark::k9Top);
		Name->GetBalance9Right(checkMark::k9Right);
		Name->GetBalance9Bottom(checkMark::k9Bottom);

		Name->GetBalance10Left(checkMark::k10Left);
		Name->GetBalance10Top(checkMark::k10Top);
		Name->GetBalance10Right(checkMark::k10Right);
		Name->GetBalance10Bottom(checkMark::k10Bottom);
#endif

#if true	
		//描画更新
		SetDrawBlendMode(DX_BLENDMODE_ALPHA, 50);
		DrawBox(0, 0, Game::kScreenWidth, Game::kScreenHeight,GetColor(255,255,255), true);
		SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);

		// 名前の表示
		DrawString(0, String::kVerticalSpace2, "参加者の名前は", GetColor(255, 255, 255));
		SetFontSize(26);

		DrawString(0, String::kVerticalSpace2 * 2,  Name0, GetColor(255, 255, 255));
		DrawString(0, String::kVerticalSpace2 * 3,  Name1, GetColor(255, 255, 255));
		DrawString(0, String::kVerticalSpace2 * 4,  Name2, GetColor(255, 255, 255));
		DrawString(0, String::kVerticalSpace2 * 5,  Name3, GetColor(255, 255, 255));
		DrawString(0, String::kVerticalSpace2 * 6,  Name4, GetColor(255, 255, 255));
		DrawString(0, String::kVerticalSpace2 * 7,  Name5, GetColor(255, 255, 255));
		DrawString(0, String::kVerticalSpace2 * 8,  Name6, GetColor(255, 255, 255));
		DrawString(0, String::kVerticalSpace2 * 9,  Name7, GetColor(255, 255, 255));
		DrawString(0, String::kVerticalSpace2 * 10, Name8, GetColor(255, 255, 255));
		DrawString(0, String::kVerticalSpace2 * 11, Name9, GetColor(255, 255, 255));
		SetFontSize(32);

		DrawFormatString(300 + 90 + rand1, 100 + rand2, GetColor(255,255,255), "「Ｒ」キーでチーム変更可能");

		//配置テスト
		DrawString(Team::kALeft, Team::kATop, "チームA", Color::Red);
		DrawString(Team::kBLeft, Team::kBTop, "チームB", Color::Blue);

		//チームAの名前ボックス
		DrawBox(Team::kANameBoxLeft + rand1, Team::kANameBoxTop + rand1, Team::kANameBoxRight + rand5, Team::kANameBoxBottom + rand1, Color::Red, false);
		DrawBox(Team::kANameBox2Left + rand1, Team::kANameBox2Top + rand2, Team::kANameBox2Right + rand4, Team::kANameBox2Bottom + rand3, Color::Red, false);
		DrawBox(Team::kANameBox3Left + rand4, Team::kANameBox3Top + rand4, Team::kANameBox3Right + rand3, Team::kANameBox3Bottom + rand5, Color::Red, false);
		DrawBox(Team::kANameBox4Left + rand5, Team::kANameBox4Top + rand5, Team::kANameBox4Right + rand2, Team::kANameBox4Bottom + rand2, Color::Red, false);
		DrawBox(Team::kANameBox5Left + rand2, Team::kANameBox5Top + rand1, Team::kANameBox5Right + rand1, Team::kANameBox5Bottom + rand1, Color::Red, false);

		//チームBの名前ボックス
		DrawBox(Team::kBNameBoxLeft + rand3, Team::kBNameBoxTop + rand3, Team::kBNameBoxRight + rand3, Team::kBNameBoxBottom + rand1, Color::Blue, false);
		DrawBox(Team::kBNameBox2Left + rand5, Team::kBNameBox2Top + rand5, Team::kBNameBox2Right + rand5, Team::kBNameBox2Bottom + rand1, Color::Blue, false);
		DrawBox(Team::kBNameBox3Left + rand4, Team::kBNameBox3Top + rand3, Team::kBNameBox3Right + rand2, Team::kBNameBox3Bottom + rand2, Color::Blue, false);
		DrawBox(Team::kBNameBox4Left + rand2, Team::kBNameBox4Top + rand2, Team::kBNameBox4Right + rand3, Team::kBNameBox4Bottom + rand2, Color::Blue, false);
		DrawBox(Team::kBNameBox5Left + rand1, Team::kBNameBox5Top + rand1, Team::kBNameBox5Right + rand1, Team::kBNameBox5Bottom + rand1, Color::Blue, false);


		if (Name->SetBalanceBoxCheck() >= 0)
		{
			printfDx("%d\n", Name->SetBalanceBoxCheck());
		}

		if(Name->SetBalanceBoxCheck() == 1)
		{
			isCheck1 = true;
		}

		if (Name->SetBalanceBoxCheck() == 2)
		{
			isCheck2 = true;
		}

		//チェックマーク
		if (isCheck1)
		{
		}
		if (isCheck2)
		{
		}

		DrawBox(checkMark::k1Left, checkMark::k1Top, checkMark::k1Right, checkMark::k1Bottom, color[0], true);
		DrawBox(checkMark::k2Left, checkMark::k2Top, checkMark::k2Right, checkMark::k2Bottom, color[0], true);
		DrawBox(checkMark::k3Left, checkMark::k3Top, checkMark::k3Right, checkMark::k3Bottom, color[0], true);
		DrawBox(checkMark::k4Left, checkMark::k4Top, checkMark::k4Right, checkMark::k4Bottom, color[0], true);
		DrawBox(checkMark::k5Left, checkMark::k5Top, checkMark::k5Right, checkMark::k5Bottom, color[0], true);
		DrawBox(checkMark::k6Left, checkMark::k6Top, checkMark::k6Right, checkMark::k6Bottom, color[0], true);
		DrawBox(checkMark::k7Left, checkMark::k7Top, checkMark::k7Right, checkMark::k7Bottom, color[0], true);
		DrawBox(checkMark::k8Left, checkMark::k8Top, checkMark::k8Right, checkMark::k8Bottom, color[0], true);
		DrawBox(checkMark::k9Left, checkMark::k9Top, checkMark::k9Right, checkMark::k9Bottom, color[0], true);
		DrawBox(checkMark::k10Left, checkMark::k10Top, checkMark::k10Right, checkMark::k10Bottom, color[0], true);


		for (int i = 0; i <= 9; i++)
		{
			//名前入力枠
			DrawBox(Name::k1Left, Name::k1Top, Name::k1Right, Name::k1Bottom, color[i], false);
			DrawBox(Name::k2Left, Name::k2Top, Name::k2Right, Name::k2Bottom, color[i], false);
			DrawBox(Name::k3Left, Name::k3Top, Name::k3Right, Name::k3Bottom, color[i], false);
			DrawBox(Name::k4Left, Name::k4Top, Name::k4Right, Name::k4Bottom, color[i], false);
			DrawBox(Name::k5Left, Name::k5Top, Name::k5Right, Name::k5Bottom, color[i], false);
			DrawBox(Name::k6Left, Name::k6Top, Name::k6Right, Name::k6Bottom, color[i], false);
			DrawBox(Name::k7Left, Name::k7Top, Name::k7Right, Name::k7Bottom, color[i], false);
			DrawBox(Name::k8Left, Name::k8Top, Name::k8Right, Name::k8Bottom, color[i], false);
			DrawBox(Name::k9Left, Name::k9Top, Name::k9Right, Name::k9Bottom, color[i], false);
			DrawBox(Name::k10Left, Name::k10Top, Name::k10Right, Name::k10Bottom, color[i], false);
		}


		Name->Draw();

#endif
		//裏画面を表画面を入れ替える
		ScreenFlip();

		// escキーを押したら終了する
		if (CheckHitKey(KEY_INPUT_ESCAPE))	break;

		// fpsを60に固定
		while (GetNowHiPerformanceCount() - time < 16667)
		{
		}
	}

	//メモリ開放
	Name->End();
	//delete Name;

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}


//チーム割り当て
void team()
{
	/*Team A*/
	//1

	if (array2[0] == 0)
	{
		DrawFormatString(Team::kANameLeft, 300, 0xffffff, "%s", Name0);
	}
	if (array2[0] == 1)
	{
		DrawFormatString(Team::kANameLeft, 300, 0xffffff, "%s", Name1);
	}
	if (array2[0] == 2)
	{
		DrawFormatString(Team::kANameLeft, 300, 0xffffff, "%s", Name2);
	}
	if (array2[0] == 3)
	{
		DrawFormatString(Team::kANameLeft, 300, 0xffffff, "%s", Name3);
	}
	if (array2[0] == 4)
	{
		DrawFormatString(Team::kANameLeft, 300, 0xffffff, "%s", Name4);
	}
	if (array2[0] == 5)
	{
		DrawFormatString(Team::kANameLeft, 300, 0xffffff, "%s", Name5);
	}
	if (array2[0] == 6)
	{
		DrawFormatString(Team::kANameLeft, 300, 0xffffff, "%s", Name6);
	}
	if (array2[0] == 7)
	{
		DrawFormatString(Team::kANameLeft, 300, 0xffffff, "%s", Name7);
	}
	if (array2[0] == 8)
	{
		DrawFormatString(Team::kANameLeft, 300, 0xffffff, "%s", Name8);
	}
	if (array2[0] == 9)
	{
		DrawFormatString(Team::kANameLeft, 300, 0xffffff, "%s", Name9);
	}

	//1

	if (array2[1] == 0)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name0);
	}
	if (array2[1] == 1)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name1);
	}
	if (array2[1] == 2)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name2);
	}
	if (array2[1] == 3)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name3);
	}
	if (array2[1] == 4)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name4);
	}
	if (array2[1] == 5)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name5);
	}
	if (array2[1] == 6)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name6);
	}
	if (array2[1] == 7)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name7);
	}
	if (array2[1] == 8)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name8);
	}
	if (array2[1] == 9)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name9);
	}

	//2

	if (array2[2] == 0)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name0);
	}
	if (array2[2] == 1)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name1);
	}
	if (array2[2] == 2)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name2);
	}
	if (array2[2] == 3)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name3);
	}
	if (array2[2] == 4)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name4);
	}
	if (array2[2] == 5)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name5);
	}
	if (array2[2] == 6)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name6);
	}
	if (array2[2] == 7)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name7);
	}
	if (array2[2] == 8)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name8);
	}
	if (array2[2] == 9)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name9);
	}

	//3

	if (array2[3] == 0)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name0);
	}
	if (array2[3] == 1)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name1);
	}
	if (array2[3] == 2)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name2);
	}
	if (array2[3] == 3)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name3);
	}
	if (array2[3] == 4)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name4);
	}
	if (array2[3] == 5)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name5);
	}
	if (array2[3] == 6)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name6);
	}
	if (array2[3] == 7)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name7);
	}
	if (array2[3] == 8)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name8);
	}
	if (array2[3] == 9)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name9);
	}

	//4

	if (array2[4] == 0)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name0);
	}
	if (array2[4] == 1)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name1);
	}
	if (array2[4] == 2)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name2);
	}
	if (array2[4] == 3)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name3);
	}
	if (array2[4] == 4)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name4);
	}
	if (array2[4] == 5)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name5);
	}
	if (array2[4] == 6)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name6);
	}
	if (array2[4] == 7)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name7);
	}
	if (array2[4] == 8)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name8);
	}
	if (array2[4] == 9)
	{
		DrawFormatString(Team::kANameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name9);
	}

	/*Team B*/
	//1

	if (array2[5] == 0)
	{
		DrawFormatString(Team::kBNameLeft, 300, 0xffffff, "%s", Name0);
	}
	if (array2[5] == 1)
	{
		DrawFormatString(Team::kBNameLeft, 300, 0xffffff, "%s", Name1);
	}
	if (array2[5] == 2)
	{
		DrawFormatString(Team::kBNameLeft, 300, 0xffffff, "%s", Name2);
	}
	if (array2[5] == 3)
	{
		DrawFormatString(Team::kBNameLeft, 300 , 0xffffff, "%s", Name3);
	}
	if (array2[5] == 4)
	{
		DrawFormatString(Team::kBNameLeft, 300, 0xffffff, "%s", Name4);
	}
	if (array2[5] == 5)
	{
		DrawFormatString(Team::kBNameLeft, 300, 0xffffff, "%s", Name5);
	}
	if (array2[5] == 6)
	{
		DrawFormatString(Team::kBNameLeft, 300, 0xffffff, "%s", Name6);
	}
	if (array2[5] == 7)
	{
		DrawFormatString(Team::kBNameLeft, 300, 0xffffff, "%s", Name7);
	}
	if (array2[5] == 8)
	{
		DrawFormatString(Team::kBNameLeft, 300, 0xffffff, "%s", Name8);
	}
	if (array2[5] == 9)
	{
		DrawFormatString(Team::kBNameLeft, 300, 0xffffff, "%s", Name9);
	}



	if (array2[6] == 0)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name0);
	}
	if (array2[6] == 1)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name1);
	}
	if (array2[6] == 2)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name2);
	}
	if (array2[6] == 3)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name3);
	}
	if (array2[6] == 4)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name4);
	}
	if (array2[6] == 5)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name5);
	}
	if (array2[6] == 6)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name6);
	}
	if (array2[6] == 7)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name7);
	}
	if (array2[6] == 8)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name8);
	}
	if (array2[6] == 9)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace, 0xffffff, "%s", Name9);
	}

	//2

	if (array2[7] == 0)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name0);
	}
	if (array2[7] == 1)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name1);
	}
	if (array2[7] == 2)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name2);
	}
	if (array2[7] == 3)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name3);
	}
	if (array2[7] == 4)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name4);
	}
	if (array2[7] == 5)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name5);
	}
	if (array2[7] == 6)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name6);
	}
	if (array2[7] == 7)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 2, 0xff00ff, "%s", Name7);
	}
	if (array2[7] == 8)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name8);
	}
	if (array2[7] == 9)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 2, 0xffffff, "%s", Name9);
	}

	//3

	if (array2[8] == 0)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name0);
	}
	if (array2[8] == 1)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name1);
	}
	if (array2[8] == 2)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name2);
	}
	if (array2[8] == 3)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name3);
	}
	if (array2[8] == 4)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name4);
	}
	if (array2[8] == 5)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name5);
	}
	if (array2[8] == 6)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name6);
	}
	if (array2[8] == 7)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name7);
	}
	if (array2[8] == 8)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name8);
	}
	if (array2[8] == 9)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 3, 0xffffff, "%s", Name9);
	}

	//4

	if (array2[9] == 0)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name0);
	}
	if (array2[9] == 1)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name1);
	}
	if (array2[9] == 2)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name2);
	}
	if (array2[9] == 3)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name3);
	}
	if (array2[9] == 4)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name4);
	}
	if (array2[9] == 5)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name5);
	}
	if (array2[9] == 6)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name6);
	}
	if (array2[9] == 7)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name7);
	}
	if (array2[9] == 8)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name8);
	}
	if (array2[9] == 9)
	{
		DrawFormatString(Team::kBNameLeft, 300 + String::kVerticalSpace * 4, 0xffffff, "%s", Name9);
	}
}
//重複確認
void same()
{
	one = true;

	for (int i = 0; i <= 9; i++)
	{
		if (array2[0] == array2[i + 1])
		{
			one = false;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		if (i == 1)
		{
			i = 2;
		}

		if (array2[1] == array2[i])
		{
			one = false;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		if (i == 2)
		{
			i = 3;
		}

		if (array2[2] == array2[i])
		{
			one = false;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		if (i == 3)
		{
			i = 4;
		}

		if (array2[3] == array2[i])
		{
			one = false;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		if (i == 4)
		{
			i = 5;
		}

		if (array2[4] == array2[i])
		{
			one = false;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		if (i == 5)
		{
			i = 6;
		}

		if (array2[5] == array2[i])
		{
			one = false;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		if (i == 6)
		{
			i = 7;
		}

		if (array2[6] == array2[i])
		{
			one = false;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		if (i == 7)
		{
			i = 8;
		}

		if (array2[7] == array2[i])
		{
			one = false;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		if (i == 8)
		{
			i = 9;
		}

		if (array2[8] == array2[i])
		{
			one = false;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		if (i == 9)
		{
			i = 10;
		}

		if (array2[9] == array2[i])
		{
			one = false;
		}
	}


}
