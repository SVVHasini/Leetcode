/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    if(s.length==0||s.length==1){
        return true;
    }
    s=s.replace(/[^a-zA-Z0-9]/g, '');
    s=s.toLowerCase();
    var r= s.split('').reverse().join('');
    return r==s;
};