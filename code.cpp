#include <iostream>
#include <ctime>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <string.h>
#include <cstring>
using namespace std;
char a[9] = {'1','2','3','4','5','6','7','8','9'};
void draw()
{
    cout << " " << a[0] << " | " << a[1] << " | " << a[2] << " \n";
    cout << "-----------\n";
    cout << " " << a[3] << " | " << a[4] << " | " << a[5] << " \n";
    cout << "-----------\n";
    cout << " " << a[6] << " | " << a[7] << " | " << a[8] << " \n";
}
int main(int argc, const char * argv[]) {

    int count = 1;
    int count1 = 1;
    int p1count = 0;
    int mode;
    string input1 , input2 , input3 , input4;
    srand(time(NULL));
    draw();
    cout << "請輸入1跟玩家對戰 or 2跟電腦對戰 : \n";
    cin >> mode;
    if(mode == 1)
    {
        while(1)
        {
            if(count == 1)
            {
                cout << "請玩家" << count << "選擇位子 : \n";
                cin >> input1;
                int num1 = input1.at(0)-'0';
                if(a[num1-1] == input1.at(0))
                {
                    a[num1-1] = (char)'O';
                    draw();
                    count++;
                    p1count++;
                }
                else
                {
                    cout << "請選擇其他位子!!\n";
                }
            }
            else if(count == 2)
            {
                cout << "請玩家" << count << "選擇位子 : \n";
                cin >> input2;
                int num2 = input2.at(0)-'0';
                if(a[num2-1] == input2.at(0))
                {
                    a[num2-1] = (char)'X';
                    draw();
                    count--;
                }
                else
                {
                    cout << "請選擇其他位子!!\n";
                }
            }
            if((a[0] == a[1] && a[1]== a[2] && a[1] == 'O') || (a[3] == a[4] && a[4] == a[5] && a[4] == 'O') || (a[6] == a[7] && a[7] == a[8] && a[7] == 'O') || (a[0] == a[4] && a[4] == a[8] && a[4] == 'O') || (a[2] == a[4] && a[4] == a[6] && a[4] == 'O') || (a[0] == a[3] && a[3] == a[6] && a[3] == 'O') || (a[1] == a[4] && a[4] == a[7] && a[4] == 'O') || (a[2] == a[5] && a[5] == a[8] && a[5] == 'O'))
            {
                cout << "玩家1獲勝!\n";
                break;
            }
            else if ((a[0] == a[1] && a[1]== a[2] && a[1] == 'X') || (a[3] == a[4] && a[4] == a[5] && a[4] == 'X') || (a[6] == a[7] && a[7] == a[8] && a[7] == 'X') || (a[0] == a[4] && a[4] == a[8] &&     a[4] == 'X') || (a[2] == a[4] && a[4] == a[6] && a[4] == 'X') || (a[0] == a[3] && a[3] == a[6] && a[3] == 'X') || (a[1] == a[4] && a[4] == a[7] && a[4] == 'X') || (a[2] == a[5] && a[5] == a[8] && a[5] == 'X'))
            {
                cout << "玩家2獲勝!\n";
                break;
            }
            else if(p1count == 5)
            {
                cout << "沒輸沒贏!\n";
                break;
            }
            else
            {
                continue;
            }
        }
    }
    else
    {
        while(1)
        {
            if(count1 == 1)
            {
                cout << "請玩家選擇位子 : \n";
                cin >> input3;
                int num3 = input3.at(0) - '0';
                if(a[num3-1] == input3.at(0))
                {
                    a[num3-1] = (char)'O';
                    draw();
                    count1++;
                    p1count++;
                }
                else
                {
                    cout << "請選擇其他位子!!\n";
                }
            }
            else if (count1 == 2)
            {
                cout << "換電腦選擇位子 : \n";
                while(1)
                {
                    int randnum = rand()%9;
                    if(a[4] != 'O' && a[4] != 'X')
                    {
                        a[4] = (char)'X';
                        draw();
                        count1--;
                        break;
                    }
                    else if(a[randnum] != 'O' && a[randnum] != 'X' && (a[4] == 'O' || a[4] == 'X'))
                    {
                        a[randnum] = (char)'X';
                        draw();
                        count1--;
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
            if((a[0] == a[1] && a[1]== a[2] && a[1] == 'O') || (a[3] == a[4] && a[4] == a[5] && a[4] == 'O') || (a[6] == a[7] && a[7] == a[8] && a[7] == 'O') || (a[0] == a[4] && a[4] == a[8] && a[4] == 'O') || (a[2] == a[4] && a[4] == a[6] && a[4] == 'O') || (a[0] == a[3] && a[3] == a[6] && a[3] == 'O') || (a[1] == a[4] && a[4] == a[7] && a[4] == 'O') || (a[2] == a[5] && a[5] == a[8] && a[5] == 'O'))
            {
                cout << "玩家獲勝!\n";
                break;
            }
            else if ((a[0] == a[1] && a[1]== a[2] && a[1] == 'X') || (a[3] == a[4] && a[4] == a[5] && a[4] == 'X') || (a[6] == a[7] && a[7] == a[8] && a[7] == 'X') || (a[0] == a[4] && a[4] == a[8] && a[4    ] == 'X') || (a[2] == a[4] && a[4] == a[6] && a[4] == 'X') || (a[0] == a[3] && a[3] == a[6] && a[3] == 'X') || (a[1] == a[4] && a[4] == a[7] && a[4] == 'X') || (a[2] == a[5] && a[5] == a[8] && a[5] == 'X'))
            {
                cout << "電腦獲勝!\n";
                break;
            }
            else if(p1count == 5)
            {
                cout << "沒輸沒贏!\n";
                break;
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}
