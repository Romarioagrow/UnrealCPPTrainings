/*#include <iostream> // Импорт библиотеки ввода-вывода using namespace std; // позволяет нам писать оператор cout
// вместо std::cout
int main() {
cout << "Hello, world" << endl;
cout << "I am now a C++ programmer." << endl;
 return 0; // "return" to the operating sys
}*/

/*
 *
 * #include <iostream>
#include <string> // это необходимо для использования строковых переменных! using namespace std;
int main()
{
string name;
int goldPieces;
float hp;
name = "William"; // Это моё имя
goldPieces = 322; // начинаю с таким количеством золота
hp = 75.5f; // единицы здоровья выражены значением десятичной дроби cout << "Character " << name << " has "
<< hp << " hp and "
<< goldPieces << " gold.";
}*/

#include <iostream>
#include <string>

using namespace std;

void calculateTasks() {
    int x = 4;
    x += 4;
    cout << "x: " << x << endl;

    int answer = 277 + 5 * 4 / 2 + 20;
    cout << "Answer: " << answer << endl;
}

void variablesTasks() {
    string name;
    float hpMax;
    int gold;

    name = "Kels";
    hpMax = 174.5f;
    gold = 228;

    cout << "Keks Character Name: " << name << " Has HP: " << hpMax << " Gold: " << gold << endl;

    int hp = 500;
    cout << hp << endl;

    hp = 1200;
    cout << hp << endl;

    int x = 38.87f;
    cout << x << endl;
}

struct MyShip {
///public: myShip() = default;

    long serialID = 0001L;
    string name = "Xenta";
    double hull = 100.0;
    int maxSpeed = 250;
    float jumpRange = 15.3;

public:
    void showShipInfo() const {
        cout << "Ship Name: " << name
             << "\nHull Integrity: " << hull
             << "\nJump Range: " << jumpRange
             << endl;
    }
};

struct Vector {
    float x, y, z; // положения x, y и z все типа float }; // КОНЕЦ ОПРЕДЕЛЕНИЯ ОБЪЕКТА Vector

    void setPosition(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    void showVector() {
        cout << "A 3-space vector at " << x << ", " << y << ", " << z << endl;
    }
};

struct Player {
    string name;
    int hp;
    Vector position;

    void showPosition() {
        /// position.showVector();
        cout << "Current Player Position: " << position.x << ", " << position.y << ", " << position.z << endl;
    }

    void showPlayerInfo() {
        cout << "Player Name: " << name
        << "\nPlayer HP: " << hp << endl;
    }
};

void typesTasks() {

    MyShip ship{};
    ship.showShipInfo();

    Vector vector{}; // Создаём экземпляр Vector названный vector
    vector.x = 20, vector.y = 30, vector.z = 40; // присваиваем значения
    cout << "A 3-space vector at " << vector.x << ", " << vector.y << ", " << vector.z << endl;
    vector.setPosition(2.445, 54.643, -6.466);
    vector.showVector();

    Player myPlayer{};
    myPlayer.position.setPosition(1.5, 2.5, 3.5); /// Вложенность норм?
    myPlayer.showPosition();

    myPlayer.name = "Koksus";
    myPlayer.hp = 100.f;
    myPlayer.position.x = myPlayer.position.y = myPlayer.position.z = 0;
    myPlayer.showPosition();
    myPlayer.showPlayerInfo();

    Player* ptrMe;
    ptrMe = &myPlayer;
    ptrMe->hp -= 33;
    ptrMe->name = "John";
    myPlayer.showPlayerInfo();
    cout << &myPlayer << endl;
    cout << &ptrMe << endl;

    int *px; px = reinterpret_cast<int *>(&myPlayer);
    cout << px << endl;

    int int1 = 228;
    int *intX = &int1;
    cout << "*intX: " << intX << endl;
    cout << "*intX: " << *intX << endl;

    int *xxxx = nullptr;
    cout << xxxx << endl;

    int fuelAmount;
    cout << "Input fuel amount:" << endl;
    cin >> fuelAmount;
    cout << "Fueling " << fuelAmount << " Liters!" << endl;
    printf("Fueling %d liters...\n", fuelAmount);

    string someString = "C++ with Unreal Engine Trainings";
    printf("Here is my text: %s\n", someString.c_str());
}

int main() {

    typesTasks();

    calculateTasks();

    variablesTasks();

    std::cout << "Hello, Keks!" << std::endl;
    cout << "****************" << endl;
    cout << "*............*.*" << endl;
    cout << "*.*.*******..*.*" << endl;
    cout << "*.*.*..........*" << endl;
    cout << "*.*.*.**********" << endl;
    cout << "***.***........*" << endl;

    return 0;
}
