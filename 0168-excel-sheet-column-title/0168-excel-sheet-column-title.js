/**
 * @param {number} columnNumber
 * @return {string}
 */

var convertToTitle = function(columnNumber) {
    let result = '';
    while (columnNumber > 0) {
        columnNumber--;
        let char = String.fromCharCode(65 + (columnNumber % 26)); // 65 = 'A'
        result = char + result;
        columnNumber = Math.floor(columnNumber / 26);
    }
    return result;
};