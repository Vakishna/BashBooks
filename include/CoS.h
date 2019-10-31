#include <iostream>
#include "Account.h"
#include "Expenses.h"

#ifndef COS_H
#define COS_H


class CostOfSales : public Account, public Expenses {
    public:
        CostOfSales();
    protected:
    private:
        const char* prefix = 'CoS_';
};
#endif
