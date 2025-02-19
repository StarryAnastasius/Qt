#include "heroplane.h"
#include "config.h"

HeroPlane::HeroPlane() {

    m_Plane.load(HERO_PATH);

    m_recorder=0;

    //初始化飞机坐标
    m_X=0.5*(GAME_WIDTH-m_Plane.width());
    m_Y=GAME_HEIGHT-m_Plane.height();

    m_Rect.setHeight(m_Plane.height());
    m_Rect.setWidth(m_Plane.width());
    m_Rect.moveTo(m_X,m_Y);
}

void HeroPlane::shoot()
{

    m_recorder++;

    if(m_recorder<BULLET_INTERVAL){
        return;
    }

    m_recorder=0;

    for(int i=0;i<BULLET_NUM;i++){
        if(m_bullets[i].m_free){
            m_bullets[i].m_free=false;
            m_bullets[i].m_X=m_X+m_Rect.width()*0.5-20;
            m_bullets[i].m_Y=m_Y;
        }
    }
}

void HeroPlane::setPosition(int x, int y)
{
    m_X=x;
    m_Y=y;
}
