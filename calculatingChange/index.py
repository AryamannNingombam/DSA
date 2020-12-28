import math

allConversions = {
    'dollarToCent' : 100,
    'quarterToCent' : 25,
    'nickelToCent' : 10,
    'dimeToCent' : 5,
}


def getRemaining(totalCents,currencyToUse):
    totalCurrencyNeeded = math.floor(totalCents/allConversions[currencyToUse])
    totalCents = totalCents%allConversions[currencyToUse]

    return {"totalCurrencyNeeded" : totalCurrencyNeeded,"totalCents" : totalCents}




def getChange(totalCents):
    #DOLLAR
    balance = totalCents
    dollarResult  = getRemaining(balance,'dollarToCent')
    dollarsNeeded = dollarResult['totalCurrencyNeeded']
    balance = dollarResult['totalCents']
    #Quarter 
    quarterResult  = getRemaining(balance,'quarterToCent')
    quartersNeeded = quarterResult['totalCurrencyNeeded']
    balance = quarterResult['totalCents']
   #nickel 
    nickelResult  = getRemaining(balance,'nickelToCent')
    nickelsNeeded = nickelResult['totalCurrencyNeeded']
    balance = nickelResult['totalCents']
    #dime 
    dimeResult  = getRemaining(balance,'dimeToCent')
    dimesNeeded =dimeResult['totalCurrencyNeeded']
    balance = dimeResult['totalCents']
    #pennies
    penniesNeeded = balance


    return f"""
        Total : {totalCents}
        Dollars : {dollarsNeeded}
        Quarters : {quartersNeeded}
        Nickels  : {nickelsNeeded}
        Dime : {dimesNeeded}
        Pennies : {penniesNeeded}
    
    """


number = int(input("Enter the amount : "))
print(getChange(number))
