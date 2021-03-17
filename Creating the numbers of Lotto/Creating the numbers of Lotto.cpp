#include <iostream>
#include <time.h>
using namespace std;
int main()
{

    srand((unsigned int)time(0));

    int Lotto[45] = {};
    // 1~45 까지의 숫자를 차례로 넣어준다. 
    for (int i = 0; i < 45; i++) {
        Lotto[i] = i + 1;
    }
    cout << "아래의 숫자중 6가지 숫자와 보너스 숫자 1가지를 랜덤하게 알려드립니다." << endl;
    for (int i = 0; i < 45; i++) {

        if (Lotto[i] < 10) {
            cout << "0" << Lotto[i] << " ";
        }
        else { cout << Lotto[i] << " "; }
        if ((i + 1) % 5 == 0) { cout << endl; }
    }
    cout << "\t";
    cout << "\n";

    //suffles
    int emptyShit, index1, index2;
    for (int i = 0; i < 100; i++) {
        index1 = rand() % 45;
        index2 = rand() % 45;
        emptyShit = Lotto[index1];
        Lotto[index1] = Lotto[index2];
        Lotto[index2] = emptyShit;
    }
    cout << "당첨 번호 7가지 : ";
    for (int i = 0; i < 6; i++) {
        
        if (Lotto[i] < 10) {
            cout <<"0"<<Lotto[i]<<" ";
        }
        else { cout << Lotto[i] << " "; }
        
    }
    cout << "\t";
    cout << "보너스 : " << Lotto[6];
    
    cout << "\n";
    
    return 0;
}
