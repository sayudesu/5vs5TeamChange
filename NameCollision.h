#pragma once

//名前変更可能判定
class NameCollision
{
public:

	NameCollision();//コンストラクタ
	virtual ~NameCollision();//デストラクタ

	void Init();//初期化値
	void End();//メモリ開放

	void Update();//更新処理
	void Draw();//描画

public:
#if true
	//名前の枠を確保
	void GetName1Left  (int left)   { m_name1Left[0] = left;   }
	void GetName1Top   (int top)    { m_name1Top[0] = top;    }
	void GetName1Right (int Right)  { m_name1Right[0] = Right;  }
	void GetName1Bottom(int bottom) { m_name1Bottom[0] = bottom; }

	void GetName2Left(int left) { m_name1Left[1] = left; }
	void GetName2Top(int top) { m_name1Top[1] = top; }
	void GetName2Right(int Right) { m_name1Right[1] = Right; }
	void GetName2Bottom(int bottom) { m_name1Bottom[1] = bottom; }

	void GetName3Left(int left) { m_name1Left[2] = left; }
	void GetName3Top(int top) { m_name1Top[2] = top; }
	void GetName3Right(int Right) { m_name1Right[2] = Right; }
	void GetName3Bottom(int bottom) { m_name1Bottom[2] = bottom; }

	void GetName4Left(int left) { m_name1Left[3] = left; }
	void GetName4Top(int top) { m_name1Top[3] = top; }
	void GetName4Right(int Right) { m_name1Right[3] = Right; }
	void GetName4Bottom(int bottom) { m_name1Bottom[3] = bottom; }

	void GetName5Left(int left) { m_name1Left[4] = left; }
	void GetName5Top(int top) { m_name1Top[4] = top; }
	void GetName5Right(int Right) { m_name1Right[4] = Right; }
	void GetName5Bottom(int bottom) { m_name1Bottom[4] = bottom; }

	void GetName6Left(int left) { m_name1Left[5] = left; }
	void GetName6Top(int top) { m_name1Top[5] = top; }
	void GetName6Right(int Right) { m_name1Right[5] = Right; }
	void GetName6Bottom(int bottom) { m_name1Bottom[5] = bottom; }

	void GetName7Left(int left) { m_name1Left[6] = left; }
	void GetName7Top(int top) { m_name1Top[6] = top; }
	void GetName7Right(int Right) { m_name1Right[6] = Right; }
	void GetName7Bottom(int bottom) { m_name1Bottom[6] = bottom; }

	void GetName8Left(int left) { m_name1Left[7] = left; }
	void GetName8Top(int top) { m_name1Top[7] = top; }
	void GetName8Right(int Right) { m_name1Right[7] = Right; }
	void GetName8Bottom(int bottom) { m_name1Bottom[7] = bottom; }

	void GetName9Left(int left) { m_name1Left[8] = left; }
	void GetName9Top(int top) { m_name1Top[8] = top; }
	void GetName9Right(int Right) { m_name1Right[8] = Right; }
	void GetName9Bottom(int bottom) { m_name1Bottom[8] = bottom; }

	void GetName10Left(int left) { m_name1Left[9] = left; }
	void GetName10Top(int top) { m_name1Top[9] = top; }
	void GetName10Right(int Right) { m_name1Right[9] = Right; }
	void GetName10Bottom(int bottom) { m_name1Bottom[9] = bottom; }

#endif
#if true	
	void GetBalance1Left(int left) { m_balance1Left[0] = left; }
	void GetBalance1Top(int top) { m_balance1Top[0] = top; }
	void GetBalance1Right(int Right) { m_balance1Right[0] = Right; }
	void GetBalance1Bottom(int bottom) { m_balance1Bottom[0] = bottom; }

	void GetBalance2Left(int left) { m_balance1Left[1] = left; }
	void GetBalance2Top(int top) { m_balance1Top[1] = top; }
	void GetBalance2Right(int Right) { m_balance1Right[1] = Right; }
	void GetBalance2Bottom(int bottom) { m_balance1Bottom[1] = bottom; }

	void GetBalance3Left(int left) { m_balance1Left[2] = left; }
	void GetBalance3Top(int top) { m_balance1Top[2] = top; }
	void GetBalance3Right(int Right) { m_balance1Right[2] = Right; }
	void GetBalance3Bottom(int bottom) { m_balance1Bottom[2] = bottom; }

	void GetBalance4Left(int left) { m_balance1Left[3] = left; }
	void GetBalance4Top(int top) { m_balance1Top[3] = top; }
	void GetBalance4Right(int Right) { m_balance1Right[3] = Right; }
	void GetBalance4Bottom(int bottom) { m_balance1Bottom[3] = bottom; }

	void GetBalance5Left(int left) { m_balance1Left[4] = left; }
	void GetBalance5Top(int top) { m_balance1Top[4] = top; }
	void GetBalance5Right(int Right) { m_balance1Right[4] = Right; }
	void GetBalance5Bottom(int bottom) { m_balance1Bottom[4] = bottom; }

	void GetBalance6Left(int left) { m_balance1Left[5] = left; }
	void GetBalance6Top(int top) { m_balance1Top[5] = top; }
	void GetBalance6Right(int Right) { m_balance1Right[5] = Right; }
	void GetBalance6Bottom(int bottom) { m_balance1Bottom[5] = bottom; }

	void GetBalance7Left(int left) { m_balance1Left[6] = left; }
	void GetBalance7Top(int top) { m_balance1Top[6] = top; }
	void GetBalance7Right(int Right) { m_balance1Right[6] = Right; }
	void GetBalance7Bottom(int bottom) { m_balance1Bottom[6] = bottom; }

	void GetBalance8Left(int left) { m_balance1Left[7] = left; }
	void GetBalance8Top(int top) { m_balance1Top[7] = top; }
	void GetBalance8Right(int Right) { m_balance1Right[7] = Right; }
	void GetBalance8Bottom(int bottom) { m_balance1Bottom[7] = bottom; }

	void GetBalance9Left(int left) { m_balance1Left[8] = left; }
	void GetBalance9Top(int top) { m_balance1Top[8] = top; }
	void GetBalance9Right(int Right) { m_balance1Right[8] = Right; }
	void GetBalance9Bottom(int bottom) { m_balance1Bottom[8] = bottom; }

	void GetBalance10Left(int left) { m_balance1Left[9] = left; }
	void GetBalance10Top(int top) { m_balance1Top[9] = top; }
	void GetBalance10Right(int Right) { m_balance1Right[9] = Right; }
	void GetBalance10Bottom(int bottom) { m_balance1Bottom[9] = bottom; }
#endif
	//判定を渡す
	int SetBoxCheck(){return Box1Check();}
	int SetBalanceBoxCheck() { return BalanceBoxCheck(); }
	//色を変更用関数
	int SetBoxColor() { return m_colorChange; }

private:
	int Box1Check();//名前入力用
	int BalanceBoxCheck();//バランス調整用
private:
	//名前変更
	int m_name1Left[32];
	int m_name1Top[32];
	int m_name1Right[32];
	int m_name1Bottom[32];
	//バランス調整
	int m_balance1Left[32];
	int m_balance1Top[32];
	int m_balance1Right[32];
	int m_balance1Bottom[32];
	//マウス座標
	int m_mouseX, m_mouseY;
	int m_mouseLeft,m_mouseTop;
	int m_mouseRight, m_mouseBottom;

	int m_checkHit[10];

	//触れているネームボックスの色を変更
	int m_colorChange;


};

