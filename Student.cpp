//Дарья Фазлеева ИВТ01/23б
//Создать класс Student, предусматривающий возможность хранения
//информации об оценках в объектах типа Student. Предусмотреть методы для добавления оценок и их просмотра

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
    string name;
    vector<int> marks;

public:
    //Сохраняем имя, список оценок создаётся пустым автоматически
    Student(const string& n) : name(n) {}

    //Добавление оценки с проверкой допустимого диапазона 1–5
    void add_grade(int g) {
        if (g < 1 || g > 5) {
            cout << "Некорректная оценка: " << g << "\n";
            return;
        }
        marks.push_back(g);
    }

    //Просмотр всех оценок
    void show() const {
        cout << name << ": ";

        if (marks.empty()) {
            cout << "нет оценок\n";
            return;
        }

        for (int g : marks) {
            cout << g << " ";
        }
        cout << "\n";
    }
    size_t count() const {
        return marks.size();
    }
};

int main() {
    Student s("Игорь");

    s.add_grade(5);
    s.add_grade(4);
    s.add_grade(3);

    s.show();

    cout << "Всего оценок: " << s.count() << "\n";

    return 0;
}