#include<iostream>
#include<string>
#include<deque>
#include<algorithm>

using namespace std;


struct Compare {
    bool operator()(string a, string b)
    {
        if (a.size() != b.size())
            return a.size() > b.size();
        else
            return a < b;
    }
};

int main() {
    deque<string> deque = { "apple", "cherry", "banana", "date", "elderberry" };
    sort(deque.begin(), deque.end(), Compare());
    for (auto i : deque)
        cout << (i) << " ";
}