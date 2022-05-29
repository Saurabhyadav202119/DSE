#include<iostream>

using namespace std;

class ACCOUNT{
    private:
    int pri,rate,time;
    double inter;
    public:
   double account,dep,with;

   void deposit()
   {
       cout<<"Money deposit by you::";
       cin>>dep;
       account=account+dep;
       cout<<"Total balence in your bank account::"<<account<<"\n";
   }
void withdraw()
{
    cout<<"Money withdraw by you from your account:";
    cin>>with;
    if(account<with){
        cout<<"YOu have insufficient balence in your bank account\n";
    }
    else{
    account=account-with;
    cout<<"Total balence in your bank account::"<<account<<"\n";
    }
}
void calc()
{

    cout<<"Rate at which bank gives  money:";
    cin>>rate;
    cout<<"time for money in bank:";
    cin>>time;
    inter=(account*rate*time)/100;
    account=account+inter;
    cout<<"Total balence in your bank account::"<<account<<"\n";
}
};
int main()
{
    ACCOUNT A;
    A.deposit();
    A.withdraw();
    A.calc();

    return 0;
}