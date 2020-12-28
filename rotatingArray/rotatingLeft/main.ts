class Solution{
    private reverse(arr : number[],left : number,right : number){
        let temp : number;
        while (left < right){
             temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;

        }
    }


    rotateArray(arr : number[],size : number,num : number){
        this.reverse(arr,0,num-1);
        this.reverse(arr,num,size-1);
        this.reverse(arr,0,size-1);
    }
}


const sol  = new Solution();
let test = [1,2,3,4,5];
console.log(test);
sol.rotateArray(test,5,3);

console.log(test);