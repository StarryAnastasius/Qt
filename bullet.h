#ifndef BULLET_H
#define BULLET_H

#include <QPixmap>


class Bullet
{
public:
    Bullet();

    void updatePosition();

public:

    QPixmap m_bullet;

    int m_X;
    int m_Y;

    int m_speed;

    bool m_free;

    QRect m_Rect;

};


#endif // BULLET_H
