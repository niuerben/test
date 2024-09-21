#include "TicketMachine.h"
#include "TicketMachine.cpp"
int main()
{
    TicketMachine tm;
    int money;
    while(tm.returnbalance()<=100){
        cin>>money;
        tm.insertMoney(money);
    }
        
    tm.showBalance();
}