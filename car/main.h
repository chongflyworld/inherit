
#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <stdlib.h>
using namespace std;

class cat{
private:
    int m_capacity;       //�ؿ���
    string m_brand;       //Ʒ��
    string m_type;        //�ͺ�
    long m_distance;      //���������λ/km
    double m_v=20;           //�ٶ�
public:
    cat(int capacity, string brand, string type, long distance){
        m_capacity = capacity;
        m_brand = brand;
        m_type = type;
        m_distance = distance;
        cout << "������Ʒ�ƣ�" << m_brand << "\n"
             << "�������ͺţ�" << m_type  << "\n"
             << "�������ؿ�����" << m_capacity << "��\n"
             << "�������������" << m_distance << "km" << "\n" << endl;
    }

    pulse_on(){                              //����
        int i=10;
        while(i){
            cout << "|" << "\b" ;
            Sleep(200);
            cout << "\\" << "\b" ;
            Sleep(200);
            cout << "һ" << "\b\b" ;
            Sleep(200);
            cout << "/" << "\b" ;
            Sleep(200);
            i--;
        }
        cout << "�����������" << "\n" << endl;
        return 0;
    }

    go(){                                   //ǰ��
        double start,stop,durationTime;
        start = clock();
        int i=10;
        while(i){
            Sleep(500);
            i--;
        }
        stop = clock();
        durationTime = ((double)(stop-start))/CLK_TCK;
        m_distance = durationTime*m_v;       //ǰ��Ĭ����10km/h
        cout << "����ʱ�䣺" << durationTime << " s" << endl;
        return 0;
    }

    back(){                                //����
        double start,stop,durationTime;
        start = clock();
        int i=10;
        while(i){
            Sleep(500);
            i--;
        }
        stop = clock();
        durationTime = ((double)(stop-start))/CLK_TCK;
        m_distance = durationTime*m_v;       //����Ĭ����5km/h
        cout << "����ʱ�䣺" << durationTime << " s" << endl;
        return 0;
    }

    shiftUp(int shift){                              //�ҵ�
        switch(shift){
            case 0: m_v = 5;break;
            case 1: m_v = 20;break;
            case 2: m_v = 40;break;
            case 3: m_v = 60;break;
            default:break;
        }
        cout << "����ǰ���ٶ�Ϊ" << m_v << "km/h" << endl;
        return 0;
    }

    shiftDown(int shift){                            //�˵�
        switch(shift){
            case 0: m_v = 5;break;
            case 1: m_v = 20;break;
            case 2: m_v = 40;break;
            case 3: m_v = 60;break;
            default:break;
        }
        cout << "����ǰ���ٶ�Ϊ" << m_v << "km/h" << endl;
        return 0;
    }

};

#endif
