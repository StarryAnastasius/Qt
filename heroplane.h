#ifndef HEROPLANE_H
#define HEROPLANE_H
#include <QPixmap>
#include "bullet.h"
#include "config.h"

class HeroPlane
{
public:
    HeroPlane();

    void shoot();

    void setPosition(int x, int y);

public:
    //飞机对象
    QPixmap m_Plane;

    //飞机坐标
    int m_X;
    int m_Y;

    //飞机的矩形边框
    QRect m_Rect;

    //弹匣
    Bullet m_bullets[BULLET_NUM];

    //发射间隔记录
    int m_recorder;
};

#endif // HEROPLANE_H
