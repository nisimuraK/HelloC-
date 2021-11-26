#include <iostream> //std::coutを定義するのに必要
#include <stdio.h>

int top(){
    std::cout << "Hello\nworld!!!\n";
    return 0;
}

//クラスの定義
class AppleBox{
    public:
//publicメンバ、他のオブジェクトのメンバ関数や普通の関数からもアクセス可
//メンバ関数
    void Add(int addApple);
    void Del(int delApple);
    void Empty();
    int GetTotal(){
        return total;
    }
//メンバ関数Total()で、箱に入ってるTestBoxの数を求められる。
private:
//privateメンバ、他のオブジェクトのメンバ関数や普通の関数からアクセスできない。
//同じオブジェクト内のメンバ関数のみ、アクセス可
//メンバ変数
    int total;
};

void AppleBox::Add(int addApple){
    //メンバ変数totalに追加するリンゴの数を加える
    total += addApple;
}

//AppleBox myAppleBox1 = [クラス名][オブジェクト名]
//一つのクラスから、いくらでもオブジェクトを作成可能。

//メンバ関数の呼び出し
void AppleBox::Empty(){
    total = 0;
}
void AppleBox::Del(int delApple){
    total -= delApple;
    if(total < 0) Empty();
};

int main(){
    AppleBox myAppleBox;

    myAppleBox.Empty();
    myAppleBox.Add(5);
    myAppleBox.Del(2);
    printf("箱の中のみかん : %d個\n",myAppleBox.GetTotal());
    return 0;
}

//デストラクタ
class MikanBox{
public:
    MikanBox();
    //デストラクタの宣言、publicメンバに属する
    ~MikanBox();
      int GetTotal(){
        return Mikantotal;
      }
private:
    int Mikantotal;
};

MikanBox::~MikanBox(){
    printf("みかん箱オブジェクトの任務完了\n");
}
int MikanMain(){
    MikanBox myMikanBox;
    printf("箱の中のみかん:%d個\n",myMikanBox.GetTotal());
    return 0;