var Solution = /** @class */ (function () {
    function Solution(arr, size) {
        this.arr = arr;
        this.size = size;
    }
    Solution.prototype.swap = function (index1, index2) {
        var temp = this.arr[index1];
        this.arr[index1] = this.arr[index2];
        this.arr[index2] = temp;
        return;
    };
    Solution.prototype.reverse = function (left, right) {
        while (left < right) {
            this.swap(left, right);
            left++;
            right--;
        }
        ;
        return;
    };
    Solution.prototype.rotate = function (num) {
        this.reverse(0, this.size - 1);
        this.reverse(0, num - 1);
        this.reverse(num, this.size - 1);
    };
    Solution.prototype.getList = function () {
        return this.arr.slice();
    };
    return Solution;
}());
var test = new Solution([1, 2, 3, 4, 5], 5);
console.log(test.getList());
test.rotate(3);
console.log(test.getList());
