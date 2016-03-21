#include"lab2.h"

float BMI::Value(float hei,float wei){
    float BMI_value = wei/(hei/100)/(hei/100);
	return BMI_value;
}
string BMI::Result(float status){
	string s1="Very severly underwight",s2="Severly underweight",
	       s3="Underweight",s4="Normal",s5="Overweight",
	       s6="Obese Class I(Moderately obese)",
	       s7="Obese Class II(Severely obese)",
	       s8="Obese Class III(Very severly obese)";
    if(status<15)return s1;
    if(status>=15&&status<16)return s2;
    if(status>=16&&status<18.5)return s3;
    if(status>=18.5&&status<25)return s4;
    if(status>=25&&status<30)return s5;
    if(status>=30&&status<35)return s6;
    if(status>=35&&status<40)return s7;
    if(status>=40)return s8;
}
