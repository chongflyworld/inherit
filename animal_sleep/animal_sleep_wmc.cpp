#include <iostream>
#include <animal_sleep.h>

using namespace std;



int main()
{
    Mammal whale(10, 35000, 30, "male", "swim", "����");
    whale.show();
    Mammal * w = &whale;
    w->sleepMode("��ֱ��ˮ��˯��");

    cout << "-------------�ָ���----------------------" << endl;

    Mammal people(1.8, 100, 28, "male", "ɤ�Ŵ󡪡���ˮ����", "�ŷ�");
    people.show();
    Mammal * p = &people;
    p->sleepMode("�����۾�˯��");
    return 0;
}

