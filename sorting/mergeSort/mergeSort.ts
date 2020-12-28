

class Solution{
    constructor(private arr : number[]){};


    private merge(left : number[],right  : number[]){
        const result :number[] = [];
        while (left.length&& right.length){
            if (left[0]  > right[0]){
                result.push(right.shift());
            }else{
                result.push(left.shift());
            };

            
        }
        while (left.length){
            result.push(left.shift());
        };
        while (right.length){
            result.push(right.shift());
        };


        return result;

    }

    private mergeSort(tempArr){
      

        if (tempArr.length == 1)return tempArr;
        const midpoint = Math.floor(tempArr.length/2);
        const left = this.mergeSort(tempArr.slice(0,midpoint));
        const right=this.mergeSort(tempArr.slice(midpoint));
    return this.merge(left,right);


    }
    public sort(){
        this.arr = this.mergeSort(this.arr);
    }

    public get(){
        return this.arr.slice();
    };



};

const arr = [4,5,3,5,4,6,3,35,56,4,3];
const sol = new Solution(arr);


console.log(sol.get());
sol.sort();
console.log(sol.get());
