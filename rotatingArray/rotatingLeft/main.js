var Solution = /** @class */ (function () {
    function Solution() {
    }
    Solution.prototype.reverse = function (arr, left, right) {
        var temp;
        while (left < right) {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    };
    Solution.prototype.rotateArray = function (arr, size, num) {
        this.reverse(arr, 0, num - 1);
        this.reverse(arr, num, size - 1);
        this.reverse(arr, 0, size - 1);
    };
    return Solution;
}());
var sol = new Solution();
var test = [1, 2, 3, 4, 5];
console.log(test);
sol.rotateArray(test, 5, 3);
console.log(test);
