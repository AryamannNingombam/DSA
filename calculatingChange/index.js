
// DOLLAR - 100
// QUARTER - 25
// NICKEL - 10
// DIME  - 5
// PENNY - 1

const allConversions = {
    dollarToCent : 100,
    quarterToCent : 25,
    nickelToCent : 10,
    dimeToCent : 5,
}


function getRemaining(totalCents,secondCurrency){
    const totalCurrencyNeeded  = Math.floor(totalCents/(allConversions[secondCurrency]));
    totalCents  %= allConversions[secondCurrency];
    return {totalCurrencyNeeded : totalCurrencyNeeded,totalCents : totalCents};


};

function getChange(totalCents){
    const initialAmount = totalCents;
  //DOLLARS;
    const dollarResult = getRemaining(totalCents,'dollarToCent'); 
    const totalDollarsNeeded = dollarResult.totalCurrencyNeeded;
    totalCents = dollarResult.totalCents;
// QUARTERS;
    const quarterResult = getRemaining(totalCents,'quarterToCent');
    const totalQuartersNeeded = quarterResult.totalCurrencyNeeded;
    totalCents = quarterResult.totalCents;
    //NICKEL;
    const nickelResult = getRemaining(totalCents,'nickelToCent');
    const totalNickelsNeeded = nickelResult.totalCurrencyNeeded;
    totalCents = nickelResult.totalCents;

    //DIMES;
    const dimesResult= getRemaining(totalCents,'dimeToCent');
    const totalDimesNeeded = dimesResult.totalCurrencyNeeded;
    //PENNIES;
    const totalPenniesNeeded = dimesResult.totalCents;

    return `
    Total : ${initialAmount} cents;
    Dollars : ${totalDollarsNeeded};
    Quarters : ${totalQuartersNeeded};
    Nickel : ${totalNickelsNeeded};
    Dimes : ${totalDimesNeeded};
    Pennies : ${totalPenniesNeeded}

    
    
    `;




};


console.log(getChange(267));


