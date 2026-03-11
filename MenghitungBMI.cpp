#include <iostream>
using namespace std;

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
    float NilBB, NilTB;

    cout << "Masukan Berat Badan(KG) : " ;   
    cin >> NilBB ;
    cout << "Masukan Tinggi badan(METER) : " ;
    cin >> NilTB ;
    
    cout << "BMI Anda = " <<perhitungan_BMI<<",dengan status = " << perhitungan_BMI<<endl;
 
}







 
