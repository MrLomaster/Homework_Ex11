#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// Сделать для начала заполнения учеников(!) и создание предметов

class Object
{
    string Name;
    int Mark;
};

class Student
{
    string Fio;
    string Class;
public:
    void Fio_write(string a)
    {
        Fio=a;
    }
    void Class_write(string a)
    {
        Class=a;
    }
    string Fio_print()
    {
        return Fio;
    }
    string Class_write()
    {
        return Class;
    }

};



const string Data = "C:/qt_creator/Homework_Ex11/Base/";

int main()
{
    ofstream oFile; ifstream iFile; fstream File;
    vector<string> student;
    string str;
    int n, v;
    File.open(Data+"Student/kolvo" ".txt", ios::app);
    if (!iFile.is_open())
    {
        File.close();
        File.open(Data+"Student/kolvo" ".txt", ios::app);
        File << 1;
        File.close();
    }
    File.open(Data+"Student/kolvo" ".txt", ios::app);
    File >> v;
    File.close();

    cout << "1. Create new student   2. Create object(Dev.)";
    cout << '\n' << ">>> ";
    cin >> n;
    system("cls");
    // 1- Создать ученика.
    if (n == 1)
    {
        Student People;
        oFile.open(Data+"Student/kolvo" ".txt");
//        if(v > 5000)
//        {
//            v = 1;
//            oFile << 1;
//        }
//        else
//        {
//            v = v+1;
//            oFile << v+1;
//        }
        oFile.close();
        cout << '\n'<<  "Write name and surname";
        cout << '\n' << ">>> ";
        getline(cin >>ws, str);
        People.Fio_write(str);
        cout << '\n'<<  "Write class (Example: 8A, 5B)";
        cout << '\n' << ">>> ";
        getline(cin >>ws, str);
        People.Class_write(str);
        cout << "We make a record...";



        oFile.open(Data+"Student/student"+to_string(v+1)+".txt");
        oFile << People.Fio_print() << '\n';
        oFile << People.Class_write() << '\n';
        oFile.close();

        File.open(Data+"Student/kolvo" ".txt", ios::out);
        File << v+1;


    }
    // 2 - Создать предмет
    else if (n == 2)
    {

    }


    return 0;
}
