#ifndef CONFIG_H
#define CONFIG_H

/**********游戏配置数据**********/
#define GAME_WIDTH 473     //宽度
#define GAME_HEIGHT 710    //高度
#define GAME_TITLE "飞机大战 v1.0"    //标题
//#define GAME_RES_PATH ".\plane.rcc"
#define GAME_ICON ":/picture/1066fa8f42de49a6971e5591e97581ef.png"
#define GAME_RATE 10

/**********游戏配置数据**********/
#define MAP_PATH ":/picture/c053d97923674591b3ec1f3d75098696.png"
#define MAP_SCROLL_SPEED 2

/**********飞机配置数据**********/
#define HERO_PATH ":/picture/0eabb28d9de94a4f8483970e84f1989e.png"

/**********子弹配置数据**********/
#define BULLET_PATH ":/picture/aa2650641af44c658c90c16f171669bb.png"
#define BULLET_SPEED 10
#define BULLET_NUM 30  //弹匣中子弹总数
#define BULLET_INTERVAL 10  //发射子弹时间间隔

/**********敌机配置数据**********/
#define ENEMY_PATH ":/picture/a90ffbffa2dd49269e932453f3dd9fd9.png"
#define ENEMY_SPEED 5
#define ENEMY_NUM 20
#define ENEMY_INTERVAL 30

/**********敌爆炸配置数据**********/
#define BOMB_PATH ":/picture/Snipaste_2025-02-06_%1.png"
#define BOMB_NUM 20
#define BOMB_MAX 8
#define BOMB_INTERVAL 100

#endif // CONFIG_H
