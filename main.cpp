#include <stdio.h>
#include"iostream"
using namespace std;

//複数のテンプレートの定義
template <typename Type1, typename Type2>


//比べるクラス(小さい値を出力）
class Comparison {
public:
    Comparison(Type1 numA, Type2 numB) {
        if (numA < numB)
            cout << static_cast<Type1>(numA) << endl;
        else
            cout << static_cast<Type2>(numB) << endl;
    }
};


int main() {

    //int型と三つ型を比べる
	Comparison<int, int>Min1(10,23);
    Comparison<int, float>Min2(10, 7.8f);
    Comparison<int, double>Min3(10, 13.9);

    //float型と三つ型を比べる
    Comparison<float, int>Min4(10.9f, 23);
    Comparison<float, float>Min5(2.4f, 7.8f);
    Comparison<float, double>Min6(34.9f, 13.9);

    //double型と三つ型を比べる
    Comparison<double, int>Min7(10.6, 23);
    Comparison<double, float>Min8(24.2, 7.8f);
    Comparison<double, double>Min9(9.5, 13.9);


	return 0;
}
