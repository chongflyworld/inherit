
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
    int m_capacity;       //载客量
    string m_brand;       //品牌
    string m_type;        //型号
    long m_distance;      //里程数，单位/km
    double m_v=20;           //速度
public:
    cat(int capacity, string brand, string type, long distance){
        m_capacity = capacity;
        m_brand = brand;
        m_type = type;
        m_distance = distance;
        cout << "汽车的品牌：" << m_brand << "\n"
             << "汽车的型号：" << m_type  << "\n"
             << "汽车的载客量：" << m_capacity << "人\n"
             << "汽车的里程数：" << m_distance << "km" << "\n" << endl;
    }

    pulse_on(){                              //启动
        int i=10;
        while(i){
            cout << "|" << "\b" ;
            Sleep(200);
            cout << "\\" << "\b" ;
            Sleep(200);
            cout << "一" << "\b\b" ;
            Sleep(200);
            cout << "/" << "\b" ;
            Sleep(200);
            i--;
        }
        cout << "汽车启动完毕" << "\n" << endl;
        return 0;
    }

    go(){                                   //前进
        double start,stop,durationTime;
        start = clock();
        int i=10;
        while(i){
            Sleep(500);
            i--;
        }
        stop = clock();
        durationTime = ((double)(stop-start))/CLK_TCK;
        m_distance = durationTime*m_v;       //前进默认是10km/h
        cout << "开车时间：" << durationTime << " s" << endl;
        return 0;
    }

    back(){                                //后退
        double start,stop,durationTime;
        start = clock();
        int i=10;
        while(i){
            Sleep(500);
            i--;
        }
        stop = clock();
        durationTime = ((double)(stop-start))/CLK_TCK;
        m_distance = durationTime*m_v;       //后退默认是5km/h
        cout << "开车时间：" << durationTime << " s" << endl;
        return 0;
    }

    shiftUp(int shift){                              //挂挡
        switch(shift){
            case 0: m_v = 5;break;
            case 1: m_v = 20;break;
            case 2: m_v = 40;break;
            case 3: m_v = 60;break;
            default:break;
        }
        cout << "您当前的速度为" << m_v << "km/h" << endl;
        return 0;
    }

    shiftDown(int shift){                            //退挡
        switch(shift){
            case 0: m_v = 5;break;
            case 1: m_v = 20;break;
            case 2: m_v = 40;break;
            case 3: m_v = 60;break;
            default:break;
        }
        cout << "您当前的速度为" << m_v << "km/h" << endl;
        return 0;
    }

};

#endif
