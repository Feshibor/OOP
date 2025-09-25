#include "2.h"
#include <iostream>
#include <string>

using namespace std;

int intToTurkish() {
    int x;
    cin >> x;
    if (x == 0) {
        cout <<"sıfır";
        return 0;
    }
    int y = x / 10;
    x = x % 10;
    if (y == 1) {
        cout <<"on";
    } else if (y == 2) {
        cout <<"yirmi";
    } else if (y == 3) {
        cout <<"otuz";
    } else if (y == 4) {
        cout <<"kırk";
    } else if (y == 5) {
        cout <<"elli";
    } else if (y == 6) {
        cout <<"altmış";
    } else if (y == 7) {
        cout <<"yetmiş";
    } else if (y == 8) {
        cout <<"seksen";
    } else if (y == 9) {
        cout <<"doksan";
    } 
    if (x!=0 && y!=0){
        cout <<" ";
    }

    if (x == 1) {
        cout <<"bir";
    } else if (x == 2) {
        cout <<"iki";
    } else if (x == 3) {
        cout <<"üç";
    } else if (x == 4) {
        cout <<"dört";
    } else if (x == 5) {
        cout <<"beş";
    } else if (x == 6) {
        cout <<"altı";
    } else if (x == 7) {
        cout <<"yedi";
    } else if (x == 8) {
        cout <<"sekiz";
    } else if (x == 9) {
        cout <<"dokuz";
    } 
    return 0;
}