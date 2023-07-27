function checkPalindrome(string) {

    const arrayValues = string.split('')
    const reverseArrayValues = arrayValues.reverse()
    const reverseString = reverseArrayValues.join('')
    if(string == reverseString) {
        return (string + ' is a palindrome')
    }
    else {
        return reverseString
    }
}

var value = checkPalindrome("123456654321")
console.log(value);
value = checkPalindrome("hello")
console.log(value);
