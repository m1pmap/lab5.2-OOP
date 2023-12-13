//Дан дек D, элементами которого являются английские слова.
//Отсортировать его элементы по убыванию их длин, а элементы 
//одинаковой длины — в алфавитном порядке.Использовать
//единственный вызов алгоритма sort с параметром — функциональным
//объектом, включающим как сравнение строк, так и сравнение их длин.

#include<iostream>
#include<string>
#include<deque>
#include<algorithm>

using namespace std;


struct Compare {
    bool operator()(string firstStr, string secondStr)
    {
        if (firstStr.size() != secondStr.size())
            return firstStr.size() > secondStr.size();
        else
            return firstStr < secondStr;
    }
};

int main() {
    deque<string> deque = { "apple", "cherry", "banana", "date", "elderberry" };
    cout << "deque: ";
    for (auto i : deque)
        cout << (i) << " ";

    cout << "\nsort: ";
    sort(deque.begin(), deque.end(), Compare());
    for (auto i : deque)
        cout << (i) << " ";
}