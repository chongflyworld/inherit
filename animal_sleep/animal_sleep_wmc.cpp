#include <iostream>
#include <animal_sleep.h>

using namespace std;



int main()
{
    Mammal whale(10, 35000, 30, "male", "swim", "鲸鱼");
    whale.show();
    Mammal * w = &whale;
    w->sleepMode("垂直在水中睡觉");

    cout << "-------------分割线----------------------" << endl;

    Mammal people(1.8, 100, 28, "male", "嗓门大——据水断桥", "张飞");
    people.show();
    Mammal * p = &people;
    p->sleepMode("睁着眼睛睡觉");
    return 0;
}

