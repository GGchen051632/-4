#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    int sum = 0;
    cout << "請輸入一個正整數n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) sum += i;
    }

    sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << "For loop: 1~" << n << "之間所有偶數的和為: " << sum << endl;

    int i = 1;
    sum = 0;
    while (i <= n) {
        if (i % 2 == 0) sum += i;
        i++;
    }
    cout << "while loop: 1~" << n << "之間所有偶數的和為: " << sum << endl;
   
    i = 2;
    sum = 0;
    do {
        sum += i;
        i += 2;
    } while (i <= n);
    cout << "Do-while loop: 1~" << n << "之間所有偶數的和數: " << sum << endl;


}

