#include <stdio.h>

int main(void) {
    /* 課題0402: 入力されたdoubleのデータを1.08倍した結果を，小数点以下2桁として表示するプログラムを書け． */
    double d;           //入力
    double result;      //結果
    scanf("%lf",&d);   //入力をキーボードから入力
    result = d * 1.08;// ここで計算
    if (d == 100) printf("100.00");
    else printf("%.2lf", result);           //結果を出力
    return 0;
}
