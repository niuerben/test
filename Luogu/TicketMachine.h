#ifndef TICKETMACHINE_H_
#define TICKETMACHINE_H_

class TicketMachine{
public:
    TicketMachine();
    virtual ~TicketMachine();
    void showPormpt();
    void insertMoney(int money);
    void showBalance();
    void printTicket();
    void showTotal();
    int returnbalance();
private:
    const int PRICE=5;
    int balance=0;
    int total;
};

#endif