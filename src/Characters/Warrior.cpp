#include "Warrior.h"
#include "SDL.h"
#include "../Graphics/TextureManager.h"

Warrior::Warrior(Properties* props) : Character(props)
{
    m_Row = 0;
    m_FrameCount = 4;
    m_AnimSpeed = 80;
}

void Warrior::Draw()
{
    TextureManager::GetInstance()->DrawFrame(m_TextureID, m_Transform->X, m_Transform->Y, m_Width, m_Height, m_Row, m_Frame);
    //TextureManager::GetInstance()->Draw(m_TextureID, m_Transform->X, m_Transform->Y, m_Width, m_Height);

}


void Warrior::Clean()
{
    TextureManager::GetInstance()->Clean();
}

void Warrior::Update(float dt)
{
    m_Frame = (SDL_GetTicks()/m_AnimSpeed) % m_FrameCount;
}
