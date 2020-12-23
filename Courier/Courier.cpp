double Courier::incomeAfterTaxes(){
    incomeAfterTaxFee = getTotalIncome();

    healthTaxBasis = incomeAfterTaxFee - ((incomeAfterTaxFee*tax.healthTax));
    incomeTaxBasis = incomeAfterTaxFee - ((incomeAfterTaxFee - ((incomeAfterTaxFee*tax.healthTax) * 0.2)) + (incomeAfterTaxFee*tax.healthTax));
    incomeAfterTaxFee = incomeAfterTaxFee - ((incomeAfterTaxFee*tax.healthTax) + (healthTaxBasis*tax.heathContribution1) + ((incomeTaxBasis*tax.incomeTax) - (healthTaxBasis*tax.heathContribution2)));

    return incomeAfterTaxFee;

}

void Courier::countAllData() {
    countAllHours();
    countDelPerHour();
    countHourIncome();
    countBonuses();
    countTotalIncome();
    setTotalIncome(incomeAfterTaxes());
}
