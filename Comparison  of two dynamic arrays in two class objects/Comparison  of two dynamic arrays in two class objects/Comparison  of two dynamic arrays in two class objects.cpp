// Comparison  of two dynamic arrays in two class objects.cpp 
#include <iostream>
#include <tuple>
using namespace std;

class Test1
{
private:
    int* data;
    int size;
public:
    Test1(int size)
    {
        this->size = size;
        this->data = new int[size];

        for (int i = 0; i < size; i++)
        {
            data[i] = i;
        }
    };

    Test1(const Test1& object)
    {
        this->data = new int[object.size];
        this->size = object.size;

        for (int i = 0; i < object.size; i++)
        {
            this->data[i] = object.data[i];
        }
    }

    void fillingFields()
    {
        for (int i = 0; i < size; i++)
        {
            cin >> data[i];
        }
    }

    void overviewData()
    {
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << "\t";
        }
    }

    string operator == (const Test1& object)
    {
        for (int i = 0; i < size; i++)
        {
            if (this->data[i] == object.data[i])
            {

            }
            else
            {
                return "Arrays are not equal";
            }
        }

    }

    ~Test1()
    {
        delete[]data;
    };
};

void Foo(Test1 value)
{
    cout << "Foo1" << endl;

}

Test1 Foo2()
{
    cout << "������� ������ ������ �������" << endl;
    int number;
    cin >> number;
    Test1 object1(number);
    return object1;
}

int main()
{
    setlocale(LC_ALL, "rus");

    Test1 a(Foo2());
    Test1 b(Foo2());
    string result = a == b;
    cout << result << endl;
}
