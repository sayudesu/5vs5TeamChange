#include <Dxlib.h>
#include "NameCollision.h"

NameCollision::NameCollision():
	m_name1Left  (),m_name1Top   (),
	m_name1Right (),m_name1Bottom(),
	m_balance1Left(), m_balance1Top(),
	m_balance1Right(), m_balance1Bottom(),
	m_mouseX(0), m_mouseY(0),
	m_mouseLeft(0), m_mouseTop(0),
	m_mouseRight(0),m_mouseBottom(0),
	m_colorChange(0)
{
	//èâä˙âª
	for (int i = 0; i <= 32; i++)
	{
		m_name1Left[i] = 0;
		m_name1Top[i] = 0;
		m_name1Right[i] = 0;
		m_name1Bottom[i] = 0;
	}
	m_balance1Left[32]={};
	m_balance1Top[32] = {};
	m_balance1Right[32] = {};
	m_balance1Bottom[32] = {};
}

NameCollision::~NameCollision()
{
}

void NameCollision::Init()
{
}

void NameCollision::End()
{
}

void NameCollision::Update()
{
	GetMousePoint(&m_mouseX, &m_mouseY);

	m_mouseLeft = m_mouseX - 1;
	m_mouseTop  = m_mouseY - 1;
	m_mouseRight = m_mouseLeft + 1;
	m_mouseBottom = m_mouseTop + 1;
	
}

void NameCollision::Draw()
{
	SetDrawBlendMode(DX_BLENDMODE_ALPHA, 50);
	for (int i = 0; i < 32; i++)
	{

		DrawBox(m_name1Left[i], m_name1Top[i], m_name1Right[i], m_name1Bottom[i], 0xffffff, true);

	}
	SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);

	DrawBox(m_mouseLeft, m_mouseTop, m_mouseRight, m_mouseBottom, 0xffffff, true);

}

int NameCollision::Box1Check()
{
	for (int i = 0; i <= 32; i++)
	{
		if ((m_name1Right[i] > m_mouseLeft) &&
			(m_name1Left[i] < m_mouseRight))
		{
			if ((m_name1Bottom[i] > m_mouseTop) &&
				(m_name1Top[i] < m_mouseBottom))
			{
				m_colorChange = i + 1;//êFÇïœçX

				if ((GetMouseInput() & MOUSE_INPUT_LEFT))
				{
					return i + 1;
				}
			}
		}
	}

	return 0;
}

int NameCollision::BalanceBoxCheck()
{
	if ((GetMouseInput() & MOUSE_INPUT_LEFT))
	{
		for (int i = 0; i <= 32; i++)
		{
			if ((m_balance1Right[i] > m_mouseLeft) &&
				(m_balance1Left[i] < m_mouseRight))
			{
				if ((m_balance1Bottom[i] > m_mouseTop) &&
					(m_balance1Top[i] < m_mouseBottom))
				{
						return i + 1;	
				}
			}
		}
	}

	return 0;
}

