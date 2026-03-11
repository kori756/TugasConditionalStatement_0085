#include <iostream>
using namespace std;

void input(float NilTB, float NilBB){

    cout << "Masukan Berat Badan(KG) : " ;   
    cin >> NilBB ;
    cout << "Masukan Tinggi badan(METER) : " ;
    cin >> NilTB ;
}
float perhitungan_BMI(float a,float b){
    return a/(b*b);
}
 string bmi (float r){
    if(r < 18.5) {
        return "berat badan kurang";
    } else if(r <= 25.00) {
        return "berat badan normal";
    } else if(r <= 27.00) {
        return "kelebihan berat badan";
    } else {
        return "obesitas"; 
    }
}

 int main(){
    float NilBB, NilTB, Hasil_BMI;

    input(NilBB, NilTB);

    Hasil_BMI = perhitungan_BMI(NilBB, NilTB);
    
   cout << "BMI Anda = " << Hasil_BMI << ", dengan status = " << bmi(Hasil_BMI) << endl;
 
}







 
