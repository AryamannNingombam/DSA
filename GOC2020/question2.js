function performingOperations(array){
 const answer=[0];

 for (let operatorArray of array){
     [operator,number] = operatorArray;
     if (+operator === 0){
            answer.push(+number);
     }else{
         for (let i in answer){
             answer[i] = +answer[i]^parseInt(number);
         }
     }
     
 }
return answer;

}



const performingOperation = performingOperations([[0,4],[0,2],[1,4],[0,5],[1,8]])

console.log(performingOperation);