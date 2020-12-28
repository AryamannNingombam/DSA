const time1 = (new Date()).getMilliseconds();

class Stack{
    constructor(){
        this.stackArray = [];
    }
    add(data){
        this.stackArray.push(data);
    }
    peek(){
        return this.stackArray[this.stackArray.length-1];

    }
    pop(){
        return this.stackArray.pop();
    }
}

function checkParam(string){
    const checkStack = new Stack();
    const openingParams= ['(','[','{'];
    const closingParams = [']','}',')'];
   
    for (let par of string){
        if (openingParams.includes(par)){
            checkStack.add(par);
        }else if (closingParams.includes(par)){
            const popped = checkStack.pop();
            if (!popped){
                return false;
            }
            switch (par){
                
                case ')':
                    if (popped !== '('){
                        return false;
                    }
                    break;
                case '}':
                        if (popped !== '{'){
                            return false;
                        }
                        break;
                case ']':
                            if (popped !== '['){
                                return false;
                            }
                            break;
            };
          

        };
        
    };

return true;



}; 
console.log(checkParam('{{{{{[}{({[()]})}]}}}}}')); //False;
console.log(checkParam('{{{{{[{({[()]})}]}}}}}')); //True;
console.log(checkParam('{{{{{[{({[()]})}]}}}}}')); //True;
console.log(checkParam('{{{{{[}{([}])}{({[()]})}]}}}}}')); //False;
console.log(checkParam('{{{{{[([[[((((()))))]]]){({[()]})}]}}}}}')); //True;
console.log(checkParam('[()]{}{[()()]()}')); //True;
console.log(checkParam('[(])')); //False;
console.log(checkParam('))'));//False
console.log(checkParam('{}{(}))}'));//False

console.log(+new Date().getMilliseconds() - +time1);