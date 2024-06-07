#include <stdio.h>
#include"iostream"
using namespace std;

//複数のテンプレートの定義
template <typename Type1, typename Type2>


//比べるクラス(小さい値を出力）
class Comparison {
public:
    Type1 Min(Type1 numA, Type2 numB) {
        if (numA < numB)
            return numA;
           // cout << static_cast<Type1>(numA) << endl;
        else
            return numB;
          //   cout << static_cast<Type2>(numB) << endl;
    }
};


int main() {

    //int型と三つ型を比べる
	Comparison<int, int>Min1;
    cout << Min1.Min(10,20) << endl;

    Comparison<int, float>Min2;
    cout << Min2.Min(10, 7.8f) << endl;

  
    Comparison<int, double>Min3;
    cout << Min3.Min(10, 13.9) << endl;

    //float型と三つ型を比べる
    Comparison<float, int>Min4; 
    cout << Min4.Min(10.9f, 23) << endl;

    Comparison<float, float>Min5;
    cout << Min5.Min(2.4f, 7.8f) << endl;


    Comparison<float, double>Min6;
    cout << Min6.Min(34.9f, 13.9) << endl;


    //double型と三つ型を比べる
    Comparison<double, int>Min7;
    cout << Min7.Min(10.6, 23) << endl;


    Comparison<double, float>Min8;
    cout << Min8.Min(24.2,7.8f) << endl;

 
    Comparison<double, double>Min9;
    cout << Min9.Min(9.5, 13.9) << endl;

	return 0;
}
