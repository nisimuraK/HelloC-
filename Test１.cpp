/*
�D�G�Ҏ�܎��ɎQ���o���邩�o���Ȃ�������
���܎��Q������
����A�A����B�̂ǂ��炩�ɍ��i
�܂��͂��̗���

int main(){
    int SikenA;
    int SikenB;

    if(SikenA == 0){
        cout << "�Q���ł��܂�";
    }
    else
    if(SikenA == 1){
        cout << "�Q���ł��܂���";
    }
    else
        cout << "�������l����͂��ĉ�����";
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
    cout << "���i���������𐔒l�œ���\n����A = 0,����B = 1\n";
        cin >> SikenA;
        if(SikenA == 0){
        cout << "�Q���ł��܂��B";
    }
    else
        cin >> SikenB;
        if (SikenB == 1){
        cout << "�Q���ł��܂��B";
    }
    else
    cout << "�Q���ł��܂���B";
    return 0;
}