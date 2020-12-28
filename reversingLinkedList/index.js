// --- Directions
// Implement classes Node and Linked Lists
// See 'directions' document

class Node {
    constructor(data,next=null){
        this.data = data;
        this.next = next;

    }

}

class LinkedList {
    constructor(){
        this.head = null;
    }
    insertFirst(data){
       this.head = new Node(data,this.head);

    }
    size(){
        if (!this.head){
            return 0;
        }
            let counter = 1;
            let nextNode = this.head.next;
            while (nextNode){
                counter++;
                nextNode = nextNode.next;
            }
            return counter;
        
    }
    getFirst(){

        return this.getAt(0);
    }
    getLast(){
        return this.getAt(this.size()-1);
    }
    clear(){
        this.head = null;
    }
    removeFirst(){
        return this.removeAt(0);
    }
    removeLast(){
        return this.removeAt(this.size()-1);
       
        

    }
    insertLast(data){
      this.insertAt(data,this.size());
    }
    getAt(index){
        let counter = 0;
        let returningNode = this.head;
        while (counter !== index){
            if (returningNode){
                returningNode = returningNode.next;
            }else{
                break;
            }
            
            counter++;
        }
        return returningNode;
    }
    insertAt(data,index){
        if (this.head){
            let previousNode = null;
            if (index === 0){
                this.head = new Node(data,this.head);

            }else{
                 previousNode = this.getAt(index-1);
            };
            
        
            if (!previousNode){
                previousNode = this.getLast();
            };
           
            const nextNode = previousNode.next;
            const newNode = new Node(data,nextNode);

            previousNode.next = newNode;

        }else{
            this.head = new Node(data);
        }
       
       
        
        
    }
    removeAt(index){
        if (this.head && index < this.size()){
            let previousNode = null;
            if (index===0){
                this.head = this.head.next;
            }else{
                previousNode = this.getAt(index-1);
                const nodeToRemove = this.getAt(index);
                previousNode.next = nodeToRemove.next;
            };
           
        };
   

    }

    getAll(){
        const allItems= [];
        for (let i=0;i<this.size();i++){
            allItems.push(this.getAt(i));
        }
        return allItems;
    }

    forEach(func){
let node =  this.head;
let counter = 0;
while (node){
    func(node,counter);
    node  = node.next;
    counter++;
};
    }
    *[Symbol.iterator](){
        let node  = this.head;
        while (node){
            yield node;
            node = node.next;
        }
    }
    reverseLinkedList(){
        let previous=null;
        let current = this.head;
        let next = null;
        while (current){
            next = current.next;
            current.next = previous;
            previous = current;
            current = next;
            
       }
       this.head = previous;
       }
        
}





const newLinkedList =new LinkedList();
newLinkedList.insertFirst(6);
newLinkedList.insertFirst(5);
newLinkedList.insertFirst(4);
newLinkedList.insertFirst(3);
newLinkedList.insertFirst(2);
newLinkedList.insertFirst(1);
newLinkedList.insertFirst(0);
console.log(newLinkedList.getAll());

newLinkedList.reverseLinkedList();
console.log(newLinkedList.getAll());