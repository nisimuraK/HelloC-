/*
優秀者受賞式に参加出来るか出来ないか判定
授賞式参加条件
試験A、試験Bのどちらかに合格
またはその両方

int main(){
    int SikenA;
    int SikenB;

    if(SikenA == 0){
        cout << "参加できます";
    }
    else
    if(SikenA == 1){
        cout << "参加できません";
    }
    else
        cout << "正しい値を入力して下さい";
    return 0;
}
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    int SikenA;
    int SikenB;
    
    string input;
    cout << "合格した試験を数値で入力\n試験A = 0,試験B = 1\n";
        cin >> SikenA;
        if(SikenA == 0){
        cout << "参加できます。";
    }
    else
        cin >> SikenB;
        if (SikenB == 1){
        cout << "参加できます。";
    }
    else
    cout << "参加できません。";
    return 0;
}