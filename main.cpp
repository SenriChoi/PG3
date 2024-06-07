#include <stdio.h>
#include"iostream"
using namespace std;

//複数のテンプレートの定義
template <typename Type1, typename Type2>


//比べるクラス(小さい値を出力）
class Comparison {
public:
    Type1 numA;
    Type2 numB;

    Comparison(Type1 numA, Type2 numB) : numA(numA), numB(numB) {};

    Type1 Min() { return (numA < static_cast<Type1>(numB)) ? numA : static_cast<Type1>(numB); }
};


int main() {

    //int型と三つ型を比べる
	Comparison<int, int>Min1(10,20);
    cout << Min1.Min() << endl;

    Comparison<int, float>Min2(10, 7.8f);
    cout << Min2.Min() << endl;

  
    Comparison<int, double>Min3(10, 13.9);
    cout << Min3.Min() << endl;

    //float型と三つ型を比べる
    Comparison<float, int>Min4(10.9f, 23);
    cout << Min4.Min() << endl;

    Comparison<float, float>Min5(2.4f, 7.8f);
    cout << Min5.Min() << endl;


    Comparison<float, double>Min6(34.9f, 13.9);
    cout << Min6.Min()<< endl;


    //double型と三つ型を比べる
    Comparison<double, int>Min7(10.6, 23);
    cout << Min7.Min()<< endl;


    Comparison<double, float>Min8(24.2, 7.8f);
    cout << Min8.Min() << endl;

 
    Comparison<double, double>Min9(9.5, 13.9);
    cout << Min9.Min() << endl;

	return 0;
}
