#pragma once
#include <string>
using namespace std;
typedef struct character {
  int hp;
  int mp;
  int atk;
  int def;
  string ettype;
  string enemykind;
  void init(string enemykind,string ettype = normal,int hp = 5000,int mp = 1250 ,int atk = 500,int def=250)
  {// character 슬라임 = {슬라임,normal,hp,mp,atk,def};
    //character 슬라임_보스 = {슬라임,boss,hp,mp,atk,def};
    //character 슬라임_엘리트 = {슬라임,elite,hp,mp,atk,def};
    this->hp = hp;
    this-> mp = mp;
    this-> atk = atk;
    this-> def = def;
    this-> ettype = ettype;
    this-> enemykind = enemykind;
  }
};