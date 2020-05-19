#include <iostream>

using namespace std;

//��дһ��������
class Animal{
protected:
    float height;       //���/��
    float weight;       //����/ǧ��
    int age;            //����
    string sex;         //�Ա�male/female��

public:
    Animal(float height, float weight, int age, string sex):height(height),weight(weight),age(age),sex(sex){
        cout << "������ι��캯��" << endl;
    }
    ~Animal(){
        cout << "������������" << endl;
    }

    void setHeight(float height){
        this->height = height;
        cout << "��������ǣ�" << height << endl;
    }
    void setWeight(float weight){
        this->weight = weight;
        cout << "���������ǣ�" << weight << endl;
    }
    void setAge(int age){
        this->age = age;
        cout << "���������ǣ�" << age << endl;
    }
    void setSex(string sex){
        this->sex = sex;
        cout << "�����Ա��ǣ�" << sex << endl;
    }

    virtual void show(){
        cout << "��������ǣ�" << height << endl;
        cout << "���������ǣ�" << weight << endl;
        cout << "���������ǣ�" << age << endl;
        cout << "�����Ա��ǣ�" << sex << endl;
    }

};

//���鶯���࣬�̳��˶�����ĳ�Ա���Ժͷ���
class Mammal: public Animal{
public:
    string name;        //����
    string skill;       //����

public:
    void myType(){
        cout << "���ǲ��鶯��" << endl;
    }
    Mammal(float height, float weight, int age, string sex, string skill, string name):Animal(height, weight, age, sex){
        this->skill = skill;
        this->name = name;
        cout << "���鶯����ι��캯��" << endl;
    }
    ~Mammal(){
        cout << "���鶯����������" << endl;
    }

    void setSkill(string skill){
        this->skill = skill;
        cout << "���ļ��ܣ�" << skill << endl;
    }

    void setName(string name){
        this->name = name;
        cout <<  "�������֣�" << name << endl;
    }

    void show(){
        cout << "�������֣�" << name << endl;
        cout << "��������ǣ�" << height << endl;
        cout << "���������ǣ�" << weight << endl;
        cout << "���������ǣ�" << age << endl;
        cout << "�����Ա��ǣ�" << sex << endl;
        cout << "���ļ��ܣ�" << skill << endl;
    }
};

int main()
{
    Mammal whale(10, 35000, 30, "male", "swim", "bigfish");
    whale.show();
    return 0;
}
