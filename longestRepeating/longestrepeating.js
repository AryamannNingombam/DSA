//TODO;
//Not working;


function getLongestNonRepeating(string){
    const allLetters = {
        'a' : 0,
        'b' : 0,
        'c' : 0,
        'd' : 0,
        'e' : 0,
        'f' : 0,
        'g' : 0,
        'h' : 0,
        'i' : 0,
        'j' : 0,
        'k' : 0,
        'l' : 0,
        'm' : 0,
        'n' : 0,
        'o' : 0,
        'p' : 0,
        'q' : 0,
        'r' : 0,
        's' : 0,
        't' : 0,
        'u' : 0,
        'v' : 0,
        'w' : 0,
        'x' : 0,
        'y' : 0,
        'z' : 0,
        
        
        
        
        };
    if (string.length===0){
        return 0;
    };
    let [i,j]=[0,0];
    let number = 0;
    //abcd ===> length=  4;
   allLetters[string[0]] ++;
    while (j!==string.length-1){
        // console.log(string.slice(i,j+1));

        if (allLetters[string[j+1]]===0){
            j++;
            allLetters[string[j]]++;
           
            number = Math.max(number, j-i+1);


            
            
        }else{
            allLetters[string[i]]--;
            i++;
           
        };
    };

    return number; 
}

console.log(getLongestNonRepeating('abrexrzx'));
console.log(getLongestNonRepeating('aabbcfdplkmnoqrbbb'));
console.log(getLongestNonRepeating('abcdefd'));