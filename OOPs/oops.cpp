#include <iostream>
#include <cstring>
using namespace std;

class Hero
{

    int health;
    char level;

public:
    char *name;
    static int timeToComplete;
    Hero()
    {
        cout << "Simple constructor" << endl;
        name = new char[100];
    }

    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    void printing()
    {
        cout << endl;
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
        cout << "Name: " << this->name << endl;
        cout << endl;
    }

    int getHealth() { return health; }
    char getLevel() { return level; }

    void setHealth(int h) { health = h; }
    void setLevel(char l) { level = l; }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    ~Hero()
    {
        cout << "hello from destructor" << endl;
    }

    static int random()
    {
        return timeToComplete;
    }
};

int Hero::timeToComplete = 5;

// Encapsulation
class encap
{
private:
    int age;
    string name;
};

// Inheritance
class Human
{
public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Child Class - Male - sleeping" << endl;
    }
};

int main()
{
    // Static allocation and getter/setter
    // cout<<"Static"<<endl;
    // Hero rohan;
    // cout<<"Static over"<<endl;

    // cout<<rohan.getHealth()<<endl;
    // cout<<rohan.getLevel()<<endl;

    // rohan.setHealth(70);
    // rohan.setLevel('B');

    // cout<<rohan.getHealth()<<endl;
    // cout<<rohan.getLevel()<<endl;

    // rohan.printing();

    // Dynamic allocation
    // cout<<"Dynamic"<<endl;
    // Hero *b = new Hero;
    // cout<<"Dynamic over"<<endl;
    // b->setHealth(55);
    // b->setLevel('C');

    // // Method 1 to access dynamically allocated object
    //     cout<<"level is "<< (*b).getLevel()<<endl;
    //     cout<<"health is "<< (*b).getHealth()<<endl;
    // // Method 2 to access dynamically allocated object
    //     cout<<"level is "<< b->getLevel()<<endl;
    //     cout<<"health is "<< b->getHealth()<<endl;

    // Hero xyz(10);
    // cout<<"Address of xyz : "<<&xyz<<endl;

    // Hero S(99,'C');
    // S.printing();
    // // Copy Constructor
    // Hero Q(S);
    // Q.printing();

    // Hero hero1;
    // char name[6]="rohan";
    // hero1.setHealth(20);
    // hero1.setLevel('S');
    // hero1.setName(name);

    // hero1.printing();

    // Hero hero2=hero1;
    // hero2.printing();

    // hero1.name[0]='M';
    // hero1.setHealth(25);
    // hero1.printing();
    // hero2.printing();

    // Hero a;
    // Hero *b=new Hero();
    // delete b;

    // cout<<Hero::timeToComplete<<endl;
    // cout<<"Static function: "<<Hero::random()<<endl;

    Male xyz;
    cout << xyz.age << endl;
    xyz.sleep();
    xyz.setWeight(50);
    cout<< xyz.weight<<endl;
    

    return 0;
}