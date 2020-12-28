class Stack {
    constructor(){
        this.mainStack = [];
        this.minStoringStack = [];
    }

    pop(){
        if (this.mainStack.length){
            this.minStoringStack.pop();
            return this.mainStack.pop();
        }
   
    }

    peek(){
        if (this.mainStack.length){
            return this.mainStack[this.mainStack.length-1];
        };
        
    }

    add(data){
        this.mainStack.push(data);
        this.minStoringStack.push(data > this.minStoringStack[this.minStoringStack.length-1] ? this.minStoringStack[this.minStoringStack.length-1] : data);

    }

    checkMin(){
        return this.minStoringStack[this.minStoringStack.length-1];
    }
    
};



const newStack = new Stack();
newStack.add(3);
newStack.add(4);
newStack.add(2);
 newStack.add(0);
newStack.add(19);
newStack.add(0);
newStack.add(399);
console.log(newStack.checkMin());
console.log(newStack.minStoringStack);
newStack.pop();
newStack.pop();
newStack.pop();
console.log(newStack.checkMin());
console.log(newStack.minStoringStack);