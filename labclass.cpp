//
// Created by PACKARD BELL on 01.10.2017.
//
#include "labclass.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

lab_class::lab_class(){
    cout << "vvedi stroku" << endl;
        getline(cin,str);
}

lab_class::~lab_class() = default;

void lab_class::getstr() {
    cout <<str << endl;
}

void lab_class::lclass() {
    cout << " '+' " << "- " << count (str.begin(), str.end(), '+') << endl;
    cout << " '-' " << "- " << count (str.begin(), str.end(), '-') << endl;
    cout << " '*' " << "- " << count (str.begin(), str.end(), '*') << endl;
    cout << " '/' " << "- " << count (str.begin(), str.end(), '/') << endl;
    cout << " '=' " << "- " << count (str.begin(), str.end(), '=')<< endl;
    int k=0;
for (int i=str.find("cot"); i!=string::npos; i=str.find("cot",i+1)){
    k++;
}
    cout << " 'cot' " << "- " << k << endl;
}
