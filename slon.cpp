#include <iostream>
using namespace std;
int main (){
	int x, y, z, x1, y1, z1, x2, y2, z2;
	cin >> x >> y >> x1 >> y1;
    x2 = abs(x - x1);
    y2 = abs(y - y1);
    if (x2 == y2){
        cout << "ВСЁ Чётко";
    }
    else{
        cout << "ВСЁ НЕ Чётко";
    }
}
