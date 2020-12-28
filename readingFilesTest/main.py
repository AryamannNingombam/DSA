#Objective : 
# To test the speed with which
# Python can find the count of the word
# 'hamlet' in the play "Hamlet" by 
# William Sh. and compare it to c++
import time
#words =9,59,974;
#mean time = 0.18881425857543946s;

with open('hamlet.txt','r') as file:
    ini = time.time()
    counter= 0
    listOfWords = file.read()

    for i in listOfWords:
        if ("h"  ==i.lower()):
            counter+=1
    fin = time.time()

    print("H : "+ str(counter))
    print(fin-ini) 