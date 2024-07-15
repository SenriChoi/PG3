#include <iostream>
#include <string>
#include <chrono>

//コピー時間計算＋出力
void measureCopyTime(const std::string& str) {
    //開始
    auto start = std::chrono::high_resolution_clock::now();
    //内容コピー
    std::string copy = str;
    //終了
    auto end = std::chrono::high_resolution_clock::now();
    //時間計算
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    //出力
    std::cout << "Time taken to copy the string: " << duration << " µs" << std::endl;
}

//移動時間計算＋出力
void measureMoveTime(std::string&& str) {
    //開始
    auto start = std::chrono::high_resolution_clock::now();
    //内容移動
    std::string moved = std::move(str);
    //終了
    auto end = std::chrono::high_resolution_clock::now();
    //時間計算
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    //出力
    std::cout << "Time taken to move the string: " << duration << " µs" << std::endl;
}

int main() {
    //文字列string with 100,000 'a'
    std::string a(10000000, 'a');

    //コピー
    measureCopyTime(a);

    //移動
    measureMoveTime(std::move(a));

    return 0;
}