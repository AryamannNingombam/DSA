var Solution = /** @class */ (function () {
    function Solution(arr) {
        this.arr = arr;
    }
    ;
    Solution.prototype.merge = function (left, right) {
        var result = [];
        while (left.length && right.length) {
            if (left[0] > right[0]) {
                result.push(right.shift());
            }
            else {
                result.push(left.shift());
            }
            ;
        }
        while (left.length) {
            result.push(left.shift());
        }
        ;
        while (right.length) {
            result.push(right.shift());
        }
        ;
        return result;
    };
    Solution.prototype.mergeSort = function (tempArr) {
        if (tempArr.length == 1)
            return tempArr;
        var midpoint = Math.floor(tempArr.length / 2);
        var left = this.mergeSort(tempArr.slice(0, midpoint));
        var right = this.mergeSort(tempArr.slice(midpoint));
        return this.merge(left, right);
    };
    Solution.prototype.sort = function () {
        this.arr = this.mergeSort(this.arr);
    };
    Solution.prototype.get = function () {
        return this.arr.slice();
    };
    ;
    return Solution;
}());
;
var arr = [4, 5, 3, 5, 4, 6, 3, 35, 56, 4, 3];
var sol = new Solution(arr);
console.log(sol.get());
sol.sort();
console.log(sol.get());
