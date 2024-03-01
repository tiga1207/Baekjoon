//25206
#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

//전공 평잠 3.3 이상이어야 통과
int main() {
    //전공평점 = 학점*과목평점들의 총합/학점의 총합

    //과목(name)
    string subject[20];
    //학점(3.0 etc)
    double degree[20]={0.0};
    //등급(A+ etc)
    string tear[20];

    double degreeCal[20]={0.0};

    int passIndex[20]={0,};

    
    double avg=0;
    double sum=0;
    double degreeSum=0;

    //입력받기 및 P인 과목에 체크하기
    for(int i=0; i<20; ++i){
        cin>>subject[i]>>degree[i]>>tear[i];
        if(tear[i]=="P"){
            passIndex[i]+=1;
        }
    }

    //등급 별 계산 공식

    //P인 과목은 제외하고 계산하기
    for(int j=0; j<20; ++j){
        if(passIndex[j] != 1){
            if(tear[j]== "A+"){
                degreeCal[j]= degree[j] * 4.5;
                sum += degreeCal[j];
                degreeSum+=degree[j];
            }
            else if(tear[j]=="A0"){
                degreeCal[j]= degree[j] * 4.0;
                sum += degreeCal[j];
                degreeSum+=degree[j];
            }
            else if(tear[j]=="B+"){
                degreeCal[j]= degree[j] * 3.5;
                sum += degreeCal[j];
                degreeSum+=degree[j];
            }
            else if(tear[j]=="B0"){
                degreeCal[j]= degree[j] * 3.0;
                sum += degreeCal[j];
                degreeSum+=degree[j];
            }
            else if(tear[j]=="C+"){
                degreeCal[j]= degree[j] * 2.5;
                sum += degreeCal[j];
                degreeSum+=degree[j];
            }
            else if(tear[j]=="C0"){
                degreeCal[j]= degree[j] * 2.0;
                sum += degreeCal[j];
                degreeSum+=degree[j];
            }
            else if(tear[j]=="D+"){
                degreeCal[j]= degree[j] * 1.5;
                sum += degreeCal[j];
                degreeSum+=degree[j];
            }
            else if(tear[j]=="D0"){
                degreeCal[j]= degree[j] * 1.0;
                sum += degreeCal[j];
                degreeSum+=degree[j];
            }
            else
            {
                degreeCal[j]=0.0;
                sum += degreeCal[j];
                degreeSum+=degree[j];
            }
        }
    }

    // cout<<"pass과목수"<<passIndexCount<<"\n";

    avg= sum/degreeSum;

    cout<<avg;

    return 0;
}