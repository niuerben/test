#include "TicketMachine.h"
#include<iostream>
using namespace std;
TicketMachine::TicketMachine(){
   
}
TicketMachine::~TicketMachine(){

}
void TicketMachine::showPormpt(){
    cout<<"something";
}
void TicketMachine::insertMoney(int money)
{
    balance+=money;
}

void TicketMachine::showBalance()
{
    cout<<balance;
}
int TicketMachine::returnbalance()
{
    return balance;
}