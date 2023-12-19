class Solution {
    func gcdOfStrings(_ str1: String, _ str2: String) -> String {
        if str1 + str2 != str2 + str1 {
            return ""
        }
        
        func gcd(_ a: Int, _ b: Int) -> Int {
            return b == 0 ? a : gcd(b, a % b)
        }
        
        let length = gcd(str1.count, str2.count)
        let index = str1.index(str1.startIndex, offsetBy: length)
        return String(str1.prefix(upTo: index))
    }
}

var sol = Solution()
sol.gcdOfStrings("ABABAB", "ABAB")
