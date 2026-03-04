class Solution {
    public String licenseKeyFormatting(String s, int k) {
        StringBuilder cleaned = new StringBuilder();

        for (char c : s.toCharArray()) {
            if (c != '-') {
                cleaned.append(Character.toUpperCase(c));
            }
        }

        StringBuilder result = new StringBuilder();
        int firstGroup = cleaned.length() % k;
        int i = 0;

        if (firstGroup > 0) {
            result.append(cleaned.substring(0, firstGroup));
            i = firstGroup;
        }

        while (i < cleaned.length()) {
            if (result.length() > 0) result.append("-");
            result.append(cleaned.substring(i, i + k));
            i += k;
        }

        return result.toString();
    }
}