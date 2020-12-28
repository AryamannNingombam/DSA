class Solution{
    constructor(private arr:number[],private size : number
        ){}


    private swap(index1 : number,index2 : number){
        let temp = this.arr[index1];
        this.arr[index1] = this.arr[index2];
        this.arr[index2] = temp;
        return;
    }
    private reverse(left : number,right : number){
        while (left < right){
            this.swap(left,right);
            left++;
            right--;

        };
        return;
    }
    public rotate(num : number){
        this.reverse(0,this.size - 1);
        this.reverse(0,num-1)
        this.reverse(num,this.size-1);
    }
    public getList(){
        return this.arr.slice();
    }

}


const test = new Solution([1,2,3,4,5],5);

console.log(test.getList());
test.rotate(3);
console.log(test.getList());