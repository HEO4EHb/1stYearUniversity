
//Вариант 10.
//Дана слово длины N.Проверьте, является ли оно палиндромом.

#include <iostream>
#include <string>
#include <chrono>
class Timer
{
private:
    // Псевдонимы типов используются для удобного доступа к вложенным типам
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration<double, std::ratio<1> >;

    std::chrono::time_point<clock_t> m_beg;

public:
    Timer() : m_beg(clock_t::now())
    {
    }

    void reset()
    {
        m_beg = clock_t::now();
    }

    double elapsed() const
    {
        return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
    }
};
using namespace std;
// bob anna repaper abbb abccba abcba
int main()
{
    //std::cout << "Hello World!\n";
    string word;
    cout << "Enter polyndrome" << endl;
    cin >> word;
    cout << "your word is " << word << " " << endl;
    cout << "its size is " << word.size() << endl;
    int half = word.size() / 2;
    cout << "half of its size is " << half << endl;
    cout << "first element is " << word[0] << endl;
    cout << "middle elemnt is " << word[half] << endl;
    bool stop = false;
    bool numiseven = word.size() % 2 == 0;//even - чётный    
    cout << "even=" << numiseven << endl;
    Timer time;
    for (int i = 0; i < half; i++)
    {
        if ((!numiseven && word[half - 1 - i] != word[half + 1 + i]) || (numiseven && word[half - 1 - i] != word[half + i]))
            stop = true;
        if (stop)
            cout << "this word is not polyndrome" << endl;
    }
    if (!stop)
        cout << "this word is truly polyndrome" << endl;
    cout << "Time elapsed: " << time.elapsed() << '\n';

    cout << endl;


}





