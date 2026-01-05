/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    s=s.trim();
    var words=s.split(' ');
    var l=words.length;
    var lastword=words[l-1];
    return lastword.length;
};