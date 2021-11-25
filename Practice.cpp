#include <iostream> //std::coutを定義するのに必要

int main(){
    std::cout << "Hello\nworld!!!\n";
    return 0;
}

//クラスの定義
class TestBox{
    public:
//メンバ関数
    void Add(int addTestBox);
    void Del(int delTestBox);
    void Empty();
    int Total(){
        return total;
    }
//メンバ関数Total()で、箱に入ってるTestBoxの数を求められる。
private:
//メンバ変数
    int total;
};