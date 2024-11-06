/*ДЗ:
Зробити батьківський клас "Людина"
Він має такі характеристики:
Прізвище
Ім'я
По-батькові
Вік
Він має таку поведінку:
Їсти
Спати
Ходити

Ви маєте зробити дочірній клас
Студент
У студента є така характеристика:
Назва групи
У студента є така поведінка
Ходити на пари

Ви маєте зробити дочірніій класс 
Працівник
У працівника є так характеристика:
Місце роботи
У працівника є така поведінка:
Ходити на роботу*/

#include <iostream>

using namespace std;

class Human {
protected:
    string name;
    string surname;
    string fathername;
    int age;
    bool canEat;
    bool canSleep;
    bool canWalk;
public:
    Human();

    void writeAllCharasteristics();
};

Human::Human() {
    name = "Vladislav";
    surname = "Buryak";
    fathername = "Konstantinovich";
    age = 15;
    canEat = true;
    canSleep = true;
    canWalk = true;
}

void Human::writeAllCharasteristics() {
    cout << "The name of human is :" << name << endl;
    cout << "The surname of human is :" << surname << endl;
    cout << "The fathername of human is :" << fathername << endl;
    cout << "The age of human is : " << age << " y.o." << endl;
    if (canEat == true) {
        cout << "Ur human can eat" << endl;
    }
    else {
        cout << "Ur human cant eat";
    }
    if (canEat == true) {
        cout << "Ur human can sleep" << endl;
    }
    else {
        cout << "Ur human cant sleep";
    }
    if (canWalk == true) {
        cout << "Ur human can walk" << endl;
    }
    else {
        cout << "Ur human can walk";
    }
};

class Student : protected Human {
    string nameGroup;
    bool goToStudy;
public: 
    Student();

    void writeAllStudentCharasteristics();
};

Student::Student() {
    nameGroup = "P38";
    goToStudy = true;
}

void Student::writeAllStudentCharasteristics() {
    Human obj;
    obj.writeAllCharasteristics();
    cout << "And student also have a name of group and some additionallies : " << endl;
    cout << "The name of group there student go to study is : " << nameGroup << endl;
    if (goToStudy == true) {
        cout << "Ur student go on lessons" << endl;
    }
    else {
        cout << "Ur hstudent doesnt go on lessons" << endl;
    }
}

class Worker : protected Human {
    string placeOfJob;
    bool goToJob;
public:
    Worker();

    void writeAllWorkerCharasteristics();
};

Worker::Worker() {
    placeOfJob = "Office";
    goToJob = true;
}

void Worker::writeAllWorkerCharasteristics() {
    Human obj;
    obj.writeAllCharasteristics();
    cout << "And worker also have a place of job and some additionallies : " << endl;
    cout << "The place of job where ur worker works is : " << placeOfJob << endl;
    if (goToJob == true) {
        cout << "Ur student go on job" << endl;
    }
    else {
        cout << "Ur hstudent doesnt go on job";
    }
}



int main()
{
    Human obj;
    obj.writeAllCharasteristics();

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    Student obj2;
    obj2.writeAllStudentCharasteristics();

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    Worker obj3;
    obj3.writeAllWorkerCharasteristics();
}