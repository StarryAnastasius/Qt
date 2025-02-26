#ifndef BOMB_H
#define BOMB_H
#include <QPixmap>

class Bomb
{
public:
    Bomb();

    //更新信息（播放图片下标、播放间隔）
    void updateInfo();

public:
    //爆炸资源数组
    QVector<QPixmap> m_pixArr;

    //爆炸位置
    int m_X;
    int m_Y;

    //爆炸状态
    bool m_Free;

    //爆炸切换图片的时间间隔
    int m_Recorder;

    //爆炸时记载的图片下标
    int m_index;
};

#endif // BOMB_H
