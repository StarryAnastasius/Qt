#include "bullet.h"
#include "config.h"

Bullet::Bullet() {

    m_bullet.load(BULLET_PATH);

    m_X = GAME_WIDTH*0.5-m_bullet.width()*0.5;
    m_Y = GAME_HEIGHT;

    m_speed = BULLET_SPEED;

    m_free = true;

    m_Rect.setHeight(m_bullet.height());
    m_Rect.setWidth(m_bullet.width());
    m_Rect.moveTo(m_X, m_Y);

}

void Bullet::updatePosition()
{
    if(m_free){
        return;
    }
    m_Y -= m_speed;
    m_Rect.moveTo(m_X, m_Y);

    if(m_Y <= -m_Rect.height()){
        m_free = true;
    }
}
