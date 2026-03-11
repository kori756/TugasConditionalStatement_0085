#include <iostream>
using namespace std;

float NilBB, NilTB, perhitungan_BMI;
    string bmi;

cout << "Masukan Berat Badan(KG) : " ;   
cin >> NilBB ;
cout << "Masukan Tinggi badan(METER) : " ;
cin >> NilTB ;

float perhitungan_bmi(float a,float b){
    return a/(b*b);
}
 string bmi (float r){
    if(r<18.5)
        return "berat badan kurang";
    else{
        if(r<=25.00){
            return "berat badan normal";
        }
        else{
            if(r<=27.00){
                return "kelebihan berat badan";
            }
            else{
                return "obsitas";
            }
        }
    }
 }



 
