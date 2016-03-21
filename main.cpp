#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"lab2.h"
using namespace std;

int main(){
    
    float height,weight;
    BMI obj;
    ifstream inFile("file.in",ios::in);
    ofstream outFile("file.out",ios::out);
    
    if(!inFile){
	cerr<<"Failed opening"<<endl;
	exit(1);
	}
    if(!outFile){
	cerr<<"Failed opening"<<endl;
	exit(1);
	}

    while(inFile>>height>>weight){
	if(weight==0&&height==0)break;

	outFile<<obj.Value(height,weight)<<"\t"<<obj.Result(obj.Value(height,weight))<<endl;
	}
    
    inFile.close();
    outFile.close();
    return 0;
}
