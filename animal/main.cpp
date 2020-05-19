#include <iostream>

using namespace std;

//先写一个动物类
class Animal{
protected:
    float height;       //身高/米
    float weight;       //体重/千克
    int age;            //年龄
    string sex;         //性别（male/female）

public:
    Animal(float height, float weight, int age, string sex):height(height),weight(weight),age(age),sex(sex){
        cout << "动物带参构造函数" << endl;
    }
    ~Animal(){
        cout << "动物析构函数" << endl;
    }

    void setHeight(float height){
        this->height = height;
        cout << "它的身高是：" << height << endl;
    }
    void setWeight(float weight){
        this->weight = weight;
        cout << "它的体重是：" << weight << endl;
    }
    void setAge(int age){
        this->age = age;
        cout << "它的年龄是：" << age << endl;
    }
    void setSex(string sex){
        this->sex = sex;
        cout << "它的性别是：" << sex << endl;
    }

    virtual void show(){
        cout << "它的身高是：" << height << endl;
        cout << "它的体重是：" << weight << endl;
        cout << "它的年龄是：" << age << endl;
        cout << "它的性别是：" << sex << endl;
    }

};

//哺乳动物类，继承了动物类的成员属性和方法
class Mammal: public Animal{
public:
    string name;        //名字
    string skill;       //技能

public:
    void myType(){
        cout << "我是哺乳动物" << endl;
    }
    Mammal(float height, float weight, int age, string sex, string skill, string name):Animal(height, weight, age, sex){
        this->skill = skill;
        this->name = name;
        cout << "哺乳动物带参构造函数" << endl;
    }
    ~Mammal(){
        cout << "哺乳动物析构函数" << endl;
    }

    void setSkill(string skill){
        this->skill = skill;
        cout << "它的技能：" << skill << endl;
    }

    void setName(string name){
        this->name = name;
        cout <<  "它的名字：" << name << endl;
    }

    void show(){
        cout << "它的名字：" << name << endl;
        cout << "它的身高是：" << height << endl;
        cout << "它的体重是：" << weight << endl;
        cout << "它的年龄是：" << age << endl;
        cout << "它的性别是：" << sex << endl;
        cout << "它的技能：" << skill << endl;
    }
};

int main()
{
    Mammal whale(10, 35000, 30, "male", "swim", "bigfish");
    whale.show();
    return 0;
}
